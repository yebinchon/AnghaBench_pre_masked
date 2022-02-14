
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curlstate {int kill_thread; int next_fill_start; int complete; size_t content_length; size_t map_length; unsigned char* map; size_t current_fill_start; size_t current_fill_end; int easy; scalar_t__ accept_ranges; scalar_t__ head; scalar_t__ curl_error; } ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char*,size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (char*,int,char*,size_t,size_t) ;
 int FUNC_6 (struct curlstate*) ;
 int FUNC_7 (struct curlstate*) ;

__attribute__((used)) static void FUNC_8(struct curlstate *VAR_7)
{
 char VAR_8[32];
 size_t VAR_9, VAR_10, VAR_11;
 CURLcode VAR_12;

 VAR_12 = FUNC_3(VAR_7->easy);
 if (VAR_12 != VAR_2) {


  FUNC_6(VAR_7);
  VAR_7->curl_error = VAR_12;
  VAR_7->kill_thread = 1;
  FUNC_7(VAR_7);
  return;
 }


 FUNC_6(VAR_7);
 if (VAR_7->head)
 {
  VAR_7->head = 0;
  FUNC_4(VAR_7->easy, VAR_4, 0);
  FUNC_4(VAR_7->easy, VAR_3, ((void*)0));
  FUNC_4(VAR_7->easy, VAR_6, ((void*)0));
  if (VAR_7->accept_ranges)
  {
   FUNC_5(VAR_8, 32, "%d-%d", 0, VAR_1-1);
   FUNC_4(VAR_7->easy, VAR_5, VAR_8);
   VAR_7->next_fill_start = VAR_1;
  }
  FUNC_7(VAR_7);
  return;
 }


 if (!VAR_7->accept_ranges)
 {
  FUNC_0(("we got it all, in one request.\n"));
  VAR_7->complete = 1;
  VAR_7->kill_thread = 1;
  FUNC_7(VAR_7);
  return;
 }


 FUNC_2((VAR_7->next_fill_start & (VAR_0-1)) == 0);
 VAR_9 = VAR_7->next_fill_start>>VAR_0;
 if (VAR_7->content_length > 0)
 {

  size_t VAR_13 = VAR_7->map_length;
  unsigned char *VAR_14 = VAR_7->map;
  while (VAR_9 < VAR_13 && FUNC_1(VAR_14, VAR_9))
   ++VAR_9;
  if (VAR_9 == VAR_13)
  {
   VAR_9 = 0;
   while (VAR_9 < VAR_13 && FUNC_1(VAR_14, VAR_9))
    ++VAR_9;
   if (VAR_9 == VAR_13)
   {

    FUNC_0(("we got it all block=%d map_length=%d!\n", VAR_9, VAR_13));
    VAR_7->complete = 1;
    VAR_7->kill_thread = 1;
    FUNC_7(VAR_7);
    return;
   }
  }
 }
 else
 {
  VAR_7->complete = 1;
  VAR_7->kill_thread = 1;
  FUNC_7(VAR_7);
  return;
 }

 FUNC_0(("block requested was %d, fetching %d\n", VAR_7->next_fill_start>>VAR_0, VAR_9));


 VAR_10 = VAR_9<<VAR_0;
 VAR_11 = VAR_10 + VAR_1-1;
 VAR_7->current_fill_start = VAR_10;
 if (VAR_7->content_length > 0 && VAR_11 >= VAR_7->content_length)
  VAR_11 = VAR_7->content_length-1;
 VAR_7->current_fill_end = VAR_11;
 FUNC_5(VAR_8, 32, "%d-%d", VAR_10, VAR_11);



 VAR_7->next_fill_start = VAR_7->current_fill_start+VAR_1;
 FUNC_7(VAR_7);


 FUNC_0(("requesting range %s\n", VAR_8));
 FUNC_4(VAR_7->easy, VAR_5, VAR_8);
}
