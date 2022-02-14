
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; } ;
struct q6afe_port {int dummy; } ;
struct q6afe_dai_data {struct q6afe_port** port; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct q6afe_port*) ;
 int FUNC_1 (int ,char*) ;
 struct q6afe_dai_data* FUNC_2 (int ) ;
 struct q6afe_port* FUNC_3 (int ,size_t) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_1)
{
 struct q6afe_dai_data *VAR_2 = FUNC_2(VAR_1->dev);
 struct q6afe_port *VAR_3;

 VAR_3 = FUNC_3(VAR_1->dev, VAR_1->id);
 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_1->dev, "Unable to get afe port\n");
  return -VAR_0;
 }
 VAR_2->port[VAR_1->id] = VAR_3;

 return 0;
}
