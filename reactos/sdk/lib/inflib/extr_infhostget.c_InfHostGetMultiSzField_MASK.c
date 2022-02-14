
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int PINFCONTEXT ;
typedef int INFSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;
 int VAR_0 ;

int
FUNC_2(PINFCONTEXT VAR_1,
                       ULONG VAR_2,
                       WCHAR *VAR_3,
                       ULONG VAR_4,
                       ULONG *VAR_5)
{
  INFSTATUS VAR_6;

  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3,
                               VAR_4, VAR_5);
  if (FUNC_0(VAR_6))
    {
      return 0;
    }
  else
    {
      VAR_0 = VAR_6;
      return -1;
    }
}
