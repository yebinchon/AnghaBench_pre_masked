
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcxhr {int chip_idx; TYPE_1__* card; TYPE_2__* mgr; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; int* stat; } ;
struct TYPE_4__ {scalar_t__ board_aes_in_192k; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,char*,int,int,unsigned char) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (TYPE_2__*,struct pcxhr_rmh*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcxhr *VAR_18,
         int VAR_19, unsigned char *VAR_20)
{
 int VAR_21, VAR_22;
 unsigned char VAR_23;
 struct pcxhr_rmh VAR_24;

 FUNC_1(&VAR_24, VAR_1);
 VAR_24.cmd[0] |= VAR_17;
 switch (VAR_18->chip_idx) {

 case 0: VAR_24.cmd[1] = VAR_7; break;
 case 1: VAR_24.cmd[1] = VAR_8; break;
 case 2: VAR_24.cmd[1] = VAR_9; break;
 case 3: VAR_24.cmd[1] = VAR_10; break;
 default: return -VAR_16;
 }
 if (VAR_18->mgr->board_aes_in_192k) {
  switch (VAR_19) {
  case 0: VAR_24.cmd[2] = VAR_2; break;
  case 1: VAR_24.cmd[2] = VAR_3; break;
  case 2: VAR_24.cmd[2] = VAR_4; break;
  case 3: VAR_24.cmd[2] = VAR_5; break;
  case 4: VAR_24.cmd[2] = VAR_6; break;
  default: return -VAR_16;
  }
 } else {
  switch (VAR_19) {

  case 0: VAR_24.cmd[2] = VAR_11; break;
  case 1: VAR_24.cmd[2] = VAR_12; break;
  case 2: VAR_24.cmd[2] = VAR_13; break;
  case 3: VAR_24.cmd[2] = VAR_14; break;
  case 4: VAR_24.cmd[2] = VAR_15; break;
  default: return -VAR_16;
  }
 }

 VAR_24.cmd[1] &= 0x0fffff;

 VAR_24.cmd[2] &= VAR_0;
 VAR_24.cmd_len = 3;
 VAR_22 = FUNC_2(VAR_18->mgr, &VAR_24);
 if (VAR_22)
  return VAR_22;

 if (VAR_18->mgr->board_aes_in_192k) {
  VAR_23 = (unsigned char)VAR_24.stat[1];
 } else {
  VAR_23 = 0;

  for (VAR_21 = 0; VAR_21 < 8; VAR_21++) {
   VAR_23 <<= 1;
   if (VAR_24.stat[1] & (1 << VAR_21))
    VAR_23 |= 1;
  }
 }
 FUNC_0(VAR_18->card->dev, "read iec958 AES %d byte %d = 0x%x\n",
      VAR_18->chip_idx, VAR_19, VAR_23);
 *VAR_20 = VAR_23;
 return 0;
}
