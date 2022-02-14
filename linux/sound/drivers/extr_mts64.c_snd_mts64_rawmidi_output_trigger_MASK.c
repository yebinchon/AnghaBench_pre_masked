
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_rawmidi_substream {scalar_t__ number; TYPE_1__* rmidi; } ;
struct mts64 {int lock; } ;
struct TYPE_2__ {struct mts64* private_data; } ;


 int FUNC_0 (struct mts64*,int ,scalar_t__) ;
 int FUNC_1 (struct snd_rawmidi_substream*,int) ;
 int FUNC_2 (struct snd_rawmidi_substream*,int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_rawmidi_substream *VAR_0,
          int VAR_1)
{
 struct mts64 *VAR_2 = VAR_0->rmidi->private_data;
 u8 VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);
 while (FUNC_2(VAR_0, &VAR_3, 1) == 1) {
  FUNC_0(VAR_2, VAR_3, VAR_0->number+1);
  FUNC_1(VAR_0, 1);
 }
 FUNC_4(&VAR_2->lock, VAR_4);
}
