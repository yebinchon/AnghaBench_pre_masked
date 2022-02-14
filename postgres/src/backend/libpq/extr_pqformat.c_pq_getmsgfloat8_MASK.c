
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef int float8 ;
typedef int StringInfo ;


 int FUNC_0 (int ) ;

float8
FUNC_1(StringInfo VAR_0)
{
 union
 {
  float8 f;
  int64 i;
 } VAR_1;

 VAR_1.i = FUNC_0(VAR_0);
 return VAR_1.f;
}
