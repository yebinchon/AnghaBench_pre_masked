
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pqueue ;
typedef int piterator ;
struct TYPE_11__ {scalar_t__ data; } ;
typedef TYPE_3__ pitem ;
struct TYPE_9__ {int is_ccs; int seq; } ;
struct TYPE_12__ {TYPE_1__ msg_header; } ;
typedef TYPE_4__ hm_fragment ;
struct TYPE_13__ {TYPE_2__* d1; } ;
struct TYPE_10__ {int * sent_messages; } ;
typedef TYPE_5__ SSL ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,unsigned short,int*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *) ;

int FUNC_4(SSL *VAR_0)
{
    pqueue *VAR_1 = VAR_0->d1->sent_messages;
    piterator VAR_2;
    pitem *VAR_3;
    hm_fragment *VAR_4;
    int VAR_5 = 0;

    VAR_2 = FUNC_2(VAR_1);

    for (VAR_3 = FUNC_3(&VAR_2); VAR_3 != ((void*)0); VAR_3 = FUNC_3(&VAR_2)) {
        VAR_4 = (hm_fragment *)VAR_3->data;
        if (FUNC_1(VAR_0, (unsigned short)
                                     FUNC_0
                                     (VAR_4->msg_header.seq,
                                      VAR_4->msg_header.is_ccs), &VAR_5) <= 0)
            return -1;
    }

    return 1;
}
