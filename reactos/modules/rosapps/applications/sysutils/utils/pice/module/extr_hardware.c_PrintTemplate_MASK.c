
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_2__ {int y; int cy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 size_t VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_9(void)
{
    USHORT VAR_7,VAR_8;

 FUNC_1();

    FUNC_5();

    for(VAR_8=0;VAR_8<4;VAR_8++)
    {
     for(VAR_7=VAR_6[VAR_8].y;VAR_7<(VAR_6[VAR_8].y+VAR_6[VAR_8].cy);VAR_7++)
        {
      FUNC_0(VAR_7);
        }
    }

    FUNC_3();

 FUNC_7(VAR_1);
 FUNC_6(VAR_0);

 FUNC_0(VAR_6[VAR_2].y-1);
 FUNC_0(VAR_6[VAR_4].y-1);
 FUNC_0(VAR_6[VAR_3].y-1);

    FUNC_5();

 FUNC_8();
    FUNC_4(VAR_5);

 FUNC_2();
}
