
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs4231 {TYPE_1__* op; } ;
struct snd_card {struct snd_cs4231* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct snd_cs4231*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (struct snd_card*) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_1)
{
 struct snd_cs4231 *VAR_2 = VAR_1->private_data;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  goto out_err;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0)
  goto out_err;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 < 0)
  goto out_err;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  goto out_err;

 FUNC_0(&VAR_2->op->dev, VAR_2);

 VAR_0++;
 return 0;

out_err:
 FUNC_1(VAR_1);
 return VAR_3;
}
