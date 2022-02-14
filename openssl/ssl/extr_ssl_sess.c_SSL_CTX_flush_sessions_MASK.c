
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; int * sessions; } ;
struct TYPE_5__ {long time; int * cache; TYPE_2__* ctx; } ;
typedef TYPE_1__ TIMEOUT_PARAM ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;

void FUNC_5(SSL_CTX *VAR_1, long VAR_2)
{
    unsigned long VAR_3;
    TIMEOUT_PARAM VAR_4;

    VAR_4.ctx = VAR_1;
    VAR_4.cache = VAR_1->sessions;
    if (VAR_4.cache == ((void*)0))
        return;
    VAR_4.time = VAR_2;
    FUNC_1(VAR_1->lock);
    VAR_3 = FUNC_3(VAR_1->sessions);
    FUNC_4(VAR_1->sessions, 0);
    FUNC_2(VAR_4.cache, VAR_0, &VAR_4);
    FUNC_4(VAR_1->sessions, VAR_3);
    FUNC_0(VAR_1->lock);
}
