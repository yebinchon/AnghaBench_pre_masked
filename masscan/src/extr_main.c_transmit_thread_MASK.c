
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct Throttler {int dummy; } ;
struct ThreadPair {scalar_t__* total_syns; int done_transmitting; int nic_index; int transmit_queue; int packet_buffers; scalar_t__ my_index; struct Adapter* adapter; int tmplset; struct Throttler* throttler; struct Masscan* masscan; } ;
struct TemplateSet {int dummy; } ;
struct TYPE_4__ {int index; scalar_t__ count; } ;
struct TYPE_3__ {int of; int one; } ;
struct Masscan {scalar_t__ retries; scalar_t__ max_rate; int nic_count; scalar_t__ seed; scalar_t__ is_infinite; int ports; int targets; TYPE_2__ resume; TYPE_1__ shard; int blackrock_rounds; } ;
struct BlackRock {int dummy; } ;
struct Adapter {int dummy; } ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__* FUNC_1 (int) ;
 int FUNC_2 (struct BlackRock*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct BlackRock*,scalar_t__) ;
 int FUNC_4 (struct Adapter*,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct Masscan const*,int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (struct Adapter*) ;
 int FUNC_10 (struct Adapter*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int,struct TemplateSet*) ;
 scalar_t__ FUNC_11 (unsigned int,unsigned int,unsigned int,unsigned int,scalar_t__) ;
 struct TemplateSet FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct Throttler*,scalar_t__) ;
 int FUNC_14 (struct Throttler*,int) ;

__attribute__((used)) static void
FUNC_15(void *VAR_2)
{
    struct ThreadPair *VAR_3 = (struct ThreadPair *)VAR_2;
    uint64_t VAR_4;
    uint64_t VAR_5;
    uint64_t VAR_6;
    const struct Masscan *VAR_7 = VAR_3->masscan;
    uint64_t VAR_8 = VAR_7->retries;
    uint64_t VAR_9 = VAR_7->max_rate;
    unsigned VAR_10 = (unsigned)VAR_8 + 1;
    uint64_t VAR_11;
    struct BlackRock VAR_12;
    uint64_t VAR_13 = FUNC_7(&VAR_7->targets);
    struct Throttler *VAR_14 = VAR_3->throttler;
    struct TemplateSet VAR_15 = FUNC_12(VAR_3->tmplset);
    struct Adapter *VAR_16 = VAR_3->adapter;
    uint64_t VAR_17 = 0;
    unsigned VAR_18 = (VAR_7->shard.of-1) + VAR_7->nic_count;
    unsigned VAR_19;
    unsigned VAR_20;
    unsigned VAR_21;
    unsigned VAR_22;
    uint64_t VAR_23 = VAR_7->seed;
    uint64_t VAR_24 = 0;
    uint64_t *VAR_25;
    uint64_t VAR_26 = VAR_7->seed;

    FUNC_0(1, "THREAD: xmit: starting thread #%u\n", VAR_3->nic_index);




    VAR_25 = FUNC_1(sizeof(uint64_t));
    *VAR_25 = 0;
    VAR_3->total_syns = VAR_25;




    FUNC_5(VAR_7, VAR_3->nic_index,
                &VAR_19, &VAR_20,
                &VAR_21, &VAR_22);




    FUNC_14(VAR_14, VAR_7->max_rate/VAR_7->nic_count);

infinite:




    VAR_11 = FUNC_7(&VAR_7->targets)
            * FUNC_7(&VAR_7->ports);
    FUNC_2(&VAR_12, VAR_11, VAR_23, VAR_7->blackrock_rounds);







    VAR_5 = VAR_7->resume.index + (VAR_7->shard.one-1) + VAR_3->nic_index;
    VAR_6 = VAR_11;
    if (VAR_7->resume.count && VAR_6 > VAR_5 + VAR_7->resume.count)
        VAR_6 = VAR_5 + VAR_7->resume.count;
    VAR_6 += VAR_8 * VAR_9;





    FUNC_0(3, "THREAD: xmit: starting main loop: [%llu..%llu]\n", VAR_5, VAR_6);
    for (VAR_4=VAR_5; VAR_4<VAR_6; ) {
        uint64_t VAR_27;







        VAR_27 = FUNC_13(VAR_14, VAR_17);
        FUNC_4(VAR_16, VAR_3->packet_buffers, VAR_3->transmit_queue,
                        &VAR_17, &VAR_27);






        while (VAR_27 && VAR_4 < VAR_6) {
            uint64_t VAR_28;
            unsigned VAR_29;
            unsigned VAR_30;
            unsigned VAR_31;
            unsigned VAR_32;
            uint64_t VAR_33;
            VAR_28 = (VAR_4 + (VAR_10--) * VAR_9);
            if (VAR_9 > VAR_11)
                VAR_28 %= VAR_11;
            else
                while (VAR_28 >= VAR_11)
                    VAR_28 -= VAR_11;
            VAR_28 = FUNC_3(&VAR_12, VAR_28);
            VAR_29 = FUNC_8(&VAR_7->targets, VAR_28 % VAR_13);
            VAR_30 = FUNC_8(&VAR_7->ports, VAR_28 / VAR_13);





            if (VAR_20 > 1 || VAR_22 > 1) {
                uint64_t VAR_34 = FUNC_11((unsigned)(VAR_4+VAR_24),
                                        (unsigned)((VAR_4+VAR_24)>>32),
                                        (unsigned)VAR_28, (unsigned)(VAR_28>>32),
                                        VAR_26);
                VAR_32 = VAR_21 + (VAR_34 & VAR_22);
                VAR_31 = VAR_19 + ((VAR_34>>16) & VAR_20);
            } else {
                VAR_31 = VAR_19;
                VAR_32 = VAR_21;
            }
            VAR_33 = FUNC_11(VAR_29, VAR_30, VAR_31, VAR_32, VAR_26);
            FUNC_10(
                    VAR_16,
                    VAR_29, VAR_30,
                    VAR_31, VAR_32,
                    (unsigned)VAR_33,
                    !VAR_27,
                    &VAR_15
                    );
            VAR_27--;
            VAR_17++;
            (*VAR_25)++;
            if (VAR_10 == 0) {
                VAR_4 += VAR_18;
                VAR_10 = (unsigned)VAR_8 + 1;
            }

        }




        VAR_3->my_index = VAR_4;




        if (VAR_1) {
            break;
        }
    }





    if (VAR_7->is_infinite && !VAR_1) {
        VAR_23++;
        VAR_24++;
        goto infinite;
    }







    FUNC_9(VAR_16);




    FUNC_0(1, "THREAD: xmit done, waiting for receive thread to realize this\n");







    while (!VAR_0) {
        unsigned VAR_35;
        uint64_t VAR_36;

        for (VAR_35=0; VAR_35<1000; VAR_35++) {





            VAR_36 = FUNC_13(VAR_14, VAR_17);



            FUNC_4( VAR_16,
                            VAR_3->packet_buffers,
                            VAR_3->transmit_queue,
                            &VAR_17,
                            &VAR_36);



            FUNC_9(VAR_16);

            FUNC_6(100);
        }
    }


    VAR_3->done_transmitting = 1;
    FUNC_0(1, "THREAD: xmit: stopping thread #%u\n", VAR_3->nic_index);
}
