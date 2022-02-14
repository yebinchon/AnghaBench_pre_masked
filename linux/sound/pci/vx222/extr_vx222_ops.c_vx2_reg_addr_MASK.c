
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;
struct snd_vx222 {unsigned long* port; } ;


 struct snd_vx222* FUNC_0 (struct vx_core*) ;
 size_t* VAR_0 ;
 unsigned long* VAR_1 ;

__attribute__((used)) static inline unsigned long FUNC_1(struct vx_core *VAR_2, int VAR_3)
{
 struct snd_vx222 *VAR_4 = FUNC_0(VAR_2);
 return VAR_4->port[VAR_0[VAR_3]] + VAR_1[VAR_3];
}
