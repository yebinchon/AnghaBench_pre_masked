
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct TYPE_5__ {void const* state; } ;
struct TYPE_6__ {int lock; scalar_t__ do_close; TYPE_1__ delegation; } ;
typedef TYPE_2__ nfs41_open_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (struct list_entry const*) ;

__attribute__((used)) static int FUNC_4(const struct list_entry *VAR_0, const void *VAR_1)
{
    nfs41_open_state *VAR_2 = FUNC_3(VAR_0);
    int VAR_3 = -1;


    FUNC_0(&VAR_2->lock);
    if (VAR_2->delegation.state != VAR_1) goto out;
    if (VAR_2->do_close && !FUNC_2(VAR_2)) goto out;
    VAR_3 = 0;
out:
    FUNC_1(&VAR_2->lock);
    return VAR_3;
}
