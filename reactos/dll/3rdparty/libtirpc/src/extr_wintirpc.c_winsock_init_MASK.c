
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;

BOOL FUNC_4(void)
{
 int VAR_4;
 VAR_4 = FUNC_2(FUNC_0( 3, 3 ), &VAR_2);
 if (VAR_4 != 0) {
  VAR_3 = 0;
  FUNC_3(L"WSAStartup failed!\n");
  FUNC_1();
  return VAR_0;
 }
 return VAR_1;
}
