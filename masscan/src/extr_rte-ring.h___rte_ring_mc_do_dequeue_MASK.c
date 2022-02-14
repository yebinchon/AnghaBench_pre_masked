
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_4__ {unsigned int head; unsigned int tail; } ;
struct TYPE_3__ {unsigned int mask; unsigned int tail; } ;
struct rte_ring {TYPE_2__ cons; void** ring; TYPE_1__ prod; } ;
typedef enum rte_ring_queue_behavior { ____Placeholder_rte_ring_queue_behavior } rte_ring_queue_behavior ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rte_ring*,int ,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned int*,unsigned int,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int
FUNC_6(struct rte_ring *VAR_4, void **VAR_5,
         unsigned VAR_6, enum rte_ring_queue_behavior VAR_7)
{
    uint32_t VAR_8;
    uint32_t VAR_9;
    const unsigned VAR_10 = VAR_6;
    int VAR_11;
    unsigned VAR_12;
    uint32_t VAR_13 = VAR_4->prod.mask;


    do {
        uint32_t VAR_14;
        uint32_t VAR_15;


        VAR_6 = VAR_10;

        VAR_8 = VAR_4->cons.head;
        VAR_14 = VAR_4->prod.tail;




        VAR_15 = (VAR_14 - VAR_8);


        if (FUNC_5(VAR_6 > VAR_15)) {
            if (VAR_7 == VAR_1) {
                FUNC_0(VAR_4, VAR_2, VAR_6);
                return -VAR_0;
            }
            else {
                if (FUNC_5(VAR_15 == 0)){
                    FUNC_0(VAR_4, VAR_2, VAR_6);
                    return 0;
                }

                VAR_6 = VAR_15;
            }
        }

        VAR_9 = VAR_8 + VAR_6;
        VAR_11 = FUNC_2(&VAR_4->cons.head, VAR_8,
                          VAR_9);
    } while (FUNC_5(VAR_11 == 0));


    FUNC_4();
    for (VAR_12 = 0; FUNC_1(VAR_12 < VAR_6); VAR_12++) {
        VAR_5[VAR_12] = VAR_4->ring[(VAR_8 + VAR_12) & VAR_13];
    }





    while (FUNC_5(VAR_4->cons.tail != VAR_8))
        FUNC_3();

    FUNC_0(VAR_4, VAR_3, VAR_6);
    VAR_4->cons.tail = VAR_9;

    return VAR_7 == VAR_1 ? 0 : VAR_6;
}
