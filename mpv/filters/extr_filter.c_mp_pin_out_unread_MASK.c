
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {int dummy; } ;
struct mp_pin {scalar_t__ dir; struct mp_frame data; int data_requested; TYPE_1__* conn; int within_conn; } ;
struct TYPE_2__ {scalar_t__ manual_connection; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_pin*) ;

void FUNC_2(struct mp_pin *VAR_1, struct mp_frame VAR_2)
{
    FUNC_0(VAR_1->dir == VAR_0);
    FUNC_0(!VAR_1->within_conn);
    FUNC_0(VAR_1->conn && VAR_1->conn->manual_connection);


    FUNC_0(!FUNC_1(VAR_1));
    FUNC_0(!VAR_1->data_requested);
    VAR_1->data = VAR_2;
}
