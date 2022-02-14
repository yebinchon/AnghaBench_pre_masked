
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3 (HANDLE VAR_0)
{
 if (FUNC_1( FUNC_2((HANDLE)VAR_0)))
 {
  return 0;
 }
 FUNC_0((0,"ZwClose failed:\n"));
 return -1;
}
