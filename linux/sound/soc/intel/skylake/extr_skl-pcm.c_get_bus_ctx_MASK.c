
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdac_stream {struct hdac_bus* bus; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {int dummy; } ;


 struct hdac_ext_stream* FUNC_0 (struct snd_pcm_substream*) ;
 struct hdac_stream* FUNC_1 (struct hdac_ext_stream*) ;

__attribute__((used)) static struct hdac_bus *FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct hdac_ext_stream *VAR_1 = FUNC_0(VAR_0);
 struct hdac_stream *VAR_2 = FUNC_1(VAR_1);
 struct hdac_bus *VAR_3 = VAR_2->bus;
 return VAR_3;
}
