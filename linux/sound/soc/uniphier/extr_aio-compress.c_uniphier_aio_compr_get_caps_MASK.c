
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {int dummy; } ;
struct snd_compr_caps {int num_codecs; int * codecs; int max_fragments; int min_fragments; int max_fragment_size; int min_fragment_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_compr_stream *VAR_5,
           struct snd_compr_caps *VAR_6)
{
 VAR_6->num_codecs = 1;
 VAR_6->min_fragment_size = VAR_3;
 VAR_6->max_fragment_size = VAR_1;
 VAR_6->min_fragments = VAR_2;
 VAR_6->max_fragments = VAR_0;
 VAR_6->codecs[0] = VAR_4;

 return 0;
}
