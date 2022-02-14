
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {scalar_t__ dsp_stop_is_processed; int wait; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_korg1212*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct snd_korg1212 *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_1->lock, VAR_2);
 VAR_1->dsp_stop_is_processed = 0;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_3(VAR_1->wait, VAR_1->dsp_stop_is_processed, (VAR_0 * 3) / 2);
}
