
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct pardevice {int dummy; } ;
struct mts64 {int current_midi_output_port; int current_midi_input_port; struct pardevice* pardev; struct snd_card* card; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mts64* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_2,
       struct pardevice *VAR_3,
       struct mts64 **VAR_4)
{
 struct mts64 *VAR_5;

 *VAR_4 = ((void*)0);

 VAR_5 = FUNC_0(sizeof(struct mts64), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;


 FUNC_1(&VAR_5->lock);
 VAR_5->card = VAR_2;
 VAR_5->pardev = VAR_3;
 VAR_5->current_midi_output_port = -1;
 VAR_5->current_midi_input_port = -1;

 *VAR_4 = VAR_5;

 return 0;
}
