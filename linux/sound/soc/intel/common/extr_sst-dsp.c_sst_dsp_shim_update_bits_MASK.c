
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_dsp {int spinlock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sst_dsp*,int ,int ,int ) ;

int FUNC_3(struct sst_dsp *VAR_0, u32 VAR_1,
    u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_0(&VAR_0->spinlock, VAR_4);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->spinlock, VAR_4);
 return VAR_5;
}
