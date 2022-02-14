
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int pqueue ;
struct TYPE_17__ {scalar_t__ data; } ;
typedef TYPE_5__ pitem ;
struct TYPE_13__ {scalar_t__ buf; } ;
struct TYPE_20__ {TYPE_1__ rbuf; } ;
struct TYPE_16__ {int * q; } ;
struct TYPE_15__ {int * q; } ;
struct TYPE_14__ {int * q; } ;
struct TYPE_19__ {TYPE_4__ buffered_app_data; TYPE_3__ processed_rcds; TYPE_2__ unprocessed_rcds; } ;
struct TYPE_18__ {TYPE_7__* d; } ;
typedef TYPE_6__ RECORD_LAYER ;
typedef TYPE_7__ DTLS_RECORD_LAYER ;
typedef TYPE_8__ DTLS1_RECORD_DATA ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_7__*,int ,int) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int *) ;

void FUNC_4(RECORD_LAYER *VAR_0)
{
    DTLS_RECORD_LAYER *VAR_1;
    pitem *VAR_2 = ((void*)0);
    DTLS1_RECORD_DATA *VAR_3;
    pqueue *VAR_4;
    pqueue *VAR_5;
    pqueue *VAR_6;

    VAR_1 = VAR_0->d;

    while ((VAR_2 = FUNC_3(VAR_1->unprocessed_rcds.q)) != ((void*)0)) {
        VAR_3 = (DTLS1_RECORD_DATA *)VAR_2->data;
        FUNC_0(VAR_3->rbuf.buf);
        FUNC_0(VAR_2->data);
        FUNC_2(VAR_2);
    }

    while ((VAR_2 = FUNC_3(VAR_1->processed_rcds.q)) != ((void*)0)) {
        VAR_3 = (DTLS1_RECORD_DATA *)VAR_2->data;
        FUNC_0(VAR_3->rbuf.buf);
        FUNC_0(VAR_2->data);
        FUNC_2(VAR_2);
    }

    while ((VAR_2 = FUNC_3(VAR_1->buffered_app_data.q)) != ((void*)0)) {
        VAR_3 = (DTLS1_RECORD_DATA *)VAR_2->data;
        FUNC_0(VAR_3->rbuf.buf);
        FUNC_0(VAR_2->data);
        FUNC_2(VAR_2);
    }

    VAR_4 = VAR_1->unprocessed_rcds.q;
    VAR_5 = VAR_1->processed_rcds.q;
    VAR_6 = VAR_1->buffered_app_data.q;
    FUNC_1(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->unprocessed_rcds.q = VAR_4;
    VAR_1->processed_rcds.q = VAR_5;
    VAR_1->buffered_app_data.q = VAR_6;
}
