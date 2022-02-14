
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* card; int i2c; struct ews_spec* spec; } ;
struct ews_spec {int * i2cdevs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_3, int VAR_4)
{
 struct ews_spec *VAR_5 = VAR_3->spec;
 unsigned char VAR_6, VAR_7;

 if (FUNC_1(VAR_4 < 0 || VAR_4 > 0x0f))
  return -VAR_0;
 FUNC_2(VAR_3->i2c);
 if (FUNC_3(VAR_5->i2cdevs[VAR_2], &VAR_6, 1) != 1)
  goto __error;
 VAR_7 = (VAR_6 & 0xf0) | VAR_4;
 if (VAR_7 != VAR_6)
  if (FUNC_4(VAR_5->i2cdevs[VAR_2], &VAR_7, 1)
      != 1)
   goto __error;
 FUNC_5(VAR_3->i2c);
 return 0;

     __error:
 FUNC_5(VAR_3->i2c);
 FUNC_0(VAR_3->card->dev,
  "AK4524 chip select failed, check cable to the front module\n");
 return -VAR_1;
}
