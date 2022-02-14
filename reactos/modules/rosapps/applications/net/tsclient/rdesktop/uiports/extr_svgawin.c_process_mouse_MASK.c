
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int,int,int) ;

void FUNC_6(void)
{
  int VAR_11 = VAR_9;
  int VAR_12 = VAR_10;
  int VAR_13 = VAR_8;

  if (!VAR_6)
    return;
  VAR_9 = FUNC_3() - VAR_7.x;
  VAR_10 = FUNC_4() - VAR_7.y;
  VAR_8 = FUNC_2();

  if (VAR_8 != VAR_13)
  {

    if (VAR_8 & 1)
      if (!(VAR_13 & 1))
        FUNC_5(0, VAR_5, VAR_3 | VAR_1,
                       VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);
    if (VAR_13 & 1)
      if (!(VAR_8 & 1))
        FUNC_5(0, VAR_5, VAR_1,
                       VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);

    if (VAR_8 & 2)
      if (!(VAR_13 & 2))
        FUNC_5(0, VAR_5, VAR_3 | VAR_2,
                       VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);
    if (VAR_13 & 2)
      if (!(VAR_8 & 2))
        FUNC_5(0, VAR_5, VAR_2,
                       VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);

    if (VAR_8 & 4)
      if (!(VAR_13 & 4))
        FUNC_5(0, VAR_5, VAR_3 | VAR_0,
                       VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);
    if (VAR_13 & 4)
      if (!(VAR_8 & 4))
        FUNC_5(0, VAR_5, VAR_0,
                       VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);
  }
  if (VAR_9 != VAR_11 || VAR_10 != VAR_12)
  {
    FUNC_5(0, VAR_5, VAR_4,
                   VAR_9 + VAR_7.x, VAR_10 + VAR_7.y);
    FUNC_1(VAR_11, VAR_12);
    FUNC_0();
  }
}
