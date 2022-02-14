
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ssize_t ;
typedef TYPE_2__* client ;
typedef int aeEventLoop ;
struct TYPE_10__ {int requests; int slots_last_update; scalar_t__ cluster_mode; scalar_t__ randomkeys; int requests_issued; } ;
struct TYPE_9__ {scalar_t__ written; scalar_t__ staglen; int latency; TYPE_1__* context; void* obuf; int start; int slots_last_update; } ;
struct TYPE_8__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 TYPE_6__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_6 ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_13(aeEventLoop *VAR_7, int VAR_8, void *VAR_9, int VAR_10) {
    client VAR_11 = VAR_9;
    FUNC_0(*VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_10);


    if (VAR_11->written == 0) {

        int VAR_12 = 0;
        FUNC_4(VAR_3.requests_issued, VAR_12, 1);
        if (VAR_12 >= VAR_3.requests) {
            FUNC_6(VAR_11);
            return;
        }


        if (VAR_3.randomkeys) FUNC_7(VAR_11);
        if (VAR_3.cluster_mode && VAR_11->staglen > 0) FUNC_9(VAR_11);
        FUNC_3(VAR_3.slots_last_update, VAR_11->slots_last_update);
        VAR_11->start = FUNC_11();
        VAR_11->latency = -1;
    }
    if (FUNC_8(VAR_11->obuf) > VAR_11->written) {
        void *VAR_13 = VAR_11->obuf+VAR_11->written;
        ssize_t VAR_14 = FUNC_12(VAR_11->context->fd,VAR_13,FUNC_8(VAR_11->obuf)-VAR_11->written);
        if (VAR_14 == -1) {
            if (VAR_4 != VAR_2)
                FUNC_5(VAR_6, "Writing to socket: %s\n", FUNC_10(VAR_4));
            FUNC_6(VAR_11);
            return;
        }
        VAR_11->written += VAR_14;
        if (FUNC_8(VAR_11->obuf) == VAR_11->written) {
            FUNC_2(VAR_7,VAR_11->context->fd,VAR_1);
            FUNC_1(VAR_7,VAR_11->context->fd,VAR_0,VAR_5,VAR_11);
        }
    }
}
