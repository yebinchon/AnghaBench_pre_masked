
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {size_t num; struct intel8x0* private_data; } ;
struct intel8x0 {int ** ac97; } ;



__attribute__((used)) static void FUNC_0(struct snd_ac97 *VAR_0)
{
 struct intel8x0 *VAR_1 = VAR_0->private_data;
 VAR_1->ac97[VAR_0->num] = ((void*)0);
}
