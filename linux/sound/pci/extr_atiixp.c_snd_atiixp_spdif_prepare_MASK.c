
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp {int reg_lock; scalar_t__ spdif_over_aclink; } ;
struct TYPE_2__ {scalar_t__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_1 (struct atiixp*,int ) ;
 int FUNC_2 (struct atiixp*,int ,int ,int ) ;
 int FUNC_3 (struct atiixp*,int ,unsigned int) ;
 struct atiixp* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_9)
{
 struct atiixp *VAR_10 = FUNC_4(VAR_9);

 FUNC_5(&VAR_10->reg_lock);
 if (VAR_10->spdif_over_aclink) {
  unsigned int VAR_11;

  FUNC_2(VAR_10, VAR_6, VAR_3,
         VAR_2);
  VAR_11 = FUNC_1(VAR_10, VAR_7) & ~VAR_4;
  VAR_11 |= FUNC_0(10) |
   FUNC_0(11);
  VAR_11 |= 0x04 << VAR_5;
  FUNC_3(VAR_10, VAR_7, VAR_11);
  FUNC_2(VAR_10, VAR_6, VAR_0,
         VAR_9->runtime->format == VAR_8 ?
         VAR_0 : 0);
 } else {
  FUNC_2(VAR_10, VAR_6, VAR_3, 0);
  FUNC_2(VAR_10, VAR_6, VAR_1, 0);
 }
 FUNC_6(&VAR_10->reg_lock);
 return 0;
}
