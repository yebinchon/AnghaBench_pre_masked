
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t len; unsigned char* val; int encoding; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_9__ {int (* filter_function ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ mbfl_convert_filter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,int *,int ,int ,size_t*) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*) ;

size_t
FUNC_4(mbfl_string *VAR_2)
{
 size_t VAR_3, VAR_4;
 unsigned char *VAR_5;
 mbfl_convert_filter *VAR_6;

 VAR_3 = 0;
 if (VAR_2->len > 0 && VAR_2->val != ((void*)0)) {

  VAR_6 = FUNC_2(
      VAR_2->encoding,
      &VAR_1,
      VAR_0, 0, &VAR_3);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_6);
   return -1;
  }


  VAR_5 = VAR_2->val;
  VAR_4 = VAR_2->len;
  while (VAR_4 > 0) {
   (*VAR_6->filter_function)(*VAR_5++, VAR_6);
   VAR_4--;
  }

  FUNC_1(VAR_6);
  FUNC_0(VAR_6);
 }

 return VAR_3;
}
