
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0m {int device_type; int pcm_devs; TYPE_1__* ichd; } ;
struct ich_pcm_table {size_t ac97_idx; } ;
struct TYPE_2__ {int ac97; } ;


 int FUNC_0 (struct ich_pcm_table*) ;


 struct ich_pcm_table* VAR_0 ;
 struct ich_pcm_table* VAR_1 ;
 struct ich_pcm_table* VAR_2 ;
 int FUNC_1 (struct intel8x0m*,int,struct ich_pcm_table*) ;

__attribute__((used)) static int FUNC_2(struct intel8x0m *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 struct ich_pcm_table *VAR_8, *VAR_9;


 VAR_8 = VAR_1;
 VAR_5 = 1;
 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_9 = VAR_8 + VAR_4;
  if (VAR_4 > 0 && VAR_9->ac97_idx) {

   if (! VAR_3->ichd[VAR_9->ac97_idx].ac97)
    continue;
  }
  VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_9);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_6++;
 }

 VAR_3->pcm_devs = VAR_6;
 return 0;
}
