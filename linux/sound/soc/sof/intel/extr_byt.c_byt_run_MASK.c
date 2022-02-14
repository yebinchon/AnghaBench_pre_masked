
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_sof_dev*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_sof_dev *VAR_7)
{
 int VAR_8 = 10;


 FUNC_4(VAR_7, VAR_0, VAR_4,
      VAR_3, 0x0);
 while (VAR_8--) {
  if (!(FUNC_3(VAR_7, VAR_0, VAR_4) &
        VAR_2))
   break;
  FUNC_2(100);
 }
 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "error:  unable to run DSP firmware\n");
  FUNC_0(VAR_7, VAR_6 | VAR_5);
  return -VAR_1;
 }


 return 1;
}
