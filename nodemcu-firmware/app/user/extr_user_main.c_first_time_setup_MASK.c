
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int type; int size; int addr; } ;
typedef TYPE_1__ partition_item_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;

__attribute__((used)) static uint32_t FUNC_5(partition_item_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5) {
    int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = VAR_4;




    for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_4; VAR_6 ++) {
        partition_item_t *VAR_10 = VAR_3 + VAR_6;
        switch (VAR_10->type) {

          case 130:



            if (VAR_10->size == 0) {
                VAR_10->size = FUNC_0(VAR_1);
            }
            break;

          case 129:


            VAR_10->size = FUNC_0(VAR_10->size);
            if (VAR_10->addr == 0)
                VAR_10->addr = VAR_8;
            break;

          case 128:
            if (VAR_10->size == ~0x0 && VAR_10->addr == 0) {

                VAR_10->addr = VAR_8;
                VAR_10->size = VAR_5 - VAR_8;
            } else if (VAR_10->size == ~0x0) {
                VAR_10->size = VAR_5 - VAR_10->addr;
           } else if (VAR_10->addr == 0) {



                VAR_10->addr = (VAR_10->size <= VAR_5 - 0x100000) ? 0x100000 : VAR_8;
            }
        }

        if (VAR_10->size == 0) {

            VAR_9--;
        } else {

            if (VAR_10->addr & (VAR_0 - 1) ||
                VAR_10->size & (VAR_0 - 1) ||
                VAR_10->addr < VAR_8 ||
                VAR_10->addr + VAR_10->size > VAR_5) {
                FUNC_3("Partition %u invalid alignment\n", VAR_6);
                while(1) { }
            }
            if (VAR_7 < VAR_6)
                VAR_3[VAR_7] = *VAR_10;

            VAR_7++;
            VAR_8 = VAR_10->addr + VAR_10->size;
        }
    }

    FUNC_4(VAR_2, VAR_3, VAR_9*sizeof(partition_item_t));
    FUNC_2(5000);
    FUNC_1();
}
