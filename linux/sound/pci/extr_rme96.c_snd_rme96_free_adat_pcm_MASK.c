
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {struct rme96* private_data; } ;
struct rme96 {int * adat_pcm; } ;



__attribute__((used)) static void
FUNC_0(struct snd_pcm *VAR_0)
{
 struct rme96 *VAR_1 = VAR_0->private_data;
 VAR_1->adat_pcm = ((void*)0);
}
