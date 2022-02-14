
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int snd_use_lock_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__,char const*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(snd_use_lock_t *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4 = 5 * VAR_0;

 if (FUNC_0(VAR_1) < 0) {
  FUNC_1("ALSA: seq_lock: lock trouble [counter = %d] in %s:%d\n", FUNC_0(VAR_1), VAR_2, VAR_3);
  return;
 }
 while (FUNC_0(VAR_1) > 0) {
  if (VAR_4-- == 0)
   FUNC_1("ALSA: seq_lock: waiting [%d left] in %s:%d\n", FUNC_0(VAR_1), VAR_2, VAR_3);
  FUNC_2(1);
 }
}
