
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {unsigned char last_reg_stat; TYPE_1__* pci; scalar_t__ board_has_aes1; } ;
typedef enum pcxhr_clock_type { ____Placeholder_pcxhr_clock_type } pcxhr_clock_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (struct pcxhr_mgr*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned char) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int) ;

int FUNC_4(struct pcxhr_mgr *VAR_14,
        enum pcxhr_clock_type VAR_15,
        int *VAR_16)
{
 int VAR_17, VAR_18 = 0;
 unsigned int VAR_19;
 unsigned char VAR_20, VAR_21;

 if (VAR_15 == VAR_2) {

  VAR_20 = (VAR_9 |
   VAR_10);
  VAR_21 = VAR_5;

 } else if (VAR_15 == VAR_1 && VAR_14->board_has_aes1) {

  VAR_20 = (VAR_7 |
   VAR_8);
  VAR_21 = VAR_6;

 } else {
  FUNC_2(&VAR_14->pci->dev,
   "get_external_clock : type %d not supported\n",
       VAR_15);
  return -VAR_0;
 }

 if ((FUNC_0(VAR_14, VAR_12) & VAR_20) != VAR_20) {
  FUNC_2(&VAR_14->pci->dev,
   "get_external_clock(%d) = 0 Hz\n", VAR_15);
  *VAR_16 = 0;
  return 0;
 }

 FUNC_1(VAR_14, VAR_13, VAR_21);


 VAR_21 |= VAR_4;

 if (VAR_14->last_reg_stat != VAR_21) {
  FUNC_3(500);
  VAR_14->last_reg_stat = VAR_21;
 }

 FUNC_1(VAR_14, VAR_13, VAR_21);


 VAR_19 = (unsigned int)FUNC_0(VAR_14, VAR_11);
 VAR_19 = (VAR_19 & 0x03) << 8;
 VAR_19 |= (unsigned int)FUNC_0(VAR_14, VAR_3);

 if (VAR_19 != 0)
  VAR_18 = 28224000 / VAR_19;

 if (VAR_18 > 184200)
  VAR_17 = 192000;
 else if (VAR_18 > 152200)
  VAR_17 = 176400;
 else if (VAR_18 > 112000)
  VAR_17 = 128000;
 else if (VAR_18 > 92100)
  VAR_17 = 96000;
 else if (VAR_18 > 76100)
  VAR_17 = 88200;
 else if (VAR_18 > 56000)
  VAR_17 = 64000;
 else if (VAR_18 > 46050)
  VAR_17 = 48000;
 else if (VAR_18 > 38050)
  VAR_17 = 44100;
 else if (VAR_18 > 28000)
  VAR_17 = 32000;
 else if (VAR_18 > 23025)
  VAR_17 = 24000;
 else if (VAR_18 > 19025)
  VAR_17 = 22050;
 else if (VAR_18 > 14000)
  VAR_17 = 16000;
 else if (VAR_18 > 11512)
  VAR_17 = 12000;
 else if (VAR_18 > 9512)
  VAR_17 = 11025;
 else if (VAR_18 > 7000)
  VAR_17 = 8000;
 else
  VAR_17 = 0;

 FUNC_2(&VAR_14->pci->dev, "External clock is at %d Hz (measured %d Hz)\n",
      VAR_17, VAR_18);
 *VAR_16 = VAR_17;
 return 0;
}
