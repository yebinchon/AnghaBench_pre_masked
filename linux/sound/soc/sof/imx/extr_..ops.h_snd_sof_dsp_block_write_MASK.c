
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_sof_dev {int dummy; } ;
struct TYPE_2__ {int (* block_write ) (struct snd_sof_dev*,int ,int ,void*,size_t) ;} ;


 TYPE_1__* FUNC_0 (struct snd_sof_dev*) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ,void*,size_t) ;

__attribute__((used)) static inline void FUNC_2(struct snd_sof_dev *VAR_0, u32 VAR_1,
        u32 VAR_2, void *VAR_3, size_t VAR_4)
{
 FUNC_0(VAR_0)->block_write(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
