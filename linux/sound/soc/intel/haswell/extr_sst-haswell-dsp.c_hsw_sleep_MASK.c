
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (struct sst_dsp*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct sst_dsp *VAR_4)
{
 FUNC_0(VAR_4->dev, "HSW_PM dsp runtime suspend\n");


 FUNC_2(VAR_4, VAR_0,
  VAR_1 | VAR_2 | VAR_3,
  VAR_2 | VAR_3 | VAR_1);

 FUNC_1(VAR_4);
 FUNC_0(VAR_4->dev, "HSW_PM dsp runtime suspend exit\n");
}
