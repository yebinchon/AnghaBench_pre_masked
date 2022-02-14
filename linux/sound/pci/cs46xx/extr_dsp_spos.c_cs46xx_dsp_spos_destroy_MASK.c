
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_cs46xx {int spos_mutex; struct dsp_spos_instance* dsp_spos_instance; } ;
struct TYPE_5__ {int symbols; } ;
struct TYPE_4__ {struct dsp_spos_instance* data; } ;
struct dsp_spos_instance {int nscb; struct dsp_spos_instance* modules; TYPE_2__ symbol_table; TYPE_1__ code; TYPE_3__* scbs; } ;
struct TYPE_6__ {struct dsp_spos_instance* data; scalar_t__ deleted; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct dsp_spos_instance*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;

void FUNC_6 (struct snd_cs46xx * VAR_0)
{
 int VAR_1;
 struct dsp_spos_instance * VAR_2 = VAR_0->dsp_spos_instance;

 if (FUNC_4(!VAR_2))
  return;

 FUNC_2(&VAR_0->spos_mutex);
 for (VAR_1 = 0; VAR_1 < VAR_2->nscb; ++VAR_1) {
  if (VAR_2->scbs[VAR_1].deleted) continue;

  FUNC_0 ( (VAR_2->scbs + VAR_1) );



 }

 FUNC_1(VAR_2->code.data);
 FUNC_5(VAR_2->symbol_table.symbols);
 FUNC_1(VAR_2->modules);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_0->spos_mutex);
}
