
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cy; scalar_t__ y; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 size_t VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;

BOOLEAN FUNC_7(void)
{
    BOOLEAN VAR_9=VAR_4;

    if(VAR_7 == 0)
        FUNC_6(VAR_4);

    VAR_7++;

 if(VAR_7 == (VAR_8[VAR_2].cy-1))
 {
        FUNC_6(VAR_1);

     FUNC_3(VAR_8[VAR_2].cy-1);

        VAR_7 = 0;

  FUNC_5(VAR_5);
  FUNC_0(VAR_8[VAR_2].y+VAR_8[VAR_2].cy);
  FUNC_4(" Press any key to continue listing or press ESC to stop... ",1,VAR_8[VAR_2].y+VAR_8[VAR_2].cy);
  VAR_6=0;
        while(!(VAR_6=FUNC_1()))
  {
   FUNC_2(VAR_1);
  }
  FUNC_5(VAR_0);

  if(VAR_6==VAR_3)
  {
   VAR_9=VAR_1;
  }
  VAR_6=0;
 }


    return VAR_9;
}
