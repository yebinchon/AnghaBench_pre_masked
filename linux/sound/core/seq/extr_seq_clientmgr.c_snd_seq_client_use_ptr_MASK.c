
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int use_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct snd_seq_client* FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

struct snd_seq_client *FUNC_9(int VAR_9)
{
 unsigned long VAR_10;
 struct snd_seq_client *VAR_11;

 if (VAR_9 < 0 || VAR_9 >= VAR_4) {
  FUNC_2("ALSA: seq: oops. Trying to get pointer to client %d\n",
      VAR_9);
  return ((void*)0);
 }
 FUNC_7(&VAR_5, VAR_10);
 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11)
  goto __lock;
 if (VAR_6[VAR_9]) {
  FUNC_8(&VAR_5, VAR_10);
  return ((void*)0);
 }
 FUNC_8(&VAR_5, VAR_10);
 return ((void*)0);

      __lock:
 FUNC_6(&VAR_11->use_lock);
 FUNC_8(&VAR_5, VAR_10);
 return VAR_11;
}
