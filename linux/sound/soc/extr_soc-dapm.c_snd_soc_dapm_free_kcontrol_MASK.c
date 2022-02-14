
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dev; } ;


 int FUNC_0 (int ,char const**) ;

__attribute__((used)) static void
FUNC_1(struct snd_soc_card *VAR_0,
   unsigned long *VAR_1,
   int VAR_2,
   const char **VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0->dev, (void *)*VAR_1);

 if (!VAR_3)
  return;

 for (VAR_4 = 0 ; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0->dev, (void *)VAR_3[VAR_4]);
 FUNC_0(VAR_0->dev, VAR_3);
}
