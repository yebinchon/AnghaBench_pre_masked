
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct libfat_filesystem {int (* read ) (intptr_t,void*,size_t,VAR_0) ;intptr_t readptr; int clustsize; int clustshift; int end; int fat; int rootdir; scalar_t__ data; int endcluster; scalar_t__ fat_type; void* rootcluster; int * sectors; } ;
struct TYPE_3__ {int bpb_rootclus; int bpb_fatsz32; } ;
struct TYPE_4__ {TYPE_1__ fat32; } ;
struct fat_bootsect {TYPE_2__ u; int bsRootDirEnts; int bsFATs; int bsFATsecs; int bsResSectors; int bsHugeSectors; int bsSectors; int bsSecPerClust; int bsBytesPerSec; } ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct libfat_filesystem*) ;
 struct fat_bootsect* FUNC_1 (struct libfat_filesystem*,int ) ;
 struct libfat_filesystem* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct libfat_filesystem *
FUNC_6(int (*VAR_7) (intptr_t, void *, size_t, VAR_8),
     intptr_t VAR_9)
{
    struct libfat_filesystem *VAR_10 = ((void*)0);
    struct fat_bootsect *VAR_11;
    int VAR_12;
    uint32_t VAR_13, VAR_14, VAR_15, VAR_16;
    uint32_t VAR_17;

    VAR_10 = FUNC_2(sizeof(struct libfat_filesystem));
    if (!VAR_10)
 goto barf;

    VAR_10->sectors = ((void*)0);
    VAR_10->read = VAR_7;
    VAR_10->readptr = VAR_9;

    VAR_11 = FUNC_1(VAR_10, 0);
    if (!VAR_11)
 goto barf;

    if (FUNC_3(&VAR_11->bsBytesPerSec) != VAR_6)
 goto barf;

    for (VAR_12 = 0; VAR_12 <= 8; VAR_12++) {
 if ((uint8_t) (1 << VAR_12) == FUNC_5(&VAR_11->bsSecPerClust))
     break;
    }
    if (VAR_12 > 8)
 goto barf;
    VAR_10->clustsize = 1 << VAR_12;
    VAR_10->clustshift = VAR_12;

    VAR_13 = FUNC_3(&VAR_11->bsSectors);
    if (!VAR_13)
 VAR_13 = FUNC_4(&VAR_11->bsHugeSectors);

    VAR_10->end = VAR_13;

    VAR_10->fat = FUNC_3(&VAR_11->bsResSectors);
    VAR_14 = FUNC_3(&VAR_11->bsFATsecs);
    if (!VAR_14)
 VAR_14 = FUNC_4(&VAR_11->u.fat32.bpb_fatsz32);

    VAR_10->rootdir = VAR_10->fat + VAR_14 * FUNC_5(&VAR_11->bsFATs);

    VAR_16 = ((FUNC_3(&VAR_11->bsRootDirEnts) << 5) + VAR_4)
 >> VAR_5;
    VAR_10->data = VAR_10->rootdir + VAR_16;


    if (VAR_10->data >= VAR_10->end)
 goto barf;


    VAR_17 = (VAR_10->end - VAR_10->data) >> VAR_10->clustshift;
    VAR_10->endcluster = VAR_17 + 2;

    if (VAR_17 <= 0xff4) {
 VAR_10->fat_type = VAR_1;
 VAR_15 = VAR_10->endcluster + (VAR_10->endcluster >> 1);
    } else if (VAR_17 <= 0xfff4) {
 VAR_10->fat_type = VAR_2;
 VAR_15 = VAR_10->endcluster << 1;
    } else if (VAR_17 <= 0xffffff4) {
 VAR_10->fat_type = VAR_3;
 VAR_15 = VAR_10->endcluster << 2;
    } else
 goto barf;

    VAR_15 = (VAR_15 + VAR_6 - 1) >> VAR_5;

    if (VAR_15 > VAR_14)
 goto barf;

    if (VAR_10->fat_type == VAR_3)
 VAR_10->rootcluster = FUNC_4(&VAR_11->u.fat32.bpb_rootclus);
    else
 VAR_10->rootcluster = 0;

    return VAR_10;

barf:
    if (VAR_10)
 FUNC_0(VAR_10);
    return ((void*)0);
}
