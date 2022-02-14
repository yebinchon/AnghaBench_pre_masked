
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct snd_pcsp {int thalf; int val61; int playback_ptr; int fmt_size; scalar_t__ ns_rem; scalar_t__ enable; scalar_t__ is_signed; struct snd_pcm_substream* playback_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned char* dma_area; } ;


 unsigned char FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (unsigned char,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static u64 FUNC_7(struct snd_pcsp *VAR_2)
{
 unsigned char VAR_3, VAR_4;
 u64 VAR_5;
 struct snd_pcm_substream *VAR_6;
 struct snd_pcm_runtime *VAR_7;
 unsigned long VAR_8;

 if (VAR_2->thalf) {
  FUNC_3(VAR_2->val61, 0x61);
  VAR_2->thalf = 0;
  return VAR_2->ns_rem;
 }

 VAR_6 = VAR_2->playback_substream;
 if (!VAR_6)
  return 0;

 VAR_7 = VAR_6->runtime;

 VAR_4 = VAR_7->dma_area[VAR_2->playback_ptr + VAR_2->fmt_size - 1];
 if (VAR_2->is_signed)
  VAR_4 ^= 0x80;
 VAR_3 = VAR_4 * FUNC_0() / 256;

 if (VAR_3 && VAR_2->enable) {
  FUNC_5(&VAR_0, VAR_8);
  if (!VAR_1) {
   FUNC_4(VAR_2->val61, 0x61);
   FUNC_4(VAR_3, 0x42);
   FUNC_3(VAR_2->val61 ^ 1, 0x61);
  } else {
   FUNC_3(VAR_2->val61 ^ 2, 0x61);
   VAR_2->thalf = 1;
  }
  FUNC_6(&VAR_0, VAR_8);
 }

 VAR_2->ns_rem = FUNC_2();
 VAR_5 = (VAR_2->thalf ? FUNC_1(VAR_3) : VAR_2->ns_rem);
 VAR_2->ns_rem -= VAR_5;
 return VAR_5;
}
