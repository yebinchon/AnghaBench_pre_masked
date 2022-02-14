
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct mp_pin {scalar_t__ dir; int within_conn; int data_requested; struct mp_pin* user_conn; struct mp_pin* other; TYPE_1__ data; int owner; int * conn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 struct mp_pin* FUNC_2 (struct mp_pin*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct mp_pin *VAR_1)
{
    if (VAR_1->dir == VAR_0)
        VAR_1 = VAR_1->other;

    VAR_1 = FUNC_2(VAR_1);

    while (VAR_1) {
        VAR_1->conn = VAR_1->other->conn = ((void*)0);
        VAR_1->within_conn = VAR_1->other->within_conn = 0;
        FUNC_1(!VAR_1->other->data_requested);
        FUNC_1(!VAR_1->other->data.type);
        VAR_1->data_requested = 0;
        if (VAR_1->data.type)
            FUNC_0(VAR_1->owner, "dropping frame due to pin disconnect\n");
        if (VAR_1->data_requested)
            FUNC_0(VAR_1->owner, "dropping request due to pin disconnect\n");
        FUNC_3(&VAR_1->data);
        VAR_1 = VAR_1->other->user_conn;
    }
}
