
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ymfpci {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_ymfpci*,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_ymfpci *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7 = VAR_5 ? VAR_2 : VAR_1;

 VAR_6 = VAR_3 + FUNC_1(750);
 do {
  if ((FUNC_3(VAR_4, VAR_7) & 0x8000) == 0)
   return 0;
  FUNC_2(1);
 } while (FUNC_4(VAR_3, VAR_6));
 FUNC_0(VAR_4->card->dev,
  "codec_ready: codec %i is not ready [0x%x]\n",
  VAR_5, FUNC_3(VAR_4, VAR_7));
 return -VAR_0;
}
