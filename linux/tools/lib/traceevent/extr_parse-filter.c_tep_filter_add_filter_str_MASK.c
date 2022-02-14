
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_handle {scalar_t__ test_filters; } ;
struct tep_event_filter {int error_buffer; struct tep_handle* tep; } ;
struct event_list {TYPE_1__* event; struct event_list* next; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;
struct TYPE_2__ {char* name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tep_event_filter*,TYPE_1__*,char const*,int ) ;
 int FUNC_1 (struct tep_event_filter*) ;
 int FUNC_2 (struct tep_handle*,struct event_list**,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct event_list*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char*,char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char*,char*,char**) ;
 char* FUNC_12 (struct tep_event_filter*,int ) ;

enum tep_errno FUNC_13(struct tep_event_filter *VAR_2,
      const char *VAR_3)
{
 struct tep_handle *VAR_4 = VAR_2->tep;
 struct event_list *VAR_5;
 struct event_list *VAR_6 = ((void*)0);
 const char *VAR_7;
 const char *VAR_8;
 char *VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12;
 enum tep_errno VAR_13 = 0;
 int VAR_14;
 int VAR_15;

 FUNC_1(VAR_2);

 VAR_7 = FUNC_8(VAR_3, ':');
 if (VAR_7)
  VAR_14 = VAR_7 - VAR_3;
 else
  VAR_14 = FUNC_10(VAR_3);

 do {
  VAR_8 = FUNC_8(VAR_3, ',');
  if (VAR_8 &&
      (!VAR_7 || VAR_8 < VAR_7))
   VAR_14 = VAR_8 - VAR_3;
  else if (VAR_7)
   VAR_14 = VAR_7 - VAR_3;
  else
   VAR_14 = FUNC_10(VAR_3);

  VAR_9 = FUNC_5(VAR_14 + 1);
  if (VAR_9 == ((void*)0)) {

   FUNC_4(VAR_6);
   return VAR_1;
  }
  FUNC_6(VAR_9, VAR_3, VAR_14);
  VAR_9[VAR_14] = 0;

  if (VAR_8)
   VAR_8++;

  VAR_3 = VAR_8;

  VAR_11 = FUNC_11(VAR_9, "/", &VAR_12);
  VAR_10 = FUNC_11(((void*)0), "/", &VAR_12);

  if (!VAR_11) {

   FUNC_4(VAR_6);
   FUNC_3(VAR_9);
   return VAR_0;
  }


  VAR_15 = FUNC_2(VAR_4, &VAR_6, FUNC_9(VAR_11), FUNC_9(VAR_10));
  if (VAR_15 < 0) {
   FUNC_4(VAR_6);
   FUNC_3(VAR_9);
   return VAR_15;
  }
  FUNC_3(VAR_9);
 } while (VAR_3);


 if (VAR_7)
  VAR_7++;


 for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_5->next) {
  VAR_15 = FUNC_0(VAR_2, VAR_5->event, VAR_7,
       VAR_2->error_buffer);

  if (VAR_15 < 0)
   VAR_13 = VAR_15;

  if (VAR_15 >= 0 && VAR_4->test_filters) {
   char *VAR_16;
   VAR_16 = FUNC_12(VAR_2, VAR_5->event->id);
   if (VAR_16) {
    FUNC_7(" '%s: %s'\n", VAR_5->event->name, VAR_16);
    FUNC_3(VAR_16);
   }
  }
 }

 FUNC_4(VAR_6);

 return VAR_13;
}
