
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct completion* release_completion; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct completion*) ;

int FUNC_3(struct snd_card *VAR_0)
{
 struct completion VAR_1;
 int VAR_2;

 FUNC_0(&VAR_1);
 VAR_0->release_completion = &VAR_1;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_2(&VAR_1);
 return 0;
}
