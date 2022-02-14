
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct libfat_filesystem {int dummy; } ;
struct fat_dirent {int attribute; int* name; int caseflags; int clusthi; int clustlo; int size; } ;
typedef scalar_t__ libfat_sector_t ;
struct TYPE_5__ {scalar_t__ offset; scalar_t__ sector; int cluster; } ;
typedef TYPE_1__ libfat_dirpos_t ;
struct TYPE_6__ {char* name; int attributes; int size; } ;
typedef TYPE_2__ libfat_diritem_t ;


 int FUNC_0 (char*,int*) ;
 struct fat_dirent* FUNC_1 (struct libfat_filesystem*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct libfat_filesystem*,int ) ;
 struct fat_dirent* FUNC_3 (struct libfat_filesystem*,scalar_t__) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct libfat_filesystem *VAR_0, libfat_dirpos_t *VAR_1,
     libfat_diritem_t *VAR_2)
{
    int VAR_3, VAR_4;
    struct fat_dirent *VAR_5;

    FUNC_4(VAR_2->name, 0, sizeof(VAR_2->name));
    VAR_2->size = 0;
    VAR_2->attributes = 0;
    if (VAR_1->offset < 0) {

 VAR_1->offset = 0;
 VAR_1->sector = FUNC_2(VAR_0, VAR_1->cluster);
 if ((VAR_1->sector == 0) || (VAR_1->sector == (libfat_sector_t)-1))
     return -1;
 VAR_5 = FUNC_3(VAR_0, VAR_1->sector);
    } else {
 VAR_5 = FUNC_1(VAR_0, &VAR_1->sector, &VAR_1->offset);
    }
    if (!VAR_5)
 return -1;


    while ((VAR_5->attribute == 0x08) || (VAR_5->name[0] == 0xe5) ||
    ((VAR_5->name[0] == '.') && (VAR_5->name[2] == ' ') &&
     ((VAR_5->name[1] == ' ') || (VAR_5->name[1] == '.')))) {
 VAR_5 = FUNC_1(VAR_0, &VAR_1->sector, &VAR_1->offset);
 if (!VAR_5)
     return -1;
    }

    if (VAR_5->name[0] == 0)
 return -2;


    VAR_4 = -1;
    while (VAR_5->attribute == 0x0F) {
 VAR_3 = VAR_5->name[0];
 if ((VAR_4 < 0) && ((VAR_3 & 0xF0) != 0x40))
     break;

 VAR_3 = (VAR_3 & 0x0F) - 1;
 if ((VAR_4 >= 0) && (VAR_3 != VAR_4 - 1))
     return -3;
 VAR_4 = VAR_3;
 FUNC_0(&VAR_2->name[13 * VAR_3], VAR_5->name);
 VAR_5 = FUNC_1(VAR_0, &VAR_1->sector, &VAR_1->offset);
 if (!VAR_5)
     return -1;
    }

    if (VAR_2->name[0] == 0) {
 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 12; VAR_3++) {
     if ((VAR_3 >= 8) && (VAR_5->name[VAR_3] == ' '))
  break;
     if (VAR_3 == 8)
  VAR_2->name[VAR_4++] = '.';
     if (VAR_5->name[VAR_3] == ' ')
  continue;
     VAR_2->name[VAR_4] = VAR_5->name[VAR_3];

     if ((VAR_2->name[VAR_4] >= 'A') && (VAR_2->name[VAR_4] <= 'Z')) {
  if ((VAR_5->caseflags & 0x02) && (VAR_3 < 8))
      VAR_2->name[VAR_4] += 0x20;
  if ((VAR_5->caseflags & 0x04) && (VAR_3 >= 8))
      VAR_2->name[VAR_4] += 0x20;
     }
     VAR_4++;
 }
    }

    VAR_2->attributes = VAR_5->attribute & 0x37;
    VAR_2->size = FUNC_6(&VAR_5->size);
    return FUNC_5(&VAR_5->clustlo) + (FUNC_5(&VAR_5->clusthi) << 16);
}
