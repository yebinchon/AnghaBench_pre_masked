
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_jack {struct hda_jack_tbl* private_data; } ;
struct hda_jack_tbl {int * jack; scalar_t__ nid; } ;



__attribute__((used)) static void FUNC_0(struct snd_jack *VAR_0)
{
 struct hda_jack_tbl *VAR_1 = VAR_0->private_data;
 VAR_1->nid = 0;
 VAR_1->jack = ((void*)0);
}
