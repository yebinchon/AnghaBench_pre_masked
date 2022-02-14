
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int changed; int space_changed; int deleting; } ;
typedef TYPE_1__ chunk ;
typedef int LIST_ENTRY ;


 int FUNC_0 (char*,TYPE_1__*,int ,int ,int *) ;
 int FUNC_1 (int *,int *,int ,int ,TYPE_1__*,int *) ;

void FUNC_2(chunk* VAR_0, uint64_t VAR_1, uint64_t VAR_2, LIST_ENTRY* VAR_3) {
    FUNC_0("(%p, %I64x, %I64x, %p)\n", VAR_0, VAR_1, VAR_2, VAR_3);

    VAR_0->changed = 1;
    VAR_0->space_changed = 1;

    FUNC_1(&VAR_0->deleting, ((void*)0), VAR_1, VAR_2, VAR_0, VAR_3);
}
