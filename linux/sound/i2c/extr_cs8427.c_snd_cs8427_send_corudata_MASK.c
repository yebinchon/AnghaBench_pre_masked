
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_i2c_device {struct cs8427* private_data; } ;
struct TYPE_2__ {char* hw_udata; char* hw_status; } ;
struct cs8427 {int* regmap; TYPE_1__ playback; } ;
typedef int data ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char*,unsigned char*,int) ;
 int FUNC_2 (char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (struct snd_i2c_device*,size_t,int) ;
 int FUNC_5 (struct snd_i2c_device*,int) ;
 int FUNC_6 (struct snd_i2c_device*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(struct snd_i2c_device *VAR_7,
        int VAR_8,
        unsigned char *VAR_9,
        int VAR_10)
{
 struct cs8427 *VAR_11 = VAR_7->private_data;
 char *VAR_12 = VAR_8 ?
  VAR_11->playback.hw_udata : VAR_11->playback.hw_status;
 unsigned char VAR_13[32];
 int VAR_14, VAR_15;

 if (!FUNC_1(VAR_12, VAR_9, VAR_10))
  return 0;
 if ((VAR_14 = FUNC_5(VAR_7, VAR_8)) < 0)
  return VAR_14;
 FUNC_2(VAR_12, VAR_9, VAR_10);
 if (VAR_8) {
  FUNC_3(VAR_13, 0, sizeof(VAR_13));
  if (FUNC_1(VAR_12, VAR_13, VAR_10) == 0) {
   VAR_11->regmap[VAR_3] &= ~VAR_4;
   VAR_11->regmap[VAR_3] |= VAR_5 |
    VAR_0;
   VAR_14 = FUNC_4(VAR_7, VAR_3,
         VAR_11->regmap[VAR_3]);
   return VAR_14 < 0 ? VAR_14 : 0;
  }
 }
 VAR_13[0] = VAR_1 | VAR_2;
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  VAR_13[VAR_15 + 1] = FUNC_0(VAR_9[VAR_15]);
 if (FUNC_6(VAR_7, VAR_13, VAR_10 + 1) != VAR_10 + 1)
  return -VAR_6;
 return 1;
}
