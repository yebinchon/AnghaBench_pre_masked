
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ callback; } ;
typedef TYPE_1__ lwip_socket_obj_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(lwip_socket_obj_t *VAR_1) {
    if (VAR_1->callback != VAR_0) {

        FUNC_1(VAR_1->callback, FUNC_0(VAR_1));
    }
}
