
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct hdsp {int dummy; } ;
struct TYPE_2__ {int stream; } ;


 int VAR_0 ;
 char* FUNC_0 (struct hdsp*,int ,int) ;
 int FUNC_1 (char*,int ,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 struct hdsp* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
          int VAR_2, unsigned long VAR_3,
          unsigned long VAR_4)
{
 struct hdsp *VAR_5 = FUNC_3(VAR_1);
 char *VAR_6;

 VAR_6 = FUNC_0 (VAR_5, VAR_1->pstr->stream, VAR_2);
 if (FUNC_2(!VAR_6))
  return -VAR_0;
 FUNC_1(VAR_6 + VAR_3, 0, VAR_4);
 return 0;
}
