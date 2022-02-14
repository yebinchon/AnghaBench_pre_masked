
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {unsigned char* aes_bits; int chip_idx; int mgr; TYPE_1__* card; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (int ,struct pcxhr_rmh*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcxhr *VAR_2,
        int VAR_3, unsigned char VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned char VAR_8 = VAR_4;
 unsigned char VAR_9 = VAR_2->aes_bits[VAR_3];
 struct pcxhr_rmh VAR_10;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if ((VAR_9 & 0x01) != (VAR_8 & 0x01)) {
   VAR_7 = VAR_2->chip_idx & 0x03;
   if (VAR_2->chip_idx > 3)

    VAR_7 |= 1 << 22;
   VAR_7 |= ((VAR_3 << 3) + VAR_5) << 2;
   VAR_7 |= (VAR_8 & 0x01) << 23;
   FUNC_1(&VAR_10, VAR_0);
   VAR_10.cmd[0] |= VAR_1;
   VAR_10.cmd[1] = VAR_7;
   VAR_10.cmd_len = 2;
   FUNC_0(VAR_2->card->dev,
    "write iec958 AES %d byte %d bit %d (cmd %x)\n",
        VAR_2->chip_idx, VAR_3, VAR_5, VAR_7);
   VAR_6 = FUNC_2(VAR_2->mgr, &VAR_10);
   if (VAR_6)
    return VAR_6;
  }
  VAR_9 >>= 1;
  VAR_8 >>= 1;
 }
 VAR_2->aes_bits[VAR_3] = VAR_4;
 return 0;
}
