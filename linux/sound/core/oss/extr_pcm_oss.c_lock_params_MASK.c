
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int params_lock; int rw_ref; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_runtime *VAR_2)
{
 if (FUNC_1(&VAR_2->oss.params_lock))
  return -VAR_1;
 if (FUNC_0(&VAR_2->oss.rw_ref)) {
  FUNC_2(&VAR_2->oss.params_lock);
  return -VAR_0;
 }
 return 0;
}
