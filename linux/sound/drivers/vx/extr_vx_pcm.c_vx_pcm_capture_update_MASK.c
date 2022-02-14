
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_pipe {int hw_ptr; int align; int transferred; int period_bytes; int running; } ;
struct vx_core {int chip_status; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct vx_core*,struct snd_pcm_runtime*,struct vx_pipe*) ;
 int FUNC_4 (struct vx_core*,struct snd_pcm_runtime*,struct vx_pipe*,int) ;
 int FUNC_5 (struct vx_core*,struct vx_pipe*) ;
 int FUNC_6 (struct vx_core*,int ) ;
 scalar_t__ FUNC_7 (struct vx_core*) ;

__attribute__((used)) static void FUNC_8(struct vx_core *VAR_3, struct snd_pcm_substream *VAR_4,
      struct vx_pipe *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct snd_pcm_runtime *VAR_9 = VAR_4->runtime;

 if (!VAR_5->running || (VAR_3->chip_status & VAR_2))
  return;

 VAR_6 = VAR_9->buffer_size - FUNC_1(VAR_9);
 if (! VAR_6)
  return;
 VAR_6 = FUNC_0(VAR_9, VAR_6);
 VAR_7 = FUNC_5(VAR_3, VAR_5);
 if (VAR_7 < 0)
  goto _error;
 if (VAR_6 > VAR_7)
  VAR_6 = VAR_7;
 VAR_6 = (VAR_6 / 3) * 3;
 if (VAR_6 < VAR_0)
  goto _error;


 VAR_8 = VAR_6 - VAR_0;



 while (VAR_8 > 0) {
  if ((VAR_5->hw_ptr % VAR_5->align) == 0)
   break;
  if (FUNC_7(VAR_3) < 0)
   goto _error;
  FUNC_3(VAR_3, VAR_9, VAR_5);
  VAR_8 -= 3;
 }
 if (VAR_8 > 0) {

  int VAR_10 = VAR_5->align * 3;
  VAR_7 = (VAR_8 / VAR_10) * VAR_10;
  if (VAR_7 > 0) {
   FUNC_4(VAR_3, VAR_9, VAR_5, VAR_7);
   VAR_8 -= VAR_7;
  }
 }

 while (VAR_8 > 0) {
  if (FUNC_7(VAR_3) < 0)
   goto _error;
  FUNC_3(VAR_3, VAR_9, VAR_5);
  VAR_8 -= 3;
 }

 FUNC_6(VAR_3, VAR_1);

 VAR_8 = VAR_0;
 while (VAR_8 > 0) {
  FUNC_3(VAR_3, VAR_9, VAR_5);
  VAR_8 -= 3;
 }

 VAR_5->transferred += VAR_6;
 if (VAR_5->transferred >= VAR_5->period_bytes) {
  VAR_5->transferred %= VAR_5->period_bytes;
  FUNC_2(VAR_4);
 }
 return;

 _error:

 FUNC_6(VAR_3, VAR_1);
 return;
}
