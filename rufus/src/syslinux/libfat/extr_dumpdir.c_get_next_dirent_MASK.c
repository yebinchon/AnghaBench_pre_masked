
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfat_filesystem {int dummy; } ;
struct fat_dirent {int dummy; } ;
typedef scalar_t__ libfat_sector_t ;


 int VAR_0 ;
 struct fat_dirent* FUNC_0 (struct libfat_filesystem*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct libfat_filesystem*,scalar_t__) ;

__attribute__((used)) static struct fat_dirent* FUNC_2(struct libfat_filesystem *VAR_1,
       libfat_sector_t *VAR_2, int *VAR_3)
{
    struct fat_dirent *VAR_4;

    *VAR_3 += sizeof(struct fat_dirent);
    if (*VAR_3 >= VAR_0) {
 *VAR_3 = 0;
 *VAR_2 = FUNC_1(VAR_1, *VAR_2);
 if ((*VAR_2 == 0) || (*VAR_2 == (libfat_sector_t)-1))
     return ((void*)0);
    }
    VAR_4 = FUNC_0(VAR_1, *VAR_2);
    if (!VAR_4)
 return ((void*)0);
    VAR_4 = (struct fat_dirent*) &((char*)VAR_4)[*VAR_3];
    return VAR_4;
}
