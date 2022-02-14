
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef size_t ngx_uint_t ;
typedef int ngx_log_t ;
struct TYPE_2__ {int size; scalar_t__* name; scalar_t__ value; scalar_t__ exists; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int ,int *,int ,char*,scalar_t__*,int) ;
 TYPE_1__* VAR_3 ;

void
FUNC_1(ngx_log_t *VAR_4)
{
    u_long VAR_5;
    ngx_uint_t VAR_6;

    if (VAR_2[0]) {
        FUNC_0(VAR_0, VAR_4, 0, "OS: %s %s",
                      VAR_2, VAR_1);
    }

    for (VAR_6 = 0; VAR_3[VAR_6].name; VAR_6++) {
        if (VAR_3[VAR_6].exists) {
            if (VAR_3[VAR_6].size == sizeof(long)) {
                VAR_5 = *(long *) VAR_3[VAR_6].value;

            } else {
                VAR_5 = *(int *) VAR_3[VAR_6].value;
            }

            FUNC_0(VAR_0, VAR_4, 0, "%s: %l",
                          VAR_3[VAR_6].name, VAR_5);
        }
    }
}
