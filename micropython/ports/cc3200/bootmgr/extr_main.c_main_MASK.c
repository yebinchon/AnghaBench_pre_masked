
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PrevImg; int Status; int ActiveImg; } ;
typedef TYPE_1__ sBootInfo_t ;
typedef int _u32 ;
typedef int _i32 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (unsigned char*,int ,int *,int *) ;
 int FUNC_7 (int ,int ,unsigned char*,int) ;
 int FUNC_8 (int ,int ,unsigned char*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;

int FUNC_11 (void) {
    sBootInfo_t VAR_11 = { .ActiveImg = VAR_1, .Status = VAR_3, .PrevImg = VAR_1 };
    bool VAR_12 = 0;
    _i32 VAR_13;


    FUNC_3();


    FUNC_9(0, 0, 0);


    if (!FUNC_6((unsigned char *)VAR_2, VAR_0, ((void*)0), &VAR_13)) {
        if (sizeof(sBootInfo_t) == FUNC_7(VAR_13, 0, (unsigned char *)&VAR_11, sizeof(sBootInfo_t))) {
            VAR_12 = 1;
        }
        FUNC_5(VAR_13, 0, 0, 0);
    }

    if (!VAR_12) {

        _u32 VAR_14 = VAR_8 | VAR_10 | VAR_9;
        if (!FUNC_6 ((unsigned char *)VAR_2, FUNC_0((2 * sizeof(sBootInfo_t)),
                        VAR_14), ((void*)0), &VAR_13)) {

            if (sizeof(sBootInfo_t) == FUNC_8(VAR_13, 0, (unsigned char *)&VAR_11, sizeof(sBootInfo_t))) {
                VAR_12 = 1;
            }
            FUNC_5(VAR_13, 0, 0, 0);
        }

        FUNC_2(VAR_6);
    }

    if (VAR_12) {

        FUNC_4(&VAR_11);
    }


    FUNC_10(VAR_7);



    while (1) {

        FUNC_1(VAR_4, VAR_5, VAR_5);
        __asm volatile(" dsb \n"
                       " isb \n"
                       " wfi \n");
    }
}
