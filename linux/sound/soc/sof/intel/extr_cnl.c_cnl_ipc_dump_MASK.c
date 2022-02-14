
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct snd_sof_dev*) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_sof_dev *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_1(VAR_4);


 VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_1);
 VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_0);
 VAR_7 = FUNC_2(VAR_4, VAR_3, VAR_2);



 FUNC_0(VAR_4->dev,
  "error: host status 0x%8.8x dsp status 0x%8.8x mask 0x%8.8x\n",
  VAR_6, VAR_7, VAR_5);
}
