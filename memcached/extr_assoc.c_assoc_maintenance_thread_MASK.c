
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* h_next; int nkey; } ;
typedef TYPE_1__ item ;
struct TYPE_10__ {int verbose; } ;
struct TYPE_9__ {int hash_bytes; int hash_is_expanding; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__**) ;
 unsigned int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 unsigned int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (scalar_t__) ;
 void* FUNC_9 (size_t) ;
 int FUNC_10 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__** VAR_9 ;
 int FUNC_13 (int ) ;
 TYPE_1__** VAR_10 ;
 int FUNC_14 (int *,int *) ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int) ;

__attribute__((used)) static void *FUNC_16(void *VAR_14) {

    FUNC_11(&VAR_8);
    while (VAR_2) {
        int VAR_15 = 0;


        for (VAR_15 = 0; VAR_15 < VAR_5 && VAR_4; ++VAR_15) {
            item *VAR_16, *VAR_17;
            unsigned int VAR_18;
            void *VAR_19 = ((void*)0);





            if ((VAR_19 = FUNC_9(VAR_3))) {
                    for (VAR_16 = VAR_9[VAR_3]; ((void*)0) != VAR_16; VAR_16 = VAR_17) {
                        VAR_17 = VAR_16->h_next;
                        VAR_18 = FUNC_6(FUNC_0(VAR_16), VAR_16->nkey) & FUNC_7(VAR_6);
                        VAR_16->h_next = VAR_10[VAR_18];
                        VAR_10[VAR_18] = VAR_16;
                    }

                    VAR_9[VAR_3] = ((void*)0);

                    VAR_3++;
                    if (VAR_3 == FUNC_8(VAR_6 - 1)) {
                        VAR_4 = 0;
                        FUNC_5(VAR_9);
                        FUNC_1();
                        VAR_12.hash_bytes -= FUNC_8(VAR_6 - 1) * sizeof(void *);
                        VAR_12.hash_is_expanding = 0;
                        FUNC_2();
                        if (VAR_11.verbose > 1)
                            FUNC_4(VAR_13, "Hash table expansion done\n");
                    }

            } else {
                FUNC_15(10*1000);
            }

            if (VAR_19) {
                FUNC_10(VAR_19);
                VAR_19 = ((void*)0);
            }
        }

        if (!VAR_4) {

            FUNC_14(&VAR_7, &VAR_8);







            if (VAR_2) {
                FUNC_13(VAR_0);
                FUNC_3();
                FUNC_13(VAR_1);
            }
        }
    }
    FUNC_12(&VAR_8);
    return ((void*)0);
}
