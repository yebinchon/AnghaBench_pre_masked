
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_bt87x {int opened; int * substream; int reg_lock; int reg_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_bt87x*,int ,int ) ;
 struct snd_bt87x* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct snd_bt87x *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(&VAR_3->reg_lock);
 VAR_3->reg_control |= VAR_0;
 FUNC_2(VAR_3, VAR_1, VAR_3->reg_control);
 FUNC_5(&VAR_3->reg_lock);

 VAR_3->substream = ((void*)0);
 FUNC_0(0, &VAR_3->opened);
 FUNC_1();
 return 0;
}
