
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_prioq {scalar_t__ cells; } ;


 int FUNC_0 (struct snd_seq_prioq*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_seq_prioq*,int *) ;

void FUNC_4(struct snd_seq_prioq **VAR_0)
{
 struct snd_seq_prioq *VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 if (VAR_1 == ((void*)0)) {
  FUNC_1("ALSA: seq: snd_seq_prioq_delete() called with NULL prioq\n");
  return;
 }




 if (VAR_1->cells > 0) {

  while (VAR_1->cells > 0)
   FUNC_2(FUNC_3(VAR_1, ((void*)0)));
 }

 FUNC_0(VAR_1);
}
