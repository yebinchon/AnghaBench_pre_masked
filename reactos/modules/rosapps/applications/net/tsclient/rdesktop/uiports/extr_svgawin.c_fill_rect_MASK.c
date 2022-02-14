
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 scalar_t__ FUNC_2 (int*,int*,int*,int*,int *,int *) ;

void FUNC_3(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7;

  if (FUNC_2(&VAR_0, &VAR_1, &VAR_2, &VAR_3, ((void*)0), ((void*)0)))
  {
    if (VAR_5 == 0xc)
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    else if (VAR_5 == 0xf)
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, -1);
    else if (VAR_5 == 0x0)
      FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
    else
    {
      for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
          FUNC_1(VAR_0 + VAR_7, VAR_1 + VAR_6, VAR_4, VAR_5);
    }
  }
}
