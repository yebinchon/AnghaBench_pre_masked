
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ partition_item_t ;
typedef enum flash_size_map { ____Placeholder_flash_size_map } flash_size_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,void**) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int) ;

void FUNC_9(void) {





    partition_item_t *VAR_4 = ((void*)0), *VAR_5;
    enum flash_size_map VAR_6 = FUNC_7();



    static char VAR_7[] = "\001\000\002\003\004\003\004\004\005\006";
    uint32_t VAR_8 = VAR_3 << VAR_7[VAR_6];

    uint32_t VAR_9 = FUNC_5(VAR_1, (void **) &VAR_4);
    uint32_t VAR_10 = VAR_9 / sizeof(partition_item_t);

    if (VAR_8 < VAR_2) {
        FUNC_3("Flash size (%u) too small to support NodeMCU\n", VAR_8);
        return;
    } else {
        FUNC_3("system SPI FI size:%u, Flash size: %u\n", VAR_6, VAR_8 );
    }

    VAR_5 = FUNC_1(VAR_9);

    if ( !VAR_4 || !VAR_5 || VAR_10 * sizeof(partition_item_t) != VAR_9) {
        return;
    }
    FUNC_2(VAR_5, VAR_4, VAR_9);

    if (VAR_5[VAR_10-1].type == 0) {

        VAR_10 = FUNC_0(VAR_5, VAR_10-1, VAR_8);
    }

    if (FUNC_5(VAR_0, ((void*)0))!=0) {
        FUNC_4(VAR_5, VAR_10);
    }



    if( VAR_6 > 1 && FUNC_8(VAR_5, VAR_10, VAR_6)) {
        return;
    }
    FUNC_3("Invalid system partition table\n");
    while (1) {};
}
