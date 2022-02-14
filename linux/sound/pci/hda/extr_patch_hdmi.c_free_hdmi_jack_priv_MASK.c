
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack {struct hdmi_pcm* private_data; } ;
struct hdmi_pcm {int * jack; } ;



__attribute__((used)) static void FUNC_0(struct snd_jack *VAR_0)
{
 struct hdmi_pcm *VAR_1 = VAR_0->private_data;

 VAR_1->jack = ((void*)0);
}
