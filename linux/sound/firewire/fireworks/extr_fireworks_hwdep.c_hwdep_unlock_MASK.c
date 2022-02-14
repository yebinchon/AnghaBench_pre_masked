
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dev_lock_count; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct snd_efw *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->lock);

 if (VAR_1->dev_lock_count == -1) {
  VAR_1->dev_lock_count = 0;
  VAR_2 = 0;
 } else {
  VAR_2 = -VAR_0;
 }

 FUNC_1(&VAR_1->lock);

 return VAR_2;
}
