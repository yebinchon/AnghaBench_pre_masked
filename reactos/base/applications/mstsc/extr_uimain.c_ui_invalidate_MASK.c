
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int,int,int) ;
 scalar_t__ FUNC_1 (int*,int*,int*,int*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,int,int,int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

void
FUNC_5(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
  char * VAR_5;

  if (VAR_3 < 1 || VAR_4 < 1)
  {
    return;
  }
  if (FUNC_1(&VAR_1, &VAR_2, &VAR_3, &VAR_4, 0, 0))
  {
    VAR_3 = (VAR_3 + 3) & ~3;
    VAR_5 = (char *) FUNC_4(VAR_3 * VAR_4 * 4);
    FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4, VAR_3 * ((VAR_0 + 7) / 8));
    FUNC_2(VAR_5, VAR_3, VAR_4, VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_3(VAR_5);
  }
}
