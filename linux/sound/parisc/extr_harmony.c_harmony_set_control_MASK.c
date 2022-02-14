
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int format; int stereo; int rate; } ;
struct snd_harmony {int lock; TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_harmony*) ;
 int FUNC_1 (struct snd_harmony*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct snd_harmony *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);

 VAR_3 = (VAR_1 |
  (VAR_2->st.format << 6) |
  (VAR_2->st.stereo << 5) |
  (VAR_2->st.rate));

 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0, VAR_3);

 FUNC_3(&VAR_2->lock, VAR_4);
}
