
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;
struct TYPE_2__ {scalar_t__ format_val; scalar_t__ period_bytes; scalar_t__ bufsize; } ;


 struct hdac_ext_stream* FUNC_0 (struct snd_pcm_substream*) ;
 TYPE_1__* FUNC_1 (struct hdac_ext_stream*) ;
 int FUNC_2 (struct snd_pcm_substream*,size_t) ;

__attribute__((used)) static int FUNC_3(struct hdac_bus *VAR_0,
     struct snd_pcm_substream *VAR_1,
     size_t VAR_2)
{
 struct hdac_ext_stream *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3)->bufsize = 0;
 FUNC_1(VAR_3)->period_bytes = 0;
 FUNC_1(VAR_3)->format_val = 0;

 return FUNC_2(VAR_1, VAR_2);
}
