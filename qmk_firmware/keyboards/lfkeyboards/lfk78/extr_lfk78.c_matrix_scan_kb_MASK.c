
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int blue; int green; int red; } ;
struct TYPE_4__ {int layer; int mask; TYPE_1__ color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
    static uint32_t VAR_5 = -1;
    if(VAR_5 != VAR_4){
        for(uint32_t VAR_6=0;; VAR_6++){


            if((VAR_3[VAR_6].layer == (VAR_4 & VAR_3[VAR_6].mask)) || (VAR_3[VAR_6].layer == 0xFFFFFFFF)){
                VAR_0 = VAR_3[VAR_6].color.red;
                VAR_1 = VAR_3[VAR_6].color.green;
                VAR_2 = VAR_3[VAR_6].color.blue;
                VAR_5 = VAR_4;
                break;
            }
        }
    }
    FUNC_4();
}
