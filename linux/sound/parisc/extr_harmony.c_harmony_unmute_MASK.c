
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gain; } ;
struct snd_harmony {int mixer_lock; TYPE_1__ st; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_harmony*) ;
 int FUNC_1 (struct snd_harmony*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct snd_harmony *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->mixer_lock, VAR_2);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_0, VAR_1->st.gain);
 FUNC_3(&VAR_1->mixer_lock, VAR_2);
}
