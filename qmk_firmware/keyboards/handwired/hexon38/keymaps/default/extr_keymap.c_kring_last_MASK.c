
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pending_key_t ;
struct TYPE_4__ {scalar_t__ count; } ;
typedef TYPE_1__ kring_t ;


 int * FUNC_0 (TYPE_1__*,scalar_t__) ;

pending_key_t* FUNC_1(kring_t *VAR_0) {
    if (VAR_0->count == 0) {
        return ((void*)0);
    }
    return FUNC_0(VAR_0, VAR_0->count - 1);
}
