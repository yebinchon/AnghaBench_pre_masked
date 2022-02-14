
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_sof_dev*,int) ;
 int FUNC_3 (struct snd_sof_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_sof_dev *VAR_1, u32 VAR_2)
{

 u32 VAR_3 = VAR_2 & VAR_0;
 u32 VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
  FUNC_2(VAR_1, VAR_4);
  break;
 case 128:
  FUNC_3(VAR_1, VAR_4);
  break;
 default:
  FUNC_1(VAR_1->dev, "error: unhandled stream message %x\n",
   VAR_4);
  break;
 }
}
