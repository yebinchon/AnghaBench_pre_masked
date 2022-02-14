
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident_voice {unsigned int LBA; int GVSel; int Pan; int CTRL; int FMC; int RVol; int CVol; int number; int Vol; int EC; int CSO; int Alpha; int FMS; int ESO; int Delta; int Attribute; } ;
struct snd_trident {int device; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 () ;

void FUNC_6(struct snd_trident * VAR_2,
      struct snd_trident_voice * VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5[5];

 VAR_5[1] = VAR_3->LBA;
 VAR_5[4] = (VAR_3->GVSel << 31) |
    ((VAR_3->Pan & 0x0000007f) << 24) |
    ((VAR_3->CTRL & 0x0000000f) << 12);
 VAR_4 = ((VAR_3->FMC & 3) << 14) |
               ((VAR_3->RVol & 0x7f) << 7) |
               (VAR_3->CVol & 0x7f);

 switch (VAR_2->device) {
 case 128:
  VAR_5[4] |= VAR_3->number > 31 ?
    (VAR_3->Vol & 0x000003ff) :
    ((VAR_3->Vol & 0x00003fc) << (16-2)) |
    (VAR_3->EC & 0x00000fff);
  VAR_5[0] = (VAR_3->CSO << 16) | ((VAR_3->Alpha & 0x00000fff) << 4) |
   (VAR_3->FMS & 0x0000000f);
  VAR_5[2] = (VAR_3->ESO << 16) | (VAR_3->Delta & 0x0ffff);
  VAR_5[3] = (VAR_3->Attribute << 16) | VAR_4;
  break;
 case 130:
  VAR_5[4] |= ((VAR_3->Vol & 0x000003fc) << (16-2)) |
      (VAR_3->EC & 0x00000fff);
  VAR_5[0] = (VAR_3->CSO << 16) | ((VAR_3->Alpha & 0x00000fff) << 4) |
   (VAR_3->FMS & 0x0000000f);
  VAR_5[2] = (VAR_3->ESO << 16) | (VAR_3->Delta & 0x0ffff);
  VAR_5[3] = VAR_4;
  break;
 case 129:
  VAR_5[4] |= ((VAR_3->Vol & 0x000003fc) << (16-2)) |
      (VAR_3->EC & 0x00000fff);
  VAR_5[0] = (VAR_3->Delta << 24) | (VAR_3->CSO & 0x00ffffff);
  VAR_5[2] = ((VAR_3->Delta << 16) & 0xff000000) |
   (VAR_3->ESO & 0x00ffffff);
  VAR_5[3] = (VAR_3->Alpha << 20) |
   ((VAR_3->FMS & 0x0000000f) << 16) | VAR_4;
  break;
 default:
  FUNC_5();
  return;
 }

 FUNC_3(VAR_3->number, FUNC_0(VAR_2, VAR_1));
 FUNC_4(VAR_5[0], FUNC_0(VAR_2, VAR_0 + 0));
 FUNC_4(VAR_5[1], FUNC_0(VAR_2, VAR_0 + 4));
 FUNC_4(VAR_5[2], FUNC_0(VAR_2, VAR_0 + 8));
 FUNC_4(VAR_5[3], FUNC_0(VAR_2, VAR_0 + 12));
 FUNC_4(VAR_5[4], FUNC_0(VAR_2, VAR_0 + 16));
}
