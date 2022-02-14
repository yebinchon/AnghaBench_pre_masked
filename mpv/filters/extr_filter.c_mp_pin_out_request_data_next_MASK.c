
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_pin {TYPE_1__* conn; } ;
struct TYPE_2__ {int manual_connection; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mp_pin*) ;

void FUNC_2(struct mp_pin *VAR_0)
{
    if (FUNC_1(VAR_0))
        FUNC_0(VAR_0->conn->manual_connection);
}
