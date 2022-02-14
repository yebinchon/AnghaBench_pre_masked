
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbfl_identify_vtbl {int encoding; } ;
typedef enum mbfl_no_encoding { ____Placeholder_mbfl_no_encoding } mbfl_no_encoding ;


 struct mbfl_identify_vtbl** VAR_0 ;

const struct mbfl_identify_vtbl * FUNC_0(enum mbfl_no_encoding VAR_1)
{
 const struct mbfl_identify_vtbl * VAR_2;
 int VAR_3;

 VAR_3 = 0;
 while ((VAR_2 = VAR_0[VAR_3++]) != ((void*)0)) {
  if (VAR_2->encoding == VAR_1) {
   break;
  }
 }

 return VAR_2;
}
