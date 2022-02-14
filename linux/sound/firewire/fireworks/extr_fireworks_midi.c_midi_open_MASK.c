
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_efw {int mutex; int substreams_counter; } ;
struct TYPE_2__ {struct snd_efw* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_efw*) ;
 int FUNC_3 (struct snd_efw*) ;
 int FUNC_4 (struct snd_efw*,int ) ;
 int FUNC_5 (struct snd_efw*) ;

__attribute__((used)) static int FUNC_6(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_efw *VAR_1 = VAR_0->rmidi->private_data;
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  goto end;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = FUNC_4(VAR_1, 0);
 if (VAR_2 >= 0) {
  ++VAR_1->substreams_counter;
  VAR_2 = FUNC_5(VAR_1);
  if (VAR_2 < 0)
   --VAR_1->substreams_counter;
 }
 FUNC_1(&VAR_1->mutex);
 if (VAR_2 < 0)
  FUNC_2(VAR_1);
end:
 return VAR_2;
}
