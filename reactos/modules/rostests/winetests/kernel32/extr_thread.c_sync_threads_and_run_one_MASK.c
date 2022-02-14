
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_6(DWORD VAR_4, DWORD VAR_5)
{
  LONG VAR_6 = FUNC_0(&VAR_1);
  FUNC_4(-1 <= VAR_6 && VAR_6 <= 1);
  if (VAR_6 == 1)
  {
      FUNC_1( VAR_3 );
      FUNC_2( VAR_2 );
  }
  else
  {
    DWORD VAR_7 = FUNC_3(VAR_2, 10000);
    FUNC_5(VAR_7 == VAR_0, "WaitForSingleObject failed %x\n",VAR_7);
  }
  return VAR_4 == VAR_5;
}
