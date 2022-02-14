
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_file {struct snd_rawmidi* rmidi; int * output; int * input; } ;
struct snd_rawmidi {int open_wait; int open_mutex; } ;


 int FUNC_0 (struct snd_rawmidi*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_file *VAR_0)
{
 struct snd_rawmidi *VAR_1;

 VAR_1 = VAR_0->rmidi;
 FUNC_1(&VAR_1->open_mutex);
 if (VAR_0->input) {
  FUNC_0(VAR_1, VAR_0->input, 1);
  VAR_0->input = ((void*)0);
 }
 if (VAR_0->output) {
  FUNC_0(VAR_1, VAR_0->output, 1);
  VAR_0->output = ((void*)0);
 }
 VAR_0->rmidi = ((void*)0);
 FUNC_2(&VAR_1->open_mutex);
 FUNC_3(&VAR_1->open_wait);
}
