
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_bus {scalar_t__ remap_addr; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_3__ {int index; unsigned int bufsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 struct hdac_bus* FUNC_1 (struct snd_pcm_substream*) ;
 struct hdac_ext_stream* FUNC_2 (struct snd_pcm_substream*) ;
 TYPE_1__* FUNC_3 (struct hdac_ext_stream*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7
   (struct snd_pcm_substream *VAR_3)
{
 struct hdac_ext_stream *VAR_4 = FUNC_2(VAR_3);
 struct hdac_bus *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6;
 if (VAR_3->stream == VAR_2) {
  VAR_6 = FUNC_4(VAR_5->remap_addr + VAR_0 +
    (VAR_1 *
    FUNC_3(VAR_4)->index));
 } else {
  FUNC_6(20);
  FUNC_4(VAR_5->remap_addr +
    VAR_0 +
    (VAR_1 *
     FUNC_3(VAR_4)->index));
  VAR_6 = FUNC_5(FUNC_3(VAR_4));
 }

 if (VAR_6 >= FUNC_3(VAR_4)->bufsize)
  VAR_6 = 0;

 return FUNC_0(VAR_3->runtime, VAR_6);
}
