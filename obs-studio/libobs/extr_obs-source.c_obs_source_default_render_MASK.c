
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_7__ {int (* video_render ) (scalar_t__,int *) ;} ;
struct TYPE_10__ {TYPE_3__ context; TYPE_1__ info; } ;
typedef TYPE_4__ obs_source_t ;
typedef int gs_technique_t ;
typedef int gs_effect_t ;
struct TYPE_8__ {int * default_effect; } ;
struct TYPE_11__ {TYPE_2__ video; } ;


 int * FUNC_0 (int *,char*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_6__* VAR_0 ;
 int FUNC_5 (scalar_t__,int *) ;

void FUNC_6(obs_source_t *VAR_1)
{
 gs_effect_t *VAR_2 = VAR_0->video.default_effect;
 gs_technique_t *VAR_3 = FUNC_0(VAR_2, "Draw");
 size_t VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_2(VAR_3, VAR_5);
  if (VAR_1->context.data)
   VAR_1->info.video_render(VAR_1->context.data, VAR_2);
  FUNC_4(VAR_3);
 }
 FUNC_3(VAR_3);
}
