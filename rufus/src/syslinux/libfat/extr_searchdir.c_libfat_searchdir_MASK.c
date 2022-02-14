
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libfat_filesystem {int dummy; } ;
struct libfat_direntry {int offset; scalar_t__ sector; int entry; } ;
struct fat_dirent {scalar_t__* name; int clusthi; int clustlo; int size; } ;
typedef scalar_t__ libfat_sector_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct libfat_filesystem*,int) ;
 struct fat_dirent* FUNC_1 (struct libfat_filesystem*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct libfat_filesystem*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,void const*,int) ;
 int FUNC_4 (int ,struct fat_dirent*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

int32_t FUNC_7(struct libfat_filesystem *VAR_1, int32_t VAR_2,
    const void *VAR_3, struct libfat_direntry *VAR_4)
{
    struct fat_dirent *VAR_5;
    int VAR_6;
    libfat_sector_t VAR_7 = FUNC_0(VAR_1, VAR_2);

    while (1) {
 if (VAR_7 == 0)
     return -2;
 else if (VAR_7 == (libfat_sector_t) - 1)
     return -1;

 VAR_5 = FUNC_1(VAR_1, VAR_7);
 if (!VAR_5)
     return -1;

 for (VAR_6 = 0; VAR_6 < VAR_0;
      VAR_6 += sizeof(struct fat_dirent)) {
     if (!FUNC_3(VAR_5->name, VAR_3, 11)) {
  if (VAR_4) {
      FUNC_4(VAR_4->entry, VAR_5, sizeof(*VAR_5));
      VAR_4->sector = VAR_7;
      VAR_4->offset = VAR_6;
  }
  if (FUNC_6(&VAR_5->size) == 0)
      return 0;
  else
      return FUNC_5(&VAR_5->clustlo) +
   (FUNC_5(&VAR_5->clusthi) << 16);
     }

     if (VAR_5->name[0] == 0)
  return -2;

     VAR_5++;
 }

 VAR_7 = FUNC_2(VAR_1, VAR_7);
    }
}
