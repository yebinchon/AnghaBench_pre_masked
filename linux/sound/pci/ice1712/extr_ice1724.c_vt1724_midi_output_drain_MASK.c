
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_2__ {struct snd_ice1712* private_data; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct snd_rawmidi_substream*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_4)
{
 struct snd_ice1712 *VAR_5 = VAR_4->rmidi->private_data;
 unsigned long VAR_6;

 FUNC_5(VAR_4, VAR_1, 0);

 VAR_6 = VAR_3 + FUNC_2(15);
 do {
  if (FUNC_1(FUNC_0(VAR_5, VAR_0)) & VAR_2)
   break;
  FUNC_3(1);
 } while (FUNC_4(VAR_6, VAR_3));
}
