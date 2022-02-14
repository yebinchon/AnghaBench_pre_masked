
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int listNode ;
typedef TYPE_1__* client ;
typedef int aeEventLoop ;
struct TYPE_10__ {int requests; int liveclients_mutex; scalar_t__ num_threads; int clients; int liveclients; int requests_finished; } ;
struct TYPE_9__ {int fd; } ;
struct TYPE_8__ {scalar_t__ thread_id; struct TYPE_8__* stagptr; struct TYPE_8__* randptr; int obuf; TYPE_3__* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_6__ VAR_2 ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(client VAR_3) {
    aeEventLoop *VAR_4 = FUNC_0(VAR_3);
    listNode *VAR_5;
    FUNC_1(VAR_4,VAR_3->context->fd,VAR_1);
    FUNC_1(VAR_4,VAR_3->context->fd,VAR_0);
    if (VAR_3->thread_id >= 0) {
        int VAR_6 = 0;
        FUNC_4(VAR_2.requests_finished, VAR_6);
        if (VAR_6 >= VAR_2.requests) {
            FUNC_2(VAR_4);
        }
    }
    FUNC_9(VAR_3->context);
    FUNC_10(VAR_3->obuf);
    FUNC_11(VAR_3->randptr);
    FUNC_11(VAR_3->stagptr);
    FUNC_11(VAR_3);
    if (VAR_2.num_threads) FUNC_7(&(VAR_2.liveclients_mutex));
    VAR_2.liveclients--;
    VAR_5 = FUNC_6(VAR_2.clients,VAR_3);
    FUNC_3(VAR_5 != ((void*)0));
    FUNC_5(VAR_2.clients,VAR_5);
    if (VAR_2.num_threads) FUNC_8(&(VAR_2.liveclients_mutex));
}
