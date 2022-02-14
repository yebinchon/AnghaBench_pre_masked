
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mp_pin {scalar_t__ dir; int within_conn; int manual_connection; struct mp_pin* conn; struct mp_pin* user_conn; struct mp_pin* other; TYPE_1__ data; int data_requested; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct mp_pin* FUNC_2 (struct mp_pin*) ;

__attribute__((used)) static void FUNC_3(struct mp_pin *VAR_2)
{
    if (VAR_2->dir == VAR_0)
        VAR_2 = VAR_2->other;

    struct mp_pin *VAR_3 = FUNC_2(VAR_2);
    struct mp_pin *VAR_4 = FUNC_2(VAR_2->other);


    FUNC_1(!VAR_3->user_conn);
    FUNC_1(!VAR_4->user_conn);





    if (!VAR_3->manual_connection || !VAR_4->manual_connection)
        return;

    FUNC_1(VAR_3->dir == VAR_0);
    FUNC_1(VAR_4->dir == VAR_1);

    struct mp_pin *VAR_5 = VAR_3;
    while (VAR_5) {
        FUNC_1(!VAR_5->within_conn && !VAR_5->other->within_conn);
        FUNC_1(!VAR_5->conn && !VAR_5->other->conn);
        FUNC_1(!VAR_5->data_requested);
        FUNC_1(!VAR_5->data.type);
        FUNC_1(!VAR_5->other->data_requested);
        FUNC_1(!VAR_5->other->data.type);
        VAR_5->within_conn = VAR_5->other->within_conn = 1;
        VAR_5 = VAR_5->other->user_conn;
    }

    VAR_3->conn = VAR_4;
    VAR_3->within_conn = 0;
    VAR_4->conn = VAR_3;
    VAR_4->within_conn = 0;


    FUNC_0(VAR_3->manual_connection);
    FUNC_0(VAR_4->manual_connection);
}
