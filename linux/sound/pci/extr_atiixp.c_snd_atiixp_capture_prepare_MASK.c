
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp {int reg_lock; } ;
struct TYPE_2__ {scalar_t__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct atiixp*,int ,int ,int ) ;
 struct atiixp* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct atiixp *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_4->reg_lock);
 FUNC_0(VAR_4, VAR_1, VAR_0,
        VAR_3->runtime->format == VAR_2 ?
        VAR_0 : 0);
 FUNC_3(&VAR_4->reg_lock);
 return 0;
}
