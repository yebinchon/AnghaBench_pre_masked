
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef size_t ngx_uint_t ;
typedef int ngx_log_t ;
struct TYPE_2__ {int size; scalar_t__ name; scalar_t__ value; scalar_t__ exists; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int ,char*,scalar_t__,int) ;
 TYPE_1__* VAR_6 ;

void
FUNC_1(ngx_log_t *VAR_7)
{
    u_long VAR_8;
    ngx_uint_t VAR_9;

    FUNC_0(VAR_0, VAR_7, 0, "OS: %s %s",
                  VAR_5, VAR_4);






    FUNC_0(VAR_0, VAR_7, 0,
                  "kern.osreldate: %d, built on %d",
                  VAR_3, VAR_2);


    for (VAR_9 = 0; VAR_6[VAR_9].name; VAR_9++) {
        if (VAR_6[VAR_9].exists) {
            if (VAR_6[VAR_9].size == sizeof(long)) {
                VAR_8 = *(long *) VAR_6[VAR_9].value;

            } else {
                VAR_8 = *(int *) VAR_6[VAR_9].value;
            }

            FUNC_0(VAR_0, VAR_7, 0, "%s: %l",
                          VAR_6[VAR_9].name, VAR_8);
        }
    }
}
