
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_rule {int cond; size_t* deps; int var; int (* func ) (struct snd_pcm_hw_params*,struct snd_pcm_hw_rule*) ;} ;
struct snd_pcm_hw_params {int rmask; int flags; int cmask; } ;
struct snd_pcm_hw_constraints {unsigned int rules_num; struct snd_pcm_hw_rule* rules; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_hw_constraints hw_constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int) ;
 struct snd_mask* FUNC_3 (struct snd_pcm_hw_params*,int) ;
 unsigned int* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (unsigned int*) ;
 int FUNC_6 (struct snd_pcm_hw_params*,struct snd_pcm_hw_rule*) ;
 int FUNC_7 (struct snd_pcm_substream*,int,unsigned int,struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct snd_pcm_substream*,int,unsigned int,struct snd_mask*,struct snd_mask*) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_3,
         struct snd_pcm_hw_params *VAR_4)
{
 struct snd_pcm_hw_constraints *VAR_5 =
     &VAR_3->runtime->hw_constraints;
 unsigned int VAR_6;
 unsigned int *VAR_7;
 unsigned int VAR_8[VAR_2 + 1];
 unsigned int VAR_9;
 struct snd_pcm_hw_rule *VAR_10;
 unsigned int VAR_11;
 struct snd_mask VAR_12;
 struct snd_interval VAR_13;
 bool VAR_14;
 int VAR_15, VAR_16 = 0;







 VAR_7 = FUNC_4(VAR_5->rules_num, sizeof(unsigned int), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 for (VAR_6 = 0; VAR_6 <= VAR_2; VAR_6++)
  VAR_8[VAR_6] = (VAR_4->rmask & (1 << VAR_6)) ? 1 : 0;


 VAR_9 = 2;
retry:

 VAR_14 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5->rules_num; VAR_6++) {
  VAR_10 = &VAR_5->rules[VAR_6];







  if (VAR_10->cond && !(VAR_10->cond & VAR_4->flags))
   continue;
  for (VAR_11 = 0; VAR_10->deps[VAR_11] >= 0; VAR_11++) {
   if (VAR_8[VAR_10->deps[VAR_11]] > VAR_7[VAR_6])
    break;
  }
  if (VAR_10->deps[VAR_11] < 0)
   continue;

  if (FUNC_10()) {
   if (FUNC_1(VAR_10->var))
    VAR_12 = *FUNC_3(VAR_4, VAR_10->var);
  }
  if (FUNC_8()) {
   if (FUNC_0(VAR_10->var))
    VAR_13 = *FUNC_2(VAR_4, VAR_10->var);
  }

  VAR_15 = VAR_10->func(VAR_4, VAR_10);
  if (VAR_15 < 0) {
   VAR_16 = VAR_15;
   goto out;
  }






  if (VAR_15 && VAR_10->var >= 0) {
   if (FUNC_1(VAR_10->var)) {
    FUNC_9(VAR_3, VAR_10->var,
     VAR_6 + 1, &VAR_12,
     FUNC_3(VAR_4, VAR_10->var));
   }
   if (FUNC_0(VAR_10->var)) {
    FUNC_7(VAR_3, VAR_10->var,
     VAR_6 + 1, &VAR_13,
     FUNC_2(VAR_4, VAR_10->var));
   }

   VAR_4->cmask |= (1 << VAR_10->var);
   VAR_8[VAR_10->var] = VAR_9;
   VAR_14 = 1;
  }

  VAR_7[VAR_6] = VAR_9++;
 }


 if (VAR_14)
  goto retry;

 out:
 FUNC_5(VAR_7);
 return VAR_16;
}
