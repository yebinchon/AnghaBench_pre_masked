
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t lenbytes; scalar_t__ packet_len; scalar_t__ pwritten; struct TYPE_6__* parent; } ;
typedef TYPE_1__ WPACKET_SUB ;
struct TYPE_7__ {scalar_t__ written; TYPE_1__* subs; } ;
typedef TYPE_2__ WPACKET ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,size_t,unsigned char**) ;
 int FUNC_3 (int ) ;

int FUNC_4(WPACKET *VAR_2, size_t VAR_3)
{
    WPACKET_SUB *VAR_4;
    unsigned char *VAR_5;


    if (!FUNC_3(VAR_2->subs != ((void*)0)))
        return 0;

    if ((VAR_4 = FUNC_0(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return 0;
    }

    VAR_4->parent = VAR_2->subs;
    VAR_2->subs = VAR_4;
    VAR_4->pwritten = VAR_2->written + VAR_3;
    VAR_4->lenbytes = VAR_3;

    if (VAR_3 == 0) {
        VAR_4->packet_len = 0;
        return 1;
    }

    VAR_4->packet_len = VAR_2->written;

    if (!FUNC_2(VAR_2, VAR_3, &VAR_5))
        return 0;

    return 1;
}
