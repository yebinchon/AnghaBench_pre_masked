
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_azf3328 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_azf3328*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct snd_azf3328 *VAR_1, bool VAR_2)
{
 FUNC_0(VAR_1->card->dev, "codec_enable %d\n", VAR_2);


 FUNC_1(
  VAR_1, VAR_0, VAR_2
 );
}
