
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel8x0 {int device_type; int pcm_devs; TYPE_1__* ichd; } ;
struct ich_pcm_table {size_t ac97_idx; } ;
struct TYPE_2__ {int pcm; } ;


 int FUNC_0 (struct ich_pcm_table*) ;



 struct ich_pcm_table* VAR_0 ;
 struct ich_pcm_table* VAR_1 ;
 struct ich_pcm_table* VAR_2 ;
 int FUNC_1 (struct intel8x0*,int,struct ich_pcm_table*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct intel8x0 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct ich_pcm_table *VAR_9, *VAR_10;

 switch (VAR_4->device_type) {
 case 129:
  VAR_9 = VAR_1;
  VAR_6 = FUNC_0(VAR_1);
  if (VAR_3)
   VAR_6--;
  break;
 case 128:
  VAR_9 = VAR_2;
  VAR_6 = FUNC_0(VAR_2);
  if (VAR_3)
   VAR_6--;
  break;
 case 130:
  VAR_9 = VAR_0;
  VAR_6 = FUNC_0(VAR_0);
  break;
 default:
  VAR_9 = VAR_1;
  VAR_6 = 2;
  break;
 }

 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_10 = VAR_9 + VAR_5;
  if (VAR_5 > 0 && VAR_10->ac97_idx) {

   if (! VAR_4->ichd[VAR_10->ac97_idx].pcm)
    continue;
  }
  VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_10);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7++;
 }

 VAR_4->pcm_devs = VAR_7;
 return 0;
}
