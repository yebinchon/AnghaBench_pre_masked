
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfat_filesystem {int rootcluster; int rootdir; int endcluster; int data; int clustshift; } ;
typedef int libfat_sector_t ;
typedef int int32_t ;



libfat_sector_t FUNC_0(const struct libfat_filesystem *VAR_0,
           int32_t VAR_1)
{
    if (VAR_1 == 0)
 VAR_1 = VAR_0->rootcluster;

    if (VAR_1 == 0)
 return VAR_0->rootdir;
    else if (VAR_1 < 2 || VAR_1 >= VAR_0->endcluster)
 return -1;
    else
 return VAR_0->data + ((libfat_sector_t) (VAR_1 - 2) << VAR_0->clustshift);
}
