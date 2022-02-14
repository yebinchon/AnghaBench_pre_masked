
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct mp_pin {scalar_t__ dir; int data_requested; TYPE_1__ data; int conn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct mp_pin *VAR_1)
{
    if (!VAR_1->conn || VAR_1->dir != VAR_0) {
        FUNC_0(!VAR_1->data.type);
        FUNC_0(!VAR_1->data_requested);
    }
    FUNC_1(&VAR_1->data);
    VAR_1->data_requested = 0;
}
