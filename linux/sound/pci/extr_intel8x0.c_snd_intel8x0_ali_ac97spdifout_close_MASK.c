
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct intel8x0 {int reg_lock; TYPE_1__* ichd; } ;
struct TYPE_2__ {int * substream; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (struct intel8x0*,int ) ;
 int FUNC_2 (struct intel8x0*,int ,unsigned int) ;
 struct intel8x0* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3)
{
 struct intel8x0 *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5;

 VAR_4->ichd[VAR_0].substream = ((void*)0);
 FUNC_4(&VAR_4->reg_lock);
 VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_1));
 VAR_5 &= ~VAR_2;
 FUNC_2(VAR_4, FUNC_0(VAR_1), VAR_5);
 FUNC_5(&VAR_4->reg_lock);

 return 0;
}
