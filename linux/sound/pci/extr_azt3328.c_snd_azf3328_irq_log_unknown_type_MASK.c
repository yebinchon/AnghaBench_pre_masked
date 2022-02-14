
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_azf3328 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct snd_azf3328 *VAR_0, u8 VAR_1)
{
 FUNC_0(VAR_0->card->dev,
  "unknown IRQ type (%x) occurred, please report!\n",
  VAR_1);
}
