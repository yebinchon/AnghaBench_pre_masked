
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {size_t slaves; TYPE_3__* slot; TYPE_3__* slave; TYPE_1__ host; } ;
typedef TYPE_2__ redisCachedMaster ;
struct TYPE_7__ {int addr; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(redisCachedMaster *VAR_0) {
    size_t VAR_1;


    for (VAR_1 = 0; VAR_1 < VAR_0->slaves; VAR_1++) {
        FUNC_1(VAR_0->slave[VAR_1].addr);
    }


    FUNC_1(VAR_0->host.addr);
    FUNC_0(VAR_0->slave, 1);
    FUNC_0(VAR_0->slot, 1);
}
