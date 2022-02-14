
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ data_clusters; int fat_bits; } ;
struct TYPE_5__ {int value; scalar_t__ reserved; } ;
typedef TYPE_1__ FAT_ENTRY ;
typedef TYPE_2__ DOS_FS ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (unsigned int) ;

void FUNC_3(FAT_ENTRY * VAR_0, void *VAR_1, uint32_t VAR_2, DOS_FS * VAR_3)
{
    unsigned char *VAR_4;

    if (VAR_2 > VAR_3->data_clusters + 1) {
 FUNC_0("Internal error: cluster out of range in get_fat() (%lu > %lu).",
  (unsigned long)VAR_2, (unsigned long)(VAR_3->data_clusters + 1));
    }

    switch (VAR_3->fat_bits) {
    case 12:
 VAR_4 = &((unsigned char *)VAR_1)[VAR_2 * 3 / 2];
 VAR_0->value = 0xfff & (VAR_2 & 1 ? (VAR_4[0] >> 4) | (VAR_4[1] << 4) :
    (VAR_4[0] | VAR_4[1] << 8));
 break;
    case 16:
 VAR_0->value = FUNC_1(((unsigned short *)VAR_1)[VAR_2]);
 break;
    case 32:


 {
     uint32_t VAR_5 = FUNC_2(((unsigned int *)VAR_1)[VAR_2]);
     VAR_0->value = VAR_5 & 0xfffffff;
     VAR_0->reserved = VAR_5 >> 28;
 }
 break;
    default:
 FUNC_0("Bad FAT entry size: %d bits.", VAR_3->fat_bits);
    }
}
