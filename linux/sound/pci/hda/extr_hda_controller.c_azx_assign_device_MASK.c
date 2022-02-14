
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdac_stream {int dummy; } ;
struct azx_dev {int dummy; } ;
struct azx {int dummy; } ;


 int FUNC_0 (struct azx*) ;
 struct hdac_stream* FUNC_1 (int ,struct snd_pcm_substream*) ;
 struct azx_dev* FUNC_2 (struct hdac_stream*) ;

__attribute__((used)) static inline struct azx_dev *
FUNC_3(struct azx *VAR_0, struct snd_pcm_substream *VAR_1)
{
 struct hdac_stream *VAR_2;

 VAR_2 = FUNC_1(FUNC_0(VAR_0), VAR_1);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_2(VAR_2);
}
