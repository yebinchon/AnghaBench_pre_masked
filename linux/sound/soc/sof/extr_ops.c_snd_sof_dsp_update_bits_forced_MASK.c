
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int hw_lock; } ;


 int FUNC_0 (struct snd_sof_dev*,int ,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct snd_sof_dev *VAR_0, u32 VAR_1,
        u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_0->hw_lock, VAR_5);
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->hw_lock, VAR_5);
}
