
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct mts64 {scalar_t__ open_count; } ;
struct TYPE_2__ {struct mts64* private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mts64*) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi_substream *VAR_0)
{
 struct mts64 *VAR_1 = VAR_0->rmidi->private_data;

 if (VAR_1->open_count == 0) {



  FUNC_1(VAR_1);

  FUNC_0(50);
 }
 ++(VAR_1->open_count);

 return 0;
}
