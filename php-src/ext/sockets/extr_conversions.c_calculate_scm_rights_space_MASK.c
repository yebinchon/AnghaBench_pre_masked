
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int ser_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ) ;

size_t FUNC_4(const zval *VAR_1, ser_context *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_1) != VAR_0) {
  FUNC_2(VAR_2, "%s", "expected an array here");
  return (size_t)-1;
 }

 VAR_3 = FUNC_3(FUNC_0(VAR_1));
 if (VAR_3 == 0) {
  FUNC_2(VAR_2, "%s", "expected at least one element in this array");
  return (size_t)-1;
 }

 return FUNC_3(FUNC_0(VAR_1)) * sizeof(int);
}
