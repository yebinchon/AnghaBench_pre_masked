
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ff {scalar_t__ dev_lock_count; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct snd_ff *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->lock);


 if (VAR_1->dev_lock_count < 0) {
  VAR_2 = -VAR_0;
  goto end;
 }


 if (VAR_1->dev_lock_count++ == 0)
  FUNC_0(VAR_1);
 VAR_2 = 0;
end:
 FUNC_2(&VAR_1->lock);
 return VAR_2;
}
