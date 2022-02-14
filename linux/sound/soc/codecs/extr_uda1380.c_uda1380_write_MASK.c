
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uda1380_priv {int i2c; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (char*,int,...) ;
 struct uda1380_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int VAR_2 ;
 int FUNC_6 (struct snd_soc_component*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_3, unsigned int VAR_4,
 unsigned int VAR_5)
{
 struct uda1380_priv *VAR_6 = FUNC_4(VAR_3);
 u8 VAR_7[3];






 VAR_7[0] = VAR_4;
 VAR_7[1] = (VAR_5 & 0xff00) >> 8;
 VAR_7[2] = VAR_5 & 0x00ff;

 FUNC_6(VAR_3, VAR_4, VAR_5);




 if (!FUNC_5(VAR_3) && (VAR_4 >= VAR_1))
  return 0;
 FUNC_3("uda1380: hw write %x val %x\n", VAR_4, VAR_5);
 if (FUNC_2(VAR_6->i2c, VAR_7, 3) == 3) {
  unsigned int VAR_8;
  FUNC_2(VAR_6->i2c, VAR_7, 1);
  FUNC_1(VAR_6->i2c, VAR_7, 2);
  VAR_8 = (VAR_7[0]<<8) | VAR_7[1];
  if (VAR_8 != VAR_5) {
   FUNC_3("uda1380: READ BACK VAL %x\n",
     (VAR_7[0]<<8) | VAR_7[1]);
   return -VAR_0;
  }
  if (VAR_4 >= 0x10)
   FUNC_0(VAR_4 - 0x10, &VAR_2);
  return 0;
 } else
  return -VAR_0;
}
