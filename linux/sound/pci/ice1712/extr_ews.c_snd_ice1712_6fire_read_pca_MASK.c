
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {int i2c; TYPE_1__* card; struct ews_spec* spec; } ;
struct ews_spec {int * i2cdevs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_ice1712 *VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;
 struct ews_spec *VAR_5 = VAR_2->spec;

 FUNC_1(VAR_2->i2c);
 VAR_4 = VAR_3;
 if (FUNC_3(VAR_5->i2cdevs[VAR_1], &VAR_4, 1) != 1) {
  FUNC_4(VAR_2->i2c);
  FUNC_0(VAR_2->card->dev, "cannot send pca\n");
  return -VAR_0;
 }

 VAR_4 = 0;
 if (FUNC_2(VAR_5->i2cdevs[VAR_1], &VAR_4, 1) != 1) {
  FUNC_4(VAR_2->i2c);
  FUNC_0(VAR_2->card->dev, "cannot read pca\n");
  return -VAR_0;
 }
 FUNC_4(VAR_2->i2c);
 return VAR_4;
}
