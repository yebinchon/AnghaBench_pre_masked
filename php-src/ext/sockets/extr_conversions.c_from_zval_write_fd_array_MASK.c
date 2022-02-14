
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int ser_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int const*,int *,void**,int *) ;
 int VAR_1 ;

void FUNC_3(const zval *VAR_2, char *VAR_3, ser_context *VAR_4)
{
 if (FUNC_0(VAR_2) != VAR_0) {
  FUNC_1(VAR_4, "%s", "expected an array here");
  return;
 }

   FUNC_2(VAR_2, &VAR_1, (void**)&VAR_3, VAR_4);
}
