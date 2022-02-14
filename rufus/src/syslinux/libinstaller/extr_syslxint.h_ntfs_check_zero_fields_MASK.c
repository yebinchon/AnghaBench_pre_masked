
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntfs_boot_sector {int bsZeroed_3; int bsZeroed_2; int bsZeroed_1; int * bsZeroed_0; int bsResSectors; } ;



__attribute__((used)) static inline int FUNC_0(const struct ntfs_boot_sector *VAR_0)
{
    return !VAR_0->bsResSectors && (!VAR_0->bsZeroed_0[0] && !VAR_0->bsZeroed_0[1] &&
            !VAR_0->bsZeroed_0[2]) && !VAR_0->bsZeroed_1 && !VAR_0->bsZeroed_2 &&
            !VAR_0->bsZeroed_3;
}
