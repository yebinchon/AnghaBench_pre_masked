
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut16 ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {scalar_t__ comp_check; int rom_setup; scalar_t__ checksum; TYPE_1__ member_0; } ;
typedef TYPE_2__ sfc_int_hdr ;
struct TYPE_7__ {int size; int buf; } ;
typedef int RList ;
typedef TYPE_3__ RBinFile ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int *,int) ;
 int * FUNC_3 () ;

__attribute__((used)) static RList* FUNC_4(RBinFile *VAR_1) {
 RList *VAR_2 = ((void*)0);

 int VAR_3 = 0;
 bool VAR_4 = 0;
 int VAR_5 = 0;





 sfc_int_hdr VAR_6 = {0};

 int VAR_7 = FUNC_2 (VAR_1->buf, 0x7FC0 + VAR_3, (ut8*)&VAR_6, VAR_0);
 if (VAR_7 != VAR_0) {
  FUNC_1 ("Unable to read SFC/SNES header\n");
  return ((void*)0);
 }

 if ( (VAR_6.comp_check != (ut16)~(VAR_6.checksum)) || ((VAR_6.rom_setup & 0x1) != 0) ){



  VAR_7 = FUNC_2 (VAR_1->buf, 0xFFC0 + VAR_3, (ut8*)&VAR_6, VAR_0);
  if (VAR_7 != VAR_0) {
   FUNC_1 ("Unable to read SFC/SNES header\n");
   return ((void*)0);
  }

  if ( (VAR_6.comp_check != (ut16)~(VAR_6.checksum)) || ((VAR_6.rom_setup & 0x1) != 1) ) {

   FUNC_1 ("Cannot determine if this is a LoROM or HiROM file\n");
   return ((void*)0);
  }
  VAR_4 = 1;
 }

 if (!(VAR_2 = FUNC_3 ())) {
  return ((void*)0);
 }

 if (VAR_4) {
  for (VAR_5 = 0; VAR_5 < ((VAR_1->size - VAR_3) / 0x8000) ; VAR_5++) {

   FUNC_0 (VAR_2, "ROM",VAR_5,VAR_3 + VAR_5 * 0x8000, 0x400000 + (VAR_5 * 0x8000), 0x8000);
   if (VAR_5 % 2) {
    FUNC_0(VAR_2, "ROM_MIRROR", VAR_5, VAR_3 + VAR_5 * 0x8000,(VAR_5 * 0x8000), 0x8000);
   }
  }

 } else {
  for (VAR_5=0; VAR_5 < ((VAR_1->size - VAR_3)/ 0x8000) ; VAR_5++) {

   FUNC_0(VAR_2,"ROM",VAR_5,VAR_3 + VAR_5*0x8000,0x8000 + (VAR_5*0x10000), 0x8000);
  }
 }
 return VAR_2;
}
