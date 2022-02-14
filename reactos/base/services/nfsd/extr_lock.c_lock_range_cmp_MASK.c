
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_1__ nfs41_lock_state ;


 TYPE_1__* FUNC_0 (struct list_entry const*) ;

__attribute__((used)) static int FUNC_1(const struct list_entry *VAR_0, const void *VAR_1)
{
    const nfs41_lock_state *VAR_2 = FUNC_0(VAR_0);
    const nfs41_lock_state *VAR_3 = (const nfs41_lock_state*)VAR_1;
    if (VAR_2->offset != VAR_3->offset) return -1;
    if (VAR_2->length != VAR_3->length) return -1;
    return 0;
}
