
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* d1; } ;
struct TYPE_6__ {int timeout_duration_us; int next_timeout; int timeout; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(SSL *VAR_1)
{

    FUNC_3(&VAR_1->d1->timeout, 0, sizeof(VAR_1->d1->timeout));
    FUNC_3(&VAR_1->d1->next_timeout, 0, sizeof(VAR_1->d1->next_timeout));
    VAR_1->d1->timeout_duration_us = 1000000;
    FUNC_0(FUNC_1(VAR_1), VAR_0, 0,
             &(VAR_1->d1->next_timeout));

    FUNC_2(VAR_1);
}
