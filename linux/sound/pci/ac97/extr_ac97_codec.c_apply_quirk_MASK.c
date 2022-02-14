
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct TYPE_3__ {int (* func ) (struct snd_ac97*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_2, int VAR_3)
{
 if (VAR_3 <= 0)
  return 0;
 else if (VAR_3 >= FUNC_0(VAR_1))
  return -VAR_0;
 if (VAR_1[VAR_3].func)
  return VAR_1[VAR_3].func(VAR_2);
 return 0;
}
