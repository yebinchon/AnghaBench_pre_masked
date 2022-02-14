
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct TYPE_3__ {int fsid; } ;
typedef TYPE_1__ nfs41_superblock ;
typedef int nfs41_fsid ;


 int FUNC_0 (int *,int const*) ;
 TYPE_1__* FUNC_1 (struct list_entry const*) ;

__attribute__((used)) static int FUNC_2(
    const struct list_entry *VAR_0,
    const void *VAR_1)
{
    const nfs41_superblock *VAR_2 = FUNC_1(VAR_0);
    return FUNC_0(&VAR_2->fsid, (const nfs41_fsid*)VAR_1);
}
