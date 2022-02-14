
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {size_t id; scalar_t__ subseq; scalar_t__ reg; scalar_t__ dapm; } ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,size_t) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
       struct snd_soc_dapm_widget *VAR_4,
       bool VAR_5)
{
 int *VAR_6;

 FUNC_1(FUNC_0(VAR_2) != VAR_0);
 FUNC_1(FUNC_0(VAR_1) != VAR_0);

 if (VAR_5)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 FUNC_2(VAR_6[VAR_3->id] == 0, "offset a->id %d not initialized\n", VAR_3->id);
 FUNC_2(VAR_6[VAR_4->id] == 0, "offset b->id %d not initialized\n", VAR_4->id);

 if (VAR_6[VAR_3->id] != VAR_6[VAR_4->id])
  return VAR_6[VAR_3->id] - VAR_6[VAR_4->id];
 if (VAR_3->subseq != VAR_4->subseq) {
  if (VAR_5)
   return VAR_3->subseq - VAR_4->subseq;
  else
   return VAR_4->subseq - VAR_3->subseq;
 }
 if (VAR_3->reg != VAR_4->reg)
  return VAR_3->reg - VAR_4->reg;
 if (VAR_3->dapm != VAR_4->dapm)
  return (unsigned long)VAR_3->dapm - (unsigned long)VAR_4->dapm;

 return 0;
}
