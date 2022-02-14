
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct boot_sector_16 {int reserved3; int reserved2; } ;
struct boot_sector {int reserved3; int reserved2; } ;
struct TYPE_3__ {int fat_bits; } ;
typedef TYPE_1__ DOS_FS ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct boot_sector_16*) ;
 char FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(DOS_FS * VAR_1, void *VAR_2)
{
    if (VAR_1->fat_bits == 32) {
 struct boot_sector *VAR_3 = VAR_2;

 if (VAR_3->reserved3 & VAR_0) {
     FUNC_2("0x41: ");
     if (FUNC_1() == '1') {
  VAR_3->reserved3 &= ~VAR_0;
  FUNC_0(0, sizeof(*VAR_3), VAR_3);
     }
 }
    } else {
 struct boot_sector_16 *VAR_4 = VAR_2;

 if (VAR_4->reserved2 & VAR_0) {
     FUNC_2("0x25: ");
     if (FUNC_1() == '1') {
  VAR_4->reserved2 &= ~VAR_0;
  FUNC_0(0, sizeof(*VAR_4), VAR_4);
     }
 }
    }
}
