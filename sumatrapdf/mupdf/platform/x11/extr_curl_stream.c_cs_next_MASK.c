
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct curlstate {unsigned char* public_buffer; size_t content_length; scalar_t__ data_arrived; int current_fill_start; int buffer; int next_fill_start; int * map; scalar_t__ curl_error; } ;
typedef int int64_t ;
struct TYPE_3__ {int pos; unsigned char* rp; unsigned char* wp; struct curlstate* state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
typedef scalar_t__ CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (struct curlstate*) ;
 int FUNC_5 (unsigned char*,int,size_t) ;
 int FUNC_6 (struct curlstate*) ;

__attribute__((used)) static int FUNC_7(fz_context *VAR_5, fz_stream *VAR_6, size_t VAR_7)
{
 struct curlstate *VAR_8 = VAR_6->state;
 size_t VAR_9 = 0;
 int64_t VAR_10 = VAR_6->pos;
 int VAR_11 = VAR_10>>VAR_0;
 size_t VAR_12 = (-VAR_10) & (VAR_1-1);
 unsigned char *VAR_13 = VAR_8->public_buffer;

 FUNC_1(VAR_7 != 0);

 VAR_6->rp = VAR_6->wp = VAR_13;
 FUNC_4(VAR_8);



 if (VAR_8->curl_error)
 {
  CURLcode VAR_14 = VAR_8->curl_error;
  VAR_8->curl_error = 0;
  FUNC_6(VAR_8);
  FUNC_3(VAR_5, VAR_3, "cannot fetch data: %s", FUNC_2(VAR_14));
 }

 if ((size_t) VAR_10 > VAR_8->content_length)
 {
  FUNC_6(VAR_8);
  if (VAR_8->data_arrived == 0)
   FUNC_3(VAR_5, VAR_4, "read of a block we don't have (A) (offset=%ld)", VAR_10);
  return VAR_2;
 }

 if (VAR_7 > sizeof(VAR_8->public_buffer))
  VAR_7 = sizeof(VAR_8->public_buffer);

 if (VAR_8->map == ((void*)0))
 {


  if (VAR_10 + VAR_7 > VAR_8->current_fill_start)
  {
   FUNC_6(VAR_8);
   FUNC_3(VAR_5, VAR_4, "read of a block we don't have (B) (offset=%ld)", VAR_10);
  }
  FUNC_5(VAR_13, VAR_8->buffer + VAR_10, VAR_7);
  FUNC_6(VAR_8);
  VAR_6->wp = VAR_13 + VAR_7;
  VAR_6->pos += VAR_7;
  if (VAR_7 == 0)
   return VAR_2;
  return *VAR_6->rp++;
 }


 if (VAR_10 + VAR_7 > VAR_8->content_length)
  VAR_7 = VAR_8->content_length - VAR_10;
 if (VAR_12 > VAR_7)
  VAR_12 = VAR_7;
 if (VAR_12 > 0)
 {

  if (!FUNC_0(VAR_8->map, VAR_11))
  {
   VAR_8->next_fill_start = VAR_11<<VAR_0;
   FUNC_6(VAR_8);
   FUNC_3(VAR_5, VAR_4, "read of a block we don't have (C) (offset=%ld)", VAR_10);
  }
  VAR_11++;
  FUNC_5(VAR_13, VAR_8->buffer + VAR_10, VAR_12);
  VAR_13 += VAR_12;
  VAR_10 += VAR_12;
  VAR_7 -= VAR_12;
  VAR_9 += VAR_12;
 }


 while (VAR_7 > VAR_1)
 {
  if (!FUNC_0(VAR_8->map, VAR_11))
  {


   FUNC_6(VAR_8);
   VAR_8->next_fill_start = VAR_11<<VAR_0;
   VAR_6->wp += VAR_9;
   VAR_6->pos += VAR_9;

   if (VAR_9 == 0)
    FUNC_3(VAR_5, VAR_4, "read of a block we don't have (D) (offset=%ld)", VAR_10);

   return *VAR_6->rp++;
  }
  VAR_11++;
  FUNC_5(VAR_13, VAR_8->buffer + VAR_10, VAR_1);
  VAR_13 += VAR_1;
  VAR_10 += VAR_1;
  VAR_7 -= VAR_1;
  VAR_9 += VAR_1;
 }


 if (VAR_7 > 0)
 {
  if (!FUNC_0(VAR_8->map, VAR_11))
  {


   FUNC_6(VAR_8);
   VAR_8->next_fill_start = VAR_11<<VAR_0;
   VAR_6->wp += VAR_9;
   VAR_6->pos += VAR_9;

   if (VAR_9 == 0)
    FUNC_3(VAR_5, VAR_4, "read of a block we don't have (E) (offset=%ld)", VAR_10);

   return *VAR_6->rp++;
  }
  FUNC_5(VAR_13, VAR_8->buffer + VAR_10, VAR_7);
  VAR_9 += VAR_7;
 }

 FUNC_6(VAR_8);
 VAR_6->wp += VAR_9;
 VAR_6->pos += VAR_9;
 if (VAR_9 == 0)
  return VAR_2;
 return *VAR_6->rp++;
}
