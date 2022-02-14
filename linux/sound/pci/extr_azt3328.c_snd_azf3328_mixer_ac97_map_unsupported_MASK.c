
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_azf3328 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,char const*,unsigned short) ;

__attribute__((used)) static inline void
FUNC_1(const struct snd_azf3328 *VAR_0,
           unsigned short VAR_1, const char *VAR_2)
{

 FUNC_0(VAR_0->card->dev,
  "missing %s emulation for AC97 register 0x%02x!\n",
  VAR_2, VAR_1);
}
