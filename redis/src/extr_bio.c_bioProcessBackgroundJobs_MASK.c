
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio_job {scalar_t__ arg3; scalar_t__ arg2; scalar_t__ arg1; } ;
typedef int sigset_t ;
struct TYPE_4__ {struct bio_job* value; } ;
typedef TYPE_1__ listNode ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_0 (long) ;
 int VAR_14 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (long) ;
 int FUNC_15 (int ,char*,unsigned long) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 unsigned long FUNC_19 (int ) ;
 int FUNC_20 (struct bio_job*) ;

void *FUNC_21(void *VAR_15) {
    struct bio_job *VAR_16;
    unsigned long VAR_17 = (unsigned long) VAR_15;
    sigset_t VAR_18;


    if (VAR_17 >= VAR_3) {
        FUNC_15(VAR_4,
            "Warning: bio thread started with wrong type %lu",VAR_17);
        return ((void*)0);
    }



    FUNC_11(VAR_6, ((void*)0));
    FUNC_12(VAR_5, ((void*)0));

    FUNC_9(&VAR_10[VAR_17]);


    FUNC_18(&VAR_18);
    FUNC_17(&VAR_18, VAR_7);
    if (FUNC_13(VAR_8, &VAR_18, ((void*)0)))
        FUNC_15(VAR_4,
            "Warning: can't mask SIGALRM in bio.c thread: %s", FUNC_19(VAR_14));

    while(1) {
        listNode *VAR_19;


        if (FUNC_6(VAR_9[VAR_17]) == 0) {
            FUNC_8(&VAR_11[VAR_17],&VAR_10[VAR_17]);
            continue;
        }

        VAR_19 = FUNC_5(VAR_9[VAR_17]);
        VAR_16 = VAR_19->value;


        FUNC_10(&VAR_10[VAR_17]);


        if (VAR_17 == VAR_1) {
            FUNC_0((long)VAR_16->arg1);
        } else if (VAR_17 == VAR_0) {
            FUNC_14((long)VAR_16->arg1);
        } else if (VAR_17 == VAR_2) {




            if (VAR_16->arg1)
                FUNC_2(VAR_16->arg1);
            else if (VAR_16->arg2 && VAR_16->arg3)
                FUNC_1(VAR_16->arg2,VAR_16->arg3);
            else if (VAR_16->arg3)
                FUNC_3(VAR_16->arg3);
        } else {
            FUNC_16("Wrong job type in bioProcessBackgroundJobs().");
        }
        FUNC_20(VAR_16);



        FUNC_9(&VAR_10[VAR_17]);
        FUNC_4(VAR_9[VAR_17],VAR_19);
        VAR_12[VAR_17]--;


        FUNC_7(&VAR_13[VAR_17]);
    }
}
