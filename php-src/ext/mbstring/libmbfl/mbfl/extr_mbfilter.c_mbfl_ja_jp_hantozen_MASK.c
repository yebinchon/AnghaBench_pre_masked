
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {size_t len; unsigned char* val; int * encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_22__ {scalar_t__ (* filter_function ) (int ,TYPE_2__*) ;TYPE_3__* opaque; scalar_t__ filter_flush; } ;
typedef TYPE_2__ mbfl_memory_device ;
struct TYPE_23__ {int mode; } ;
typedef TYPE_3__ mbfl_filt_tl_jisx0201_jisx0208_param ;
typedef TYPE_2__ mbfl_convert_filter ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int *,int (*) (int,void*),int (*) (void*),TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,int (*) (int,void*),int (*) (void*),TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,size_t,int ) ;
 int FUNC_7 (int,void*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_2__*) ;
 int VAR_1 ;

mbfl_string *
FUNC_11(
    mbfl_string *VAR_2,
    mbfl_string *VAR_3,
    int VAR_4)
{
 size_t VAR_5;
 unsigned char *VAR_6;
 mbfl_memory_device VAR_7;
 mbfl_convert_filter *VAR_8 = ((void*)0);
 mbfl_convert_filter *VAR_9 = ((void*)0);
 mbfl_convert_filter *VAR_10 = ((void*)0);
 mbfl_convert_filter *VAR_11 = ((void*)0);
 mbfl_filt_tl_jisx0201_jisx0208_param *VAR_12 = ((void*)0);

 FUNC_6(&VAR_7, VAR_2->len, 0);
 FUNC_9(VAR_3);

 VAR_3->no_language = VAR_2->no_language;
 VAR_3->encoding = VAR_2->encoding;

 VAR_8 = FUNC_2(
  &VAR_0,
  VAR_2->encoding,
  FUNC_7, 0, &VAR_7);
 if (VAR_8 == ((void*)0)) {
  goto out;
 }
 VAR_11 = VAR_8;

 VAR_12 =
  (mbfl_filt_tl_jisx0201_jisx0208_param *)FUNC_5(sizeof(mbfl_filt_tl_jisx0201_jisx0208_param));
 if (VAR_12 == ((void*)0)) {
  goto out;
 }

 VAR_12->mode = VAR_4;

 VAR_10 = FUNC_3(
  &VAR_1,
  (int(*)(int, void*))VAR_11->filter_function,
  (int(*)(void*))VAR_11->filter_flush,
  VAR_11);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_12);
  goto out;
 }

 VAR_10->opaque = VAR_12;
 VAR_11 = VAR_10;

 VAR_9 = FUNC_2(
  VAR_2->encoding,
  &VAR_0,
  (int(*)(int, void*))VAR_11->filter_function,
  (int(*)(void*))VAR_11->filter_flush,
  VAR_11);
 if (VAR_9 == ((void*)0)) {
  goto out;
 }


 VAR_6 = VAR_2->val;
 VAR_5 = VAR_2->len;
 if (VAR_6 != ((void*)0)) {
  while (VAR_5 > 0) {
   if ((*VAR_9->filter_function)(*VAR_6++, VAR_9) < 0) {
    break;
   }
   VAR_5--;
  }
 }

 FUNC_1(VAR_9);
 VAR_3 = FUNC_8(&VAR_7, VAR_3);
out:
 if (VAR_10 != ((void*)0)) {
  if (VAR_10->opaque != ((void*)0)) {
   FUNC_4(VAR_10->opaque);
  }
  FUNC_0(VAR_10);
 }

 if (VAR_8 != ((void*)0)) {
  FUNC_0(VAR_8);
 }

 if (VAR_9 != ((void*)0)) {
  FUNC_0(VAR_9);
 }

 return VAR_3;
}
