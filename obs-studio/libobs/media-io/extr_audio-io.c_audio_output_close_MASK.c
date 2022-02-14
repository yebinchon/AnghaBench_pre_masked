
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num; scalar_t__ array; } ;
struct audio_mix {TYPE_2__ inputs; } ;
struct TYPE_5__ {int stop_event; struct audio_mix* mixes; int thread; scalar_t__ initialized; } ;
typedef TYPE_1__ audio_t ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void**) ;

void FUNC_6(audio_t *VAR_1)
{
 void *VAR_2;

 if (!VAR_1)
  return;

 if (VAR_1->initialized) {
  FUNC_4(VAR_1->stop_event);
  FUNC_5(VAR_1->thread, &VAR_2);
 }

 for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct audio_mix *VAR_4 = &VAR_1->mixes[VAR_3];

  for (size_t VAR_5 = 0; VAR_5 < VAR_4->inputs.num; VAR_5++)
   FUNC_0(VAR_4->inputs.array + VAR_5);

  FUNC_2(VAR_4->inputs);
 }

 FUNC_3(VAR_1->stop_event);
 FUNC_1(VAR_1);
}
