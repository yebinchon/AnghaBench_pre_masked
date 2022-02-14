
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int stream; int number; int list; struct snd_rawmidi_str* pstr; struct snd_rawmidi* rmidi; } ;
struct snd_rawmidi_str {int substream_count; int substreams; } ;
struct snd_rawmidi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_rawmidi_substream* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi *VAR_2,
     struct snd_rawmidi_str *VAR_3,
     int VAR_4,
     int VAR_5)
{
 struct snd_rawmidi_substream *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;
  VAR_6->stream = VAR_4;
  VAR_6->number = VAR_7;
  VAR_6->rmidi = VAR_2;
  VAR_6->pstr = VAR_3;
  FUNC_1(&VAR_6->list, &VAR_3->substreams);
  VAR_3->substream_count++;
 }
 return 0;
}
