
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_runtime {int sleep; } ;
struct snd_rawmidi_file {TYPE_1__* output; TYPE_1__* input; } ;
struct file {struct snd_rawmidi_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_3__ {struct snd_rawmidi_runtime* runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct snd_rawmidi_file *VAR_6;
 struct snd_rawmidi_runtime *VAR_7;
 __poll_t VAR_8;

 VAR_6 = VAR_4->private_data;
 if (VAR_6->input != ((void*)0)) {
  VAR_7 = VAR_6->input->runtime;
  FUNC_1(VAR_6->input, 1);
  FUNC_0(VAR_4, &VAR_7->sleep, VAR_5);
 }
 if (VAR_6->output != ((void*)0)) {
  VAR_7 = VAR_6->output->runtime;
  FUNC_0(VAR_4, &VAR_7->sleep, VAR_5);
 }
 VAR_8 = 0;
 if (VAR_6->input != ((void*)0)) {
  if (FUNC_2(VAR_6->input))
   VAR_8 |= VAR_0 | VAR_2;
 }
 if (VAR_6->output != ((void*)0)) {
  if (FUNC_2(VAR_6->output))
   VAR_8 |= VAR_1 | VAR_3;
 }
 return VAR_8;
}
