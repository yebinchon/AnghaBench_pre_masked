
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int blue; int green; int red; } ;
struct TYPE_4__ {int layer; int mask; TYPE_1__ color; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,int ,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
    static uint32_t VAR_2 = -1;
    if(VAR_2 != VAR_1){
        for(uint32_t VAR_3=0;; VAR_3++){


            if((VAR_0[VAR_3].layer == (VAR_1 & VAR_0[VAR_3].mask)) || (VAR_0[VAR_3].layer == 0xFFFFFFFF)){
                FUNC_4(32, VAR_0[VAR_3].color.red, VAR_0[VAR_3].color.green, VAR_0[VAR_3].color.blue);
                VAR_2 = VAR_1;
                break;
            }
        }
    }
    FUNC_3();
}
