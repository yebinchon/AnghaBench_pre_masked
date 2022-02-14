
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct snd_sof_dev {int dummy; } ;


 int FUNC_0 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ,int) ;

bool FUNC_2(struct snd_sof_dev *VAR_0, u32 VAR_1,
     u32 VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_6 = (VAR_5 & ~VAR_3) | (VAR_4 & VAR_3);

 if (VAR_5 == VAR_6)
  return 0;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6);

 return 1;
}
