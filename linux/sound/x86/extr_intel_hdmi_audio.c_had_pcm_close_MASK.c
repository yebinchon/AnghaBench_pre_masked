
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ substream_refcount; int * substream; } ;
struct snd_intelhad {int dev; int had_spinlock; TYPE_1__ stream_info; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct snd_intelhad* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0)
{
 struct snd_intelhad *VAR_1;

 VAR_1 = FUNC_3(VAR_0);


 FUNC_4(&VAR_1->had_spinlock);
 VAR_1->stream_info.substream = ((void*)0);
 VAR_1->stream_info.substream_refcount--;
 while (VAR_1->stream_info.substream_refcount > 0) {
  FUNC_5(&VAR_1->had_spinlock);
  FUNC_0();
  FUNC_4(&VAR_1->had_spinlock);
 }
 FUNC_5(&VAR_1->had_spinlock);

 FUNC_1(VAR_1->dev);
 FUNC_2(VAR_1->dev);
 return 0;
}
