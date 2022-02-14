
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sent_messages; int buffered_messages; } ;
struct TYPE_6__ {TYPE_5__* d1; int rlayer; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(SSL *VAR_0)
{
    FUNC_0(&VAR_0->rlayer);

    FUNC_4(VAR_0);

    FUNC_2(VAR_0);

    FUNC_3(VAR_0->d1->buffered_messages);
    FUNC_3(VAR_0->d1->sent_messages);

    FUNC_1(VAR_0->d1);
    VAR_0->d1 = ((void*)0);
}
