
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emu10k1x_midi {int input_lock; } ;
struct emu10k1x {int port; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned char,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct emu10k1x*,struct emu10k1x_midi*) ;
 scalar_t__ FUNC_2 (struct emu10k1x*,struct emu10k1x_midi*) ;
 int FUNC_3 (struct emu10k1x*,struct emu10k1x_midi*) ;
 int FUNC_4 (struct emu10k1x*,struct emu10k1x_midi*,unsigned char) ;
 int FUNC_5 (struct emu10k1x*,struct emu10k1x_midi*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct emu10k1x * VAR_1,
      struct emu10k1x_midi *VAR_2, unsigned char VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 FUNC_6(&VAR_2->input_lock, VAR_5);
 FUNC_5(VAR_1, VAR_2, 0x00);


 FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  VAR_7 = 0;
  VAR_6 = 10000;
  while (!VAR_7 && VAR_6-- > 0) {
   if (FUNC_1(VAR_1, VAR_2)) {
    if (FUNC_2(VAR_1, VAR_2) == VAR_0)
     VAR_7 = 1;
   }
  }
  if (!VAR_7 && FUNC_2(VAR_1, VAR_2) == VAR_0)
   VAR_7 = 1;
 } else {
  VAR_7 = 1;
 }
 FUNC_7(&VAR_2->input_lock, VAR_5);
 if (!VAR_7) {
  FUNC_0(VAR_1->card->dev,
   "midi_cmd: 0x%x failed at 0x%lx (status = 0x%x, data = 0x%x)!!!\n",
      VAR_3, VAR_1->port,
      FUNC_3(VAR_1, VAR_2),
      FUNC_2(VAR_1, VAR_2));
  return 1;
 }
 return 0;
}
