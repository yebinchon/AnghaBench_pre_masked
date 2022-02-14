
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(int VAR_3, int VAR_4, int VAR_5,
                  int VAR_6, int VAR_7)
{
  char VAR_8, VAR_9, VAR_10[66];
  const char *VAR_11="0123456789ABCDEF";
  int VAR_12;

  if (VAR_7 & VAR_0)
    VAR_7 &= ~VAR_2;
  if (VAR_4 < 2 || VAR_4 > 16)
    return 0;
  VAR_8 = (VAR_7 & VAR_2) ? '0' : ' ';
  VAR_9 = 0;

  if(VAR_7 & VAR_1 && VAR_3 < 0)
    {
      VAR_9 = '-';
      VAR_3 = -VAR_3;
      VAR_5--;
    }

  VAR_12 = 0;
  if(VAR_3 == 0)
    VAR_10[VAR_12++] = VAR_11[0];
  else while(VAR_3 != 0)
    VAR_10[VAR_12++] = VAR_11[FUNC_0(VAR_3, VAR_4)];

  if(VAR_12 > VAR_6)
    VAR_6 = VAR_12;
  VAR_5 -= VAR_6;

  if(!(VAR_7&(VAR_2+VAR_0)))
    while(VAR_5-->0)
      FUNC_1(' ');

  if(VAR_9)
    FUNC_1(VAR_9);

  if (!(VAR_7 & VAR_0))
    while (VAR_5-- > 0)
      FUNC_1(VAR_8);

  while (VAR_12 < VAR_6--)
    FUNC_1('0');

  while (VAR_12-- > 0)
    FUNC_1(VAR_10[VAR_12]);

  while (VAR_5-- > 0)
    FUNC_1(' ');;

  return 1;
}
