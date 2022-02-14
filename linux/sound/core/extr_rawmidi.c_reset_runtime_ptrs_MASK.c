
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_runtime {int lock; } ;


 int FUNC_0 (struct snd_rawmidi_runtime*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_runtime *VAR_0,
          bool VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_2);
}
