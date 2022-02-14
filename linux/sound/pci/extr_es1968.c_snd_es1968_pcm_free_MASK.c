
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {struct es1968* private_data; } ;
struct es1968 {int * pcm; } ;


 int FUNC_0 (struct es1968*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_0)
{
 struct es1968 *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_1);
 VAR_1->pcm = ((void*)0);
}
