
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct snd_rawmidi_file {struct snd_rawmidi_substream* output; struct snd_rawmidi_substream* input; struct snd_rawmidi* rmidi; } ;
struct snd_rawmidi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_rawmidi*,int,int ,int,struct snd_rawmidi_substream**) ;
 int FUNC_1 (struct snd_rawmidi*,struct snd_rawmidi_substream*,int ) ;
 int FUNC_2 (struct snd_rawmidi*,struct snd_rawmidi_substream*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_rawmidi *VAR_4, int VAR_5, int VAR_6,
        struct snd_rawmidi_file *VAR_7)
{
 struct snd_rawmidi_substream *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_7->input = VAR_7->output = ((void*)0);
 if (VAR_6 & VAR_0) {
  VAR_10 = FUNC_0(VAR_4, VAR_5,
           VAR_2,
           VAR_6, &VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_6 & VAR_1) {
  VAR_10 = FUNC_0(VAR_4, VAR_5,
           VAR_3,
           VAR_6, &VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
 }

 if (VAR_8) {
  VAR_10 = FUNC_2(VAR_4, VAR_8, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
 }
 if (VAR_9) {
  VAR_10 = FUNC_2(VAR_4, VAR_9, VAR_6);
  if (VAR_10 < 0) {
   if (VAR_8)
    FUNC_1(VAR_4, VAR_8, 0);
   return VAR_10;
  }
 }

 VAR_7->rmidi = VAR_4;
 VAR_7->input = VAR_8;
 VAR_7->output = VAR_9;
 return 0;
}
