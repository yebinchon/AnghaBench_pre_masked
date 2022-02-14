
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct TYPE_5__ {scalar_t__ superblock; scalar_t__ fileid; } ;
typedef TYPE_2__ nfs41_fh ;
struct TYPE_4__ {TYPE_2__ fh; } ;
struct TYPE_6__ {TYPE_1__ file; } ;


 TYPE_3__* FUNC_0 (struct list_entry const*) ;

__attribute__((used)) static int FUNC_1(const struct list_entry *VAR_0, const void *VAR_1)
{
    const nfs41_fh *VAR_2 = &FUNC_0(VAR_0)->file.fh;
    const nfs41_fh *VAR_3 = (const nfs41_fh*)VAR_1;
    if (VAR_2->superblock != VAR_3->superblock) return -1;
    if (VAR_2->fileid != VAR_3->fileid) return -1;
    return 0;
}
