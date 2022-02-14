
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcm_runtime {TYPE_1__* out_urbs; } ;
struct hiface_chip {struct pcm_runtime* pcm; } ;
struct TYPE_2__ {struct pcm_runtime* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcm_runtime*) ;

__attribute__((used)) static void FUNC_1(struct hiface_chip *VAR_1)
{
 struct pcm_runtime *VAR_2 = VAR_1->pcm;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2->out_urbs[VAR_3].buffer);

 FUNC_0(VAR_1->pcm);
 VAR_1->pcm = ((void*)0);
}
