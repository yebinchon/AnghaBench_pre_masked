
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line6_pcm_stream {int dummy; } ;
struct snd_line6_pcm {struct line6_pcm_stream in; struct line6_pcm_stream out; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct line6_pcm_stream *
FUNC_0(struct snd_line6_pcm *VAR_1, int VAR_2)
{
 return (VAR_2 == VAR_0) ?
  &VAR_1->out : &VAR_1->in;
}
