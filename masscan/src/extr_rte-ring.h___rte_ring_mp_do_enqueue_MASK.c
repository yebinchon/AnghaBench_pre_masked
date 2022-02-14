
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_4__ {unsigned int mask; unsigned int head; unsigned int watermark; unsigned int tail; } ;
struct TYPE_3__ {unsigned int tail; } ;
struct rte_ring {void** ring; TYPE_2__ prod; TYPE_1__ cons; } ;
typedef enum rte_ring_queue_behavior { ____Placeholder_rte_ring_queue_behavior } rte_ring_queue_behavior ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct rte_ring*,int ,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned int*,unsigned int,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int
FUNC_6(struct rte_ring *VAR_7, void * const *VAR_8,
             unsigned VAR_9, enum rte_ring_queue_behavior VAR_10)
{
    uint32_t VAR_11, VAR_12;
    uint32_t VAR_13;
    const unsigned VAR_14 = VAR_9;
    int VAR_15;
    unsigned VAR_16;
    uint32_t VAR_17 = VAR_7->prod.mask;
    int VAR_18;


    do {
        uint32_t VAR_19;


        VAR_9 = VAR_14;

        VAR_11 = VAR_7->prod.head;
        VAR_19 = VAR_7->cons.tail;




        VAR_13 = (VAR_17 + VAR_19 - VAR_11);


        if (FUNC_5(VAR_9 > VAR_13)) {
            if (VAR_10 == VAR_2) {
                FUNC_0(VAR_7, VAR_4, VAR_9);
                return -VAR_1;
            }
            else {

                if (FUNC_5(VAR_13 == 0)) {
                    FUNC_0(VAR_7, VAR_4, VAR_9);
                    return 0;
                }

                VAR_9 = VAR_13;
            }
        }

        VAR_12 = VAR_11 + VAR_9;
        VAR_15 = FUNC_2(&VAR_7->prod.head, VAR_11,
                          VAR_12);
    } while (FUNC_5(VAR_15 == 0));


    for (VAR_16 = 0; FUNC_1(VAR_16 < VAR_9); VAR_16++)
        VAR_7->ring[(VAR_11 + VAR_16) & VAR_17] = VAR_8[VAR_16];
    FUNC_4();


    if (FUNC_5(((VAR_17 + 1) - VAR_13 + VAR_9) > VAR_7->prod.watermark)) {
        VAR_18 = (VAR_10 == VAR_2) ? -VAR_0 :
                (int)(VAR_9 | VAR_3);
        FUNC_0(VAR_7, VAR_5, VAR_9);
    }
    else {
        VAR_18 = (VAR_10 == VAR_2) ? 0 : VAR_9;
        FUNC_0(VAR_7, VAR_6, VAR_9);
    }





    while (FUNC_5(VAR_7->prod.tail != VAR_11))
        FUNC_3();

    VAR_7->prod.tail = VAR_12;
    return VAR_18;
}
