
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num; int * items; } ;
struct TYPE_6__ {int num; int * items; } ;
struct TYPE_7__ {TYPE_1__ connect_addresses; TYPE_2__ bind_addresses; } ;
typedef TYPE_3__ nn_options_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3 (nn_options_t *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0->bind_addresses.num; ++VAR_2) {
        VAR_3 = FUNC_1 (VAR_1, VAR_0->bind_addresses.items[VAR_2]);
        FUNC_0 (VAR_3 >= 0, "Can't bind");
    }
    for (VAR_2 = 0; VAR_2 < VAR_0->connect_addresses.num; ++VAR_2) {
        VAR_3 = FUNC_2 (VAR_1, VAR_0->connect_addresses.items[VAR_2]);
        FUNC_0 (VAR_3 >= 0, "Can't connect");
    }
}
