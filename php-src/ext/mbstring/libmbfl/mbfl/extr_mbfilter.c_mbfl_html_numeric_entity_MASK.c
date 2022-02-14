
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct collector_htmlnumericentity_data {int* convmap; int mapsize; TYPE_2__* decoder; scalar_t__ digit; scalar_t__ cache; scalar_t__ status; } ;
struct TYPE_12__ {size_t len; unsigned char* val; int * encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;
typedef struct collector_htmlnumericentity_data mbfl_memory_device ;
struct TYPE_13__ {scalar_t__ (* filter_function ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ mbfl_convert_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int *,int *,int ,int (*) (void*),struct collector_htmlnumericentity_data*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct collector_htmlnumericentity_data*,size_t,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (struct collector_htmlnumericentity_data*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;

mbfl_string *
FUNC_7(
    mbfl_string *VAR_6,
    mbfl_string *VAR_7,
    int *VAR_8,
    int VAR_9,
    int VAR_10)
{
 struct collector_htmlnumericentity_data VAR_11;
 mbfl_memory_device VAR_12;
 mbfl_convert_filter *VAR_13;
 size_t VAR_14;
 unsigned char *VAR_15;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_5(VAR_7);
 VAR_7->no_language = VAR_6->no_language;
 VAR_7->encoding = VAR_6->encoding;
 FUNC_3(&VAR_12, VAR_6->len, 0);


 VAR_11.decoder = FUNC_2(
     &VAR_3,
     VAR_6->encoding,
     VAR_5, 0, &VAR_12);

 if (VAR_10 == 0) {
  VAR_13 = FUNC_2(
      VAR_6->encoding,
      &VAR_3,
      VAR_2, 0, &VAR_11);
 } else if (VAR_10 == 2) {
  VAR_13 = FUNC_2(
      VAR_6->encoding,
      &VAR_3,
      VAR_1, 0, &VAR_11);
 } else {
  VAR_13 = FUNC_2(
      VAR_6->encoding,
      &VAR_3,
      VAR_0,
   (int (*)(void*))VAR_4, &VAR_11);
 }
 if (VAR_11.decoder == ((void*)0) || VAR_13 == ((void*)0)) {
  FUNC_0(VAR_13);
  FUNC_0(VAR_11.decoder);
  return ((void*)0);
 }
 VAR_11.status = 0;
 VAR_11.cache = 0;
 VAR_11.digit = 0;
 VAR_11.convmap = VAR_8;
 VAR_11.mapsize = VAR_9;


 VAR_15 = VAR_6->val;
 VAR_14 = VAR_6->len;
 if (VAR_15 != ((void*)0)) {
  while (VAR_14 > 0) {
   if ((*VAR_13->filter_function)(*VAR_15++, VAR_13) < 0) {
    break;
   }
   VAR_14--;
  }
 }
 FUNC_1(VAR_13);
 FUNC_1(VAR_11.decoder);
 VAR_7 = FUNC_4(&VAR_12, VAR_7);
 FUNC_0(VAR_13);
 FUNC_0(VAR_11.decoder);

 return VAR_7;
}
