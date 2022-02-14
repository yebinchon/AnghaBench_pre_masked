
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pcm_stream {scalar_t__ maxbps; scalar_t__ formats; scalar_t__ rates; scalar_t__ channels_max; scalar_t__ channels_min; scalar_t__ substreams; scalar_t__ nid; } ;
typedef scalar_t__ hda_nid_t ;



__attribute__((used)) static void FUNC_0(struct hda_pcm_stream *VAR_0,
        const struct hda_pcm_stream *VAR_1,
        const struct hda_pcm_stream *VAR_2,
        hda_nid_t VAR_3)
{
 *VAR_0 = *VAR_1;
 if (VAR_3)
  VAR_0->nid = VAR_3;
 if (VAR_2) {
  if (VAR_2->substreams)
   VAR_0->substreams = VAR_2->substreams;
  if (VAR_2->channels_min)
   VAR_0->channels_min = VAR_2->channels_min;
  if (VAR_2->channels_max)
   VAR_0->channels_max = VAR_2->channels_max;
  if (VAR_2->rates)
   VAR_0->rates = VAR_2->rates;
  if (VAR_2->formats)
   VAR_0->formats = VAR_2->formats;
  if (VAR_2->maxbps)
   VAR_0->maxbps = VAR_2->maxbps;
 }
}
