
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hdsp {int lock; int running; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hdsp*,int) ;
 scalar_t__ FUNC_1 (struct hdsp*) ;
 int FUNC_2 (struct hdsp*) ;
 struct hdsp* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct hdsp *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;

 if (FUNC_1 (VAR_2))
  return -VAR_0;

 if (FUNC_0(VAR_2, 1))
  return -VAR_0;

 FUNC_4(&VAR_2->lock);
 if (!VAR_2->running)
  FUNC_2(VAR_2);
 FUNC_5(&VAR_2->lock);
 return VAR_3;
}
