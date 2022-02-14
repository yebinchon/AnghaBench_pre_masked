
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {unsigned int min; unsigned int max; int integer; scalar_t__ openmax; scalar_t__ openmin; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int ,struct snd_interval*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_hw_params *VAR_3,
           struct snd_pcm_hw_rule *VAR_4)
{
 struct snd_interval VAR_5;
 unsigned int VAR_6;
 VAR_5.min = VAR_2;
 VAR_5.max = 0;
 VAR_5.openmin = 0;
 VAR_5.openmax = 0;
 for (VAR_6 = 0; VAR_6 <= VAR_0; ++VAR_6) {
  int VAR_7;
  if (! FUNC_3(FUNC_1(VAR_3, VAR_1), VAR_6))
   continue;
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 <= 0)
   continue;
  if (VAR_5.min > (unsigned)VAR_7)
   VAR_5.min = VAR_7;
  if (VAR_5.max < (unsigned)VAR_7)
   VAR_5.max = VAR_7;
 }
 VAR_5.integer = 1;
 return FUNC_2(FUNC_0(VAR_3, VAR_4->var), &VAR_5);
}
