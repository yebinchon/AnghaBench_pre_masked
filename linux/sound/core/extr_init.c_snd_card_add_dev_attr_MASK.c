
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dev; struct attribute_group const** dev_groups; } ;
struct attribute_group {int dummy; } ;


 int FUNC_0 (struct attribute_group const**) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct snd_card *VAR_1,
     const struct attribute_group *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->dev_groups) - 1; VAR_3++) {
  if (!VAR_1->dev_groups[VAR_3]) {
   VAR_1->dev_groups[VAR_3] = VAR_2;
   return 0;
  }
 }

 FUNC_1(VAR_1->dev, "Too many groups assigned\n");
 return -VAR_0;
}
