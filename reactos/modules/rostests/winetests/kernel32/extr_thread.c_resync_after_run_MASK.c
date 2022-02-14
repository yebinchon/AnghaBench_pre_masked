
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
  LONG VAR_4 = FUNC_0(&VAR_1);
  FUNC_4(-1 <= VAR_4 && VAR_4 <= 1);
  if (VAR_4 == -1)
  {
      FUNC_1( VAR_2 );
      FUNC_2( VAR_3 );
  }
  else
  {
    DWORD VAR_5 = FUNC_3(VAR_3, 10000);
    FUNC_5(VAR_5 == VAR_0, "WaitForSingleObject failed\n");
  }
}
