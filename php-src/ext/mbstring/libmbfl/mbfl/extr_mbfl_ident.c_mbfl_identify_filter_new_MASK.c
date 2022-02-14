
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbfl_identify_filter ;
typedef enum mbfl_no_encoding { ____Placeholder_mbfl_no_encoding } mbfl_no_encoding ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;

mbfl_identify_filter *FUNC_3(enum mbfl_no_encoding VAR_0)
{
 mbfl_identify_filter *VAR_1;


 VAR_1 = (mbfl_identify_filter *)FUNC_2(sizeof(mbfl_identify_filter));
 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }

 if (FUNC_1(VAR_1, VAR_0)) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
