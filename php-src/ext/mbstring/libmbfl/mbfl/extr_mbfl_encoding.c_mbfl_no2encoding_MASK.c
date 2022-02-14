
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int no_encoding; } ;
typedef TYPE_1__ mbfl_encoding ;
typedef enum mbfl_no_encoding { ____Placeholder_mbfl_no_encoding } mbfl_no_encoding ;


 TYPE_1__** VAR_0 ;

const mbfl_encoding *
FUNC_0(enum mbfl_no_encoding VAR_1)
{
 const mbfl_encoding *VAR_2;
 int VAR_3;

 VAR_3 = 0;
 while ((VAR_2 = VAR_0[VAR_3++]) != ((void*)0)){
  if (VAR_2->no_encoding == VAR_1) {
   return VAR_2;
  }
 }

 return ((void*)0);
}
