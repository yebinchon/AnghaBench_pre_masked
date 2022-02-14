
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int no_encoding; } ;
typedef TYPE_1__ mbfl_encoding ;
typedef enum mbfl_no_encoding { ____Placeholder_mbfl_no_encoding } mbfl_no_encoding ;


 TYPE_1__* FUNC_0 (char const*) ;
 int VAR_0 ;

enum mbfl_no_encoding
FUNC_1(const char *VAR_1)
{
 const mbfl_encoding *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0)) {
  return VAR_0;
 } else {
  return VAR_2->no_encoding;
 }
}
