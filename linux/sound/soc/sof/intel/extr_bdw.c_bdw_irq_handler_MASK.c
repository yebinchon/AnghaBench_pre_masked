
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_sof_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_6, void *VAR_7)
{
 struct snd_sof_dev *VAR_8 = VAR_7;
 u32 VAR_9;
 int VAR_10 = VAR_1;


 VAR_9 = FUNC_0(VAR_8, VAR_0, VAR_3);
 if (VAR_9 & (VAR_5 | VAR_4))
  VAR_10 = VAR_2;

 return VAR_10;
}
