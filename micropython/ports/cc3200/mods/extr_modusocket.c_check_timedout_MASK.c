
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ timeout_ms; } ;
struct TYPE_5__ {TYPE_1__ sock_base; } ;
typedef TYPE_2__ mod_network_socket_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(mod_network_socket_obj_t *VAR_3, int VAR_4, uint32_t *VAR_5, int *VAR_6) {
    if (*VAR_5 == 0 || VAR_4 != VAR_1) {
        if (VAR_3->sock_base.timeout_ms > 0 && VAR_4 == VAR_1) {
            *VAR_6 = VAR_0;
        } else {
            *VAR_6 = FUNC_0(VAR_4);
        }
        return -1;
    }
    FUNC_1(VAR_2);
    if (*VAR_5 < VAR_2) {
        *VAR_5 = 0;
    } else {
        *VAR_5 -= VAR_2;
    }
    return 0;
}
