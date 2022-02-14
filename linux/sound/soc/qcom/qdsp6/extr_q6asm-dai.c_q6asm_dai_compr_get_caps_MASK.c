
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_compr_stream {int dummy; } ;
struct snd_compr_caps {int num_codecs; int * codecs; int max_fragments; int min_fragments; int max_fragment_size; int min_fragment_size; int direction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct snd_compr_stream *VAR_6,
        struct snd_compr_caps *VAR_7)
{
 VAR_7->direction = VAR_5;
 VAR_7->min_fragment_size = VAR_2;
 VAR_7->max_fragment_size = VAR_0;
 VAR_7->min_fragments = VAR_3;
 VAR_7->max_fragments = VAR_1;
 VAR_7->num_codecs = 1;
 VAR_7->codecs[0] = VAR_4;

 return 0;
}
