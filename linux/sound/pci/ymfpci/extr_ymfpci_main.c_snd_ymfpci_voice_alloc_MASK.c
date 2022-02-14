
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_voice {int dummy; } ;
struct snd_ymfpci {int voice_lock; } ;
typedef enum snd_ymfpci_voice_type { ____Placeholder_snd_ymfpci_voice_type } snd_ymfpci_voice_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_ymfpci*,int,int,struct snd_ymfpci_voice**) ;

__attribute__((used)) static int FUNC_4(struct snd_ymfpci *VAR_2,
      enum snd_ymfpci_voice_type VAR_3, int VAR_4,
      struct snd_ymfpci_voice **VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_5))
  return -VAR_0;
 if (FUNC_0(VAR_4 && VAR_3 != VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_2->voice_lock, VAR_6);
 for (;;) {
  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_7 == 0 || VAR_3 != VAR_1)
   break;

  break;
 }
 FUNC_2(&VAR_2->voice_lock, VAR_6);
 return VAR_7;
}
