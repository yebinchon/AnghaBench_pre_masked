
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_jack {struct snd_soc_component* private_data; } ;


 int FUNC_0 (struct snd_soc_component*,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_jack *VAR_0)
{
 struct snd_soc_component *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1, ((void*)0), ((void*)0));
}
