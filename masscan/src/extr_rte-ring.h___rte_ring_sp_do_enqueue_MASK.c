
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
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline int
FUNC_4(struct rte_ring *VAR_7, void * const *VAR_8,
             unsigned VAR_9, enum rte_ring_queue_behavior VAR_10)
{
    uint32_t VAR_11, VAR_12;
    uint32_t VAR_13, VAR_14;
    unsigned VAR_15;
    uint32_t VAR_16 = VAR_7->prod.mask;
    int VAR_17;

    VAR_11 = VAR_7->prod.head;
    VAR_12 = VAR_7->cons.tail;




    VAR_14 = VAR_16 + VAR_12 - VAR_11;


    if (FUNC_3(VAR_9 > VAR_14)) {
        if (VAR_10 == VAR_2) {
            FUNC_0(VAR_7, VAR_4, VAR_9);
            return -VAR_1;
        }
        else {

            if (FUNC_3(VAR_14 == 0)) {
                FUNC_0(VAR_7, VAR_4, VAR_9);
                return 0;
            }

            VAR_9 = VAR_14;
        }
    }

    VAR_13 = VAR_11 + VAR_9;
    VAR_7->prod.head = VAR_13;


    for (VAR_15 = 0; FUNC_1(VAR_15 < VAR_9); VAR_15++)
        VAR_7->ring[(VAR_11 + VAR_15) & VAR_16] = VAR_8[VAR_15];
    FUNC_2();


    if (FUNC_3(((VAR_16 + 1) - VAR_14 + VAR_9) > VAR_7->prod.watermark)) {
        VAR_17 = (VAR_10 == VAR_2) ? -VAR_0 :
            (int)(VAR_9 | VAR_3);
        FUNC_0(VAR_7, VAR_5, VAR_9);
    }
    else {
        VAR_17 = (VAR_10 == VAR_2) ? 0 : VAR_9;
        FUNC_0(VAR_7, VAR_6, VAR_9);
    }

    VAR_7->prod.tail = VAR_13;
    return VAR_17;
}
