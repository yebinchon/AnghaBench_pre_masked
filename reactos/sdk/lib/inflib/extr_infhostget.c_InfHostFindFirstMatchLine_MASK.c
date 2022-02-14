
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PINFCONTEXT ;
typedef int INFSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*,int ) ;
 int VAR_0 ;

int
FUNC_2(PINFCONTEXT VAR_1,
                          const WCHAR *VAR_2,
                          PINFCONTEXT VAR_3)
{
  INFSTATUS VAR_4;

  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (FUNC_0(VAR_4))
    {
      return 0;
    }
  else
    {
      VAR_0 = VAR_4;
      return -1;
    }
}
