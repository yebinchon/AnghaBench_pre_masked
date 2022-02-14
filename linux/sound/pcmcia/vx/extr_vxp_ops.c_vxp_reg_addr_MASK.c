
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vxpocket {unsigned long port; } ;


 struct snd_vxpocket* FUNC_0 (struct vx_core*) ;
 unsigned long* VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_1(struct vx_core *VAR_1, int VAR_2)
{
 struct snd_vxpocket *VAR_3 = FUNC_0(VAR_1);
 return VAR_3->port + VAR_0[VAR_2];
}
