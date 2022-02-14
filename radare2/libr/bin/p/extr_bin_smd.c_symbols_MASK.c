
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut32 ;
typedef int hdr ;
struct TYPE_5__ {int buf; } ;
struct TYPE_4__ {int CountryCode; int ModemCode; int SramCode; int Peripherials; int CheckSum; int ProductCode; int OverseasName; int DomesticName; int CopyRights; scalar_t__ RamEnd; scalar_t__ RamStart; scalar_t__ RomEnd; scalar_t__ RomStart; } ;
typedef TYPE_1__ SMD_Header ;
typedef int RList ;
typedef TYPE_2__ RBinFile ;


 int FUNC_0 (int *,char const*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int *,int) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static RList *FUNC_6(RBinFile *VAR_1) {
 RList *VAR_2 = ((void*)0);
 const char *VAR_3 = ((void*)0);
 int VAR_4;

 if (!(VAR_2 = FUNC_3 (VAR_0))) {
  return ((void*)0);
 }
 SMD_Header VAR_5;
 int VAR_6 = FUNC_2 (VAR_1->buf, 0x100, (ut8*)&VAR_5, sizeof (VAR_5));
 if (VAR_6 < sizeof (SMD_Header)) {
  return ((void*)0);
 }

 FUNC_0 (VAR_2, "rom_start", FUNC_4 (&VAR_5.RomStart));
 FUNC_0 (VAR_2, "rom_end", FUNC_4 (&VAR_5.RomEnd));
 FUNC_0 (VAR_2, "ram_start", FUNC_4 (&VAR_5.RamStart));
 FUNC_0 (VAR_2, "ram_end", FUNC_4 (&VAR_5.RamEnd));
 FUNC_5 ("Copyright", VAR_5.CopyRights, 32);
 FUNC_5 ("DomesticName", VAR_5.DomesticName, 48);
 FUNC_5 ("OverseasName", VAR_5.OverseasName, 48);
 FUNC_5 ("ProductCode", VAR_5.ProductCode, 14);
 FUNC_1 ("Checksum: 0x%04x\n", (ut32) VAR_5.CheckSum);
 FUNC_5 ("Peripherials", VAR_5.Peripherials, 16);
 FUNC_5 ("SramCode", VAR_5.SramCode, 12);
 FUNC_5 ("ModemCode", VAR_5.ModemCode, 12);
 FUNC_5 ("CountryCode", VAR_5.CountryCode, 16);
 ut32 VAR_7[64];
 FUNC_2 (VAR_1->buf, 0, (ut8*)&VAR_7, sizeof (ut32) * 64);

 for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
  switch (VAR_4) {
  case 0: VAR_3 = "SSP"; break;
  case 1: VAR_3 = "Reset"; break;
  case 2: VAR_3 = "BusErr"; break;
  case 3: VAR_3 = "AdrErr"; break;
  case 4: VAR_3 = "InvOpCode"; break;
  case 5: VAR_3 = "DivBy0"; break;
  case 6: VAR_3 = "Check"; break;
  case 7: VAR_3 = "TrapV"; break;
  case 8: VAR_3 = "GPF"; break;
  case 9: VAR_3 = "Trace"; break;
  case 10: VAR_3 = "Reserv0"; break;
  case 11: VAR_3 = "Reserv1"; break;
  case 12: VAR_3 = "Reserv2"; break;
  case 13: VAR_3 = "Reserv3"; break;
  case 14: VAR_3 = "Reserv4"; break;
  case 15: VAR_3 = "BadInt"; break;
  case 16: VAR_3 = "Reserv10"; break;
  case 17: VAR_3 = "Reserv11"; break;
  case 18: VAR_3 = "Reserv12"; break;
  case 19: VAR_3 = "Reserv13"; break;
  case 20: VAR_3 = "Reserv14"; break;
  case 21: VAR_3 = "Reserv15"; break;
  case 22: VAR_3 = "Reserv16"; break;
  case 23: VAR_3 = "Reserv17"; break;
  case 24: VAR_3 = "BadIRQ"; break;
  case 25: VAR_3 = "IRQ1"; break;
  case 26: VAR_3 = "EXT"; break;
  case 27: VAR_3 = "IRQ3"; break;
  case 28: VAR_3 = "HBLANK"; break;
  case 29: VAR_3 = "IRQ5"; break;
  case 30: VAR_3 = "VBLANK"; break;
  case 31: VAR_3 = "IRQ7"; break;
  case 32: VAR_3 = "Trap0"; break;
  case 33: VAR_3 = "Trap1"; break;
  case 34: VAR_3 = "Trap2"; break;
  case 35: VAR_3 = "Trap3"; break;
  case 36: VAR_3 = "Trap4"; break;
  case 37: VAR_3 = "Trap5"; break;
  case 38: VAR_3 = "Trap6"; break;
  case 39: VAR_3 = "Trap7"; break;
  case 40: VAR_3 = "Trap8"; break;
  case 41: VAR_3 = "Trap9"; break;
  case 42: VAR_3 = "Trap10"; break;
  case 43: VAR_3 = "Trap11"; break;
  case 44: VAR_3 = "Trap12"; break;
  case 45: VAR_3 = "Trap13"; break;
  case 46: VAR_3 = "Trap14"; break;
  case 47: VAR_3 = "Trap15"; break;
  case 48: VAR_3 = "Reserv30"; break;
  case 49: VAR_3 = "Reserv31"; break;
  case 50: VAR_3 = "Reserv32"; break;
  case 51: VAR_3 = "Reserv33"; break;
  case 52: VAR_3 = "Reserv34"; break;
  case 53: VAR_3 = "Reserv35"; break;
  case 54: VAR_3 = "Reserv36"; break;
  case 55: VAR_3 = "Reserv37"; break;
  case 56: VAR_3 = "Reserv38"; break;
  case 57: VAR_3 = "Reserv39"; break;
  case 58: VAR_3 = "Reserv3A"; break;
  case 59: VAR_3 = "Reserv3B"; break;
  case 60: VAR_3 = "Reserv3C"; break;
  case 61: VAR_3 = "Reserv3D"; break;
  case 62: VAR_3 = "Reserv3E"; break;
  case 63: VAR_3 = "Reserv3F"; break;
  default: VAR_3 = ((void*)0);
  }
  if (VAR_3 && VAR_7[VAR_4]) {
   ut32 VAR_8 = FUNC_4 (&VAR_7[VAR_4]);
   FUNC_0 (VAR_2, VAR_3, VAR_8);
  }
 }
 return VAR_2;
}
