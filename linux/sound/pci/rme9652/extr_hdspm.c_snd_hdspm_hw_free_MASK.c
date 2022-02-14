
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct hdspm {int * capture_buffer; int * playback_buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hdspm*,int,int ) ;
 int FUNC_1 (struct hdspm*,int,int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct hdspm* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 int VAR_3;
 struct hdspm *VAR_4 = FUNC_3(VAR_2);

 if (VAR_2->stream == VAR_1) {


  for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
   FUNC_1(VAR_4, VAR_3, 0);

  VAR_4->playback_buffer = ((void*)0);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
   FUNC_0(VAR_4, VAR_3, 0);

  VAR_4->capture_buffer = ((void*)0);
 }

 FUNC_2(VAR_2);

 return 0;
}
