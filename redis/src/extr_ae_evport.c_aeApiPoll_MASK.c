
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int portev_events; int portev_object; scalar_t__ portev_user; } ;
typedef TYPE_2__ port_event_t ;
struct TYPE_9__ {TYPE_1__* fired; TYPE_4__* apidata; } ;
typedef TYPE_3__ aeEventLoop ;
struct TYPE_10__ {int npending; int* pending_fds; uintptr_t* pending_masks; int portfd; } ;
typedef TYPE_4__ aeApiState ;
struct TYPE_7__ {int fd; int mask; } ;


 uintptr_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int ,int,uintptr_t) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,TYPE_2__*,int,int*,struct timespec*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_5(aeEventLoop *VAR_11, struct timeval *VAR_12) {
    aeApiState *VAR_13 = VAR_11->apidata;
    struct timespec VAR_14, *VAR_15;
    int VAR_16, VAR_17;
    uint_t VAR_18;
    port_event_t VAR_19[VAR_5];






    for (VAR_17 = 0; VAR_17 < VAR_13->npending; VAR_17++) {
        if (VAR_13->pending_fds[VAR_17] == -1)

            continue;

        if (FUNC_1("aeApiPoll", VAR_13->portfd,
            VAR_13->pending_fds[VAR_17], VAR_13->pending_masks[VAR_17]) != 0) {

            FUNC_0();
        }

        VAR_13->pending_masks[VAR_17] = VAR_0;
        VAR_13->pending_fds[VAR_17] = -1;
    }

    VAR_13->npending = 0;

    if (VAR_12 != ((void*)0)) {
        VAR_14.tv_sec = VAR_12->tv_sec;
        VAR_14.tv_nsec = VAR_12->tv_usec * 1000;
        VAR_15 = &VAR_14;
    } else {
        VAR_15 = ((void*)0);
    }





    VAR_18 = 1;
    if (FUNC_4(VAR_13->portfd, VAR_19, VAR_5, &VAR_18,
        VAR_15) == -1 && (VAR_8 != VAR_4 || VAR_18 == 0)) {
        if (VAR_8 == VAR_4 || VAR_8 == VAR_3)
            return 0;


        FUNC_3("aeApiPoll: port_get");
        FUNC_0();
    }

    VAR_13->npending = VAR_18;

    for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
            VAR_16 = 0;
            if (VAR_19[VAR_17].portev_events & VAR_6)
                VAR_16 |= VAR_1;
            if (VAR_19[VAR_17].portev_events & VAR_7)
                VAR_16 |= VAR_2;

            VAR_11->fired[VAR_17].fd = VAR_19[VAR_17].portev_object;
            VAR_11->fired[VAR_17].mask = VAR_16;

            if (VAR_9)
                FUNC_2(VAR_10, "aeApiPoll: fd %d mask 0x%x\n",
                    (int)VAR_19[VAR_17].portev_object, VAR_16);

            VAR_13->pending_fds[VAR_17] = VAR_19[VAR_17].portev_object;
            VAR_13->pending_masks[VAR_17] = (uintptr_t)VAR_19[VAR_17].portev_user;
    }

    return VAR_18;
}
