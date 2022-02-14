
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {int chip_idx; TYPE_1__* card; TYPE_2__* mgr; } ;
struct TYPE_5__ {scalar_t__ board_has_aes1; } ;
struct TYPE_4__ {int dev; } ;


 unsigned char FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,int,unsigned char) ;

int FUNC_3(struct snd_pcxhr *VAR_4,
        int VAR_5, unsigned char *VAR_6)
{
 unsigned char VAR_7 = (unsigned char)(VAR_5 * 8);
 unsigned char VAR_8 = 0;
 unsigned char VAR_9 = VAR_4->mgr->board_has_aes1 ?
  VAR_0 : VAR_1;
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
  FUNC_1(VAR_4->mgr, VAR_3, VAR_7++);
  VAR_8 <<= 1;
  if (FUNC_0(VAR_4->mgr, VAR_2) & VAR_9)
   VAR_8 |= 1;
 }
 FUNC_2(VAR_4->card->dev, "read iec958 AES %d byte %d = 0x%x\n",
      VAR_4->chip_idx, VAR_5, VAR_8);
 *VAR_6 = VAR_8;
 return 0;
}
