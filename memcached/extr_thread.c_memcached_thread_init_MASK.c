
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_mutex_t ;
struct TYPE_6__ {int reserved_fds; } ;
struct TYPE_5__ {int notify_receive_fd; int notify_send_fd; void* storage; } ;
typedef int LIBEVENT_THREAD ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_12 (int) ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_13(int VAR_15, void *VAR_16) {
    int VAR_17;
    int VAR_18;

    for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
        FUNC_8(&VAR_9[VAR_17], ((void*)0));
    }
    FUNC_8(&VAR_13, ((void*)0));

    FUNC_8(&VAR_5, ((void*)0));
    FUNC_7(&VAR_4, ((void*)0));

    FUNC_8(&VAR_2, ((void*)0));
    VAR_1 = ((void*)0);


    if (VAR_15 < 3) {
        VAR_18 = 10;
    } else if (VAR_15 < 4) {
        VAR_18 = 11;
    } else if (VAR_15 < 5) {
        VAR_18 = 12;
    } else if (VAR_15 <= 10) {
        VAR_18 = 13;
    } else if (VAR_15 <= 20) {
        VAR_18 = 14;
    } else {

        VAR_18 = 15;
    }

    if (VAR_18 >= VAR_3) {
        FUNC_3(VAR_11, "Hash table power size (%d) cannot be equal to or less than item lock table (%d)\n", VAR_3, VAR_18);
        FUNC_3(VAR_11, "Item lock table grows with `-t N` (worker threadcount)\n");
        FUNC_3(VAR_11, "Hash table grows with `-o hashpower=N` \n");
        FUNC_2(1);
    }

    VAR_6 = FUNC_4(VAR_18);
    VAR_7 = VAR_18;

    VAR_8 = FUNC_0(VAR_6, sizeof(pthread_mutex_t));
    if (! VAR_8) {
        FUNC_5("Can't allocate item locks");
        FUNC_2(1);
    }
    for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
        FUNC_8(&VAR_8[VAR_17], ((void*)0));
    }

    VAR_12 = FUNC_0(VAR_15, sizeof(LIBEVENT_THREAD));
    if (! VAR_12) {
        FUNC_5("Can't allocate thread descriptors");
        FUNC_2(1);
    }

    for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
        int VAR_19[2];
        if (FUNC_6(VAR_19)) {
            FUNC_5("Can't create notify pipe");
            FUNC_2(1);
        }

        VAR_12[VAR_17].notify_receive_fd = VAR_19[0];
        VAR_12[VAR_17].notify_send_fd = VAR_19[1];



        FUNC_11(&VAR_12[VAR_17]);

        VAR_10.reserved_fds += 5;
    }


    for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
        FUNC_1(VAR_14, &VAR_12[VAR_17]);
    }


    FUNC_9(&VAR_5);
    FUNC_12(VAR_15);
    FUNC_10(&VAR_5);
}
