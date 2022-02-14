
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {unsigned int* cmd; int cmd_len; } ;
struct pcxhr_mgr {int use_clock_type; TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;







 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;

__attribute__((used)) static int FUNC_4(struct pcxhr_mgr *VAR_26, unsigned int VAR_27,
          unsigned int *VAR_28, unsigned int *VAR_29)
{
 unsigned int VAR_30, VAR_31, VAR_32;
 struct pcxhr_rmh VAR_33;
 int VAR_34;

 VAR_31 = VAR_27;
 switch (VAR_26->use_clock_type) {
 case 129 :
  switch (VAR_27) {
  case 48000 : VAR_30 = VAR_19; break;
  case 24000 : VAR_30 = VAR_16; break;
  case 12000 : VAR_30 = VAR_10; break;
  case 32000 : VAR_30 = VAR_17; break;
  case 16000 : VAR_30 = VAR_12; break;
  case 8000 : VAR_30 = VAR_21; break;
  case 44100 : VAR_30 = VAR_18; break;
  case 22050 : VAR_30 = VAR_15; break;
  case 11025 : VAR_30 = VAR_9; break;
  case 192000 : VAR_30 = VAR_14; break;
  case 96000 : VAR_30 = VAR_23; break;
  case 176400 : VAR_30 = VAR_13; break;
  case 88200 : VAR_30 = VAR_22; break;
  case 128000 : VAR_30 = VAR_11; break;
  case 64000 : VAR_30 = VAR_20; break;
  default :
   VAR_30 = VAR_8;

   VAR_34 = FUNC_2(VAR_27, &VAR_32, &VAR_31);
   if (VAR_34)
    return VAR_34;
   FUNC_1(&VAR_33, VAR_0);
   VAR_33.cmd[0] |= VAR_2;
   VAR_33.cmd[1] = VAR_32 & VAR_3;
   VAR_33.cmd[2] = VAR_32 >> 24;
   VAR_33.cmd_len = 3;
   VAR_34 = FUNC_3(VAR_26, &VAR_33);
   if (VAR_34 < 0) {
    FUNC_0(&VAR_26->pci->dev,
        "error CMD_ACCESS_IO_WRITE "
        "for PLL register : %x!\n", VAR_34);
    return VAR_34;
   }
  }
  break;
 case 128:
  VAR_30 = VAR_25;
  break;
 case 130:
  VAR_30 = VAR_24;
  break;
 case 134:
  VAR_30 = VAR_4;
  break;
 case 133:
  VAR_30 = VAR_5;
  break;
 case 132:
  VAR_30 = VAR_6;
  break;
 case 131:
  VAR_30 = VAR_7;
  break;
 default:
  return -VAR_1;
 }
 *VAR_28 = VAR_30;
 *VAR_29 = VAR_31;
 return 0;
}
