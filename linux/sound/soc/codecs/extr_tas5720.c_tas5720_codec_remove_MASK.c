
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5720_data {int supplies; int fault_check_work; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 struct tas5720_data* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_0)
{
 struct tas5720_data *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->fault_check_work);

 VAR_2 = FUNC_3(FUNC_0(VAR_1->supplies),
         VAR_1->supplies);
 if (VAR_2 < 0)
  FUNC_2(VAR_0->dev, "failed to disable supplies: %d\n", VAR_2);
}
