
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_constraint_list {int count; scalar_t__ list; } ;
struct davinci_mcasp {int tdm_slots; scalar_t__* tdm_mask; struct snd_pcm_hw_constraint_list* chconstr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct davinci_mcasp *VAR_0, int VAR_1,
           int VAR_2)
{
 struct snd_pcm_hw_constraint_list *VAR_3 = &VAR_0->chconstr[VAR_1];
 unsigned int *VAR_4 = (unsigned int *) VAR_3->list;
 int VAR_5 = VAR_0->tdm_slots;
 int VAR_6, VAR_7 = 0;

 if (VAR_0->tdm_mask[VAR_1])
  VAR_5 = FUNC_0(VAR_0->tdm_mask[VAR_1]);

 for (VAR_6 = 1; VAR_6 <= VAR_5; VAR_6++)
  VAR_4[VAR_7++] = VAR_6;

 for (VAR_6 = 2; VAR_6 <= VAR_2; VAR_6++)
  VAR_4[VAR_7++] = VAR_6*VAR_5;

 VAR_3->count = VAR_7;

 return 0;
}
