
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct libfat_filesystem {scalar_t__ clustsize; scalar_t__ data; scalar_t__ rootdir; scalar_t__ clustshift; int endcluster; int fat_type; scalar_t__ fat; } ;
typedef scalar_t__ libfat_sector_t ;
typedef int le32_t ;
typedef int le16_t ;
typedef int int32_t ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct libfat_filesystem*,int) ;
 int* FUNC_1 (struct libfat_filesystem*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

libfat_sector_t FUNC_4(struct libfat_filesystem * VAR_2,
      libfat_sector_t VAR_3)
{
    int32_t VAR_4, VAR_5;
    uint32_t VAR_6;
    libfat_sector_t VAR_7;
    uint8_t *VAR_8;
    uint32_t VAR_9 = VAR_2->clustsize - 1;
    libfat_sector_t VAR_10;

    if (VAR_3 < VAR_2->data) {
 if (VAR_3 < VAR_2->rootdir)
     return -1;


 VAR_3++;
 return (VAR_3 < VAR_2->data) ? VAR_3 : 0;
    }

    VAR_10 = VAR_3 - VAR_2->data;

    if (~VAR_10 & VAR_9)
 return VAR_3 + 1;

    VAR_4 = 2 + (VAR_10 >> VAR_2->clustshift);

    if (VAR_4 >= VAR_2->endcluster)
 return -1;

    switch (VAR_2->fat_type) {
    case 130:

 VAR_6 = VAR_4 + (VAR_4 >> 1);
 VAR_7 = VAR_2->fat + (VAR_6 >> VAR_1);
 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (!VAR_8)
     return -1;
 VAR_5 = VAR_8[VAR_6 & VAR_0];


 VAR_6++;
 VAR_7 = VAR_2->fat + (VAR_6 >> VAR_1);
 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (!VAR_8)
     return -1;
 VAR_5 |= VAR_8[VAR_6 & VAR_0] << 8;


 if (VAR_4 & 1)
     VAR_5 >>= 4;
 else
     VAR_5 &= 0x0FFF;

 if (VAR_5 >= 0x0FF8)
     return 0;
 break;

    case 129:
 VAR_6 = VAR_4 << 1;
 VAR_7 = VAR_2->fat + (VAR_6 >> VAR_1);
 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (!VAR_8)
     return -1;
 VAR_5 =
     FUNC_2((le16_t *) & VAR_8[VAR_6 & VAR_0]);

 if (VAR_5 >= 0x0FFF8)
     return 0;
 break;

    case 128:
 VAR_6 = VAR_4 << 2;
 VAR_7 = VAR_2->fat + (VAR_6 >> VAR_1);
 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (!VAR_8)
     return -1;
 VAR_5 =
     FUNC_3((le32_t *) & VAR_8[VAR_6 & VAR_0]);
 VAR_5 &= 0x0FFFFFFF;

 if (VAR_5 >= 0x0FFFFFF8)
     return 0;
 break;

    default:
 return -1;
    }

    return FUNC_0(VAR_2, VAR_5);
}
