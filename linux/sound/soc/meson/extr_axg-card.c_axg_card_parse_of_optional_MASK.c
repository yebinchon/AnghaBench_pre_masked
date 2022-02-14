
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_card {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_card *VAR_0,
          const char *VAR_1,
          int (*VAR_2)(struct snd_soc_card *VAR_3,
        const char *VAR_4))
{

 if (!FUNC_0(VAR_0->dev->of_node, VAR_1))
  return 0;


 return VAR_2(VAR_0, VAR_1);
}
