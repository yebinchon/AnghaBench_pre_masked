
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int changed; int space_changed; int space_size; int space; int deleting; } ;
typedef TYPE_1__ chunk ;
typedef int LIST_ENTRY ;


 int FUNC_0 (int *,int *,int ,int ,TYPE_1__*,int *) ;

void FUNC_1(chunk* VAR_0, bool VAR_1, uint64_t VAR_2, uint64_t VAR_3, LIST_ENTRY* VAR_4) {
    LIST_ENTRY* VAR_5;

    VAR_5 = VAR_1 ? &VAR_0->deleting : &VAR_0->space;

    VAR_0->changed = 1;
    VAR_0->space_changed = 1;

    FUNC_0(VAR_5, VAR_1 ? ((void*)0) : &VAR_0->space_size, VAR_2, VAR_3, VAR_0, VAR_4);
}
