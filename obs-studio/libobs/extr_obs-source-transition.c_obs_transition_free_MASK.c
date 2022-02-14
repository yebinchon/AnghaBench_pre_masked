
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * transition_texrender; int transition_tex_mutex; int transition_mutex; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_5__ {int graphics; } ;
struct TYPE_7__ {TYPE_1__ video; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_source_t *VAR_1)
{
 FUNC_3(&VAR_1->transition_mutex);
 FUNC_3(&VAR_1->transition_tex_mutex);

 FUNC_0(VAR_0->video.graphics);
 FUNC_2(VAR_1->transition_texrender[0]);
 FUNC_2(VAR_1->transition_texrender[1]);
 FUNC_1();
}
