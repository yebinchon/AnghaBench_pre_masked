
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,scalar_t__,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int,int,int) ;

void FUNC_3(int VAR_4, int VAR_5, int VAR_6, int VAR_7, uint8* VAR_8)
{
  int VAR_9;

  if (VAR_4 < 0)
  {
    VAR_6 = VAR_6 + VAR_4;
    VAR_4 = 0;
  }
  if (VAR_5 < 0)
  {
    VAR_7 = VAR_7 + VAR_5;
    VAR_5 = 0;
  }
  if (VAR_3 != 0)
  {
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    {
      FUNC_0(VAR_8, FUNC_1(VAR_4, VAR_5 + VAR_9, VAR_3, VAR_2, VAR_1), VAR_6 * VAR_0);
      VAR_8 = VAR_8 + VAR_6 * VAR_0;
    }
  }
  else
  {
    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    {
      FUNC_2(VAR_8, VAR_4, VAR_5 + VAR_9, VAR_6 * VAR_0);
      VAR_8 = VAR_8 + VAR_6 * VAR_0;
    }
  }
}
