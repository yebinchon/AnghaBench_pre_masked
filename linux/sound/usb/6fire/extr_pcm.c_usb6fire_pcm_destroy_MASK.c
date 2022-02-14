
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfire_chip {struct pcm_runtime* pcm; } ;
struct pcm_runtime {int dummy; } ;


 int FUNC_0 (struct pcm_runtime*) ;
 int FUNC_1 (struct pcm_runtime*) ;

void FUNC_2(struct sfire_chip *VAR_0)
{
 struct pcm_runtime *VAR_1 = VAR_0->pcm;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 VAR_0->pcm = ((void*)0);
}
