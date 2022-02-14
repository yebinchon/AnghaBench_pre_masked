
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ type; int addr; } ;
typedef TYPE_1__ partition_item_t ;
typedef int header ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static void FUNC_5 (partition_item_t *VAR_6, uint32_t VAR_7) {
    uint8_t VAR_8[sizeof(uint32_t)] = {0};
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        if (VAR_6[VAR_9].type == VAR_4) {
            uint32_t VAR_10 = VAR_6[VAR_9].addr;
            FUNC_3(VAR_8, VAR_10, sizeof(VAR_8));
            if (VAR_8[0] != 0x05) {
                uint32_t VAR_11 = VAR_6[VAR_9].addr/VAR_1;
                if (FUNC_1(VAR_11) == VAR_2) {
                    FUNC_0("Writing Init Data to 0x%08x\n",VAR_10);
                    FUNC_4(VAR_5, VAR_10, VAR_0);
                }
            }

            FUNC_2(VAR_3, &VAR_10, 0);
            return;
        }
    }


}
