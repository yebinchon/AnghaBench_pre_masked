
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int,int ,int,int ) ;

VOID
FUNC_2(int VAR_3)
{
  ULONG VAR_4;
  ULONG VAR_5;
  ULONG VAR_6;

  if ('\r' == VAR_3)
    {
      VAR_1 = 0;
    }
  else if ('\n' == VAR_3)
    {
      VAR_1 = 0;
      VAR_2++;
    }
  else if ('\t' == VAR_3)
    {
      VAR_1 = (VAR_1 + 8) & ~ 7;
    }
  else
    {
      FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2);
      VAR_1++;
    }
  FUNC_0(&VAR_4, &VAR_5, &VAR_6);
  if (VAR_4 <= VAR_1)
    {
      VAR_1 = 0;
      VAR_2++;
    }
}
