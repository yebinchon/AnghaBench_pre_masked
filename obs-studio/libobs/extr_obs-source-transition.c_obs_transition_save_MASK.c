
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* name; } ;
struct TYPE_8__ {int transition_cy; int transition_cx; scalar_t__ transition_scale_type; scalar_t__ transition_mode; int transition_alignment; TYPE_1__ context; struct TYPE_8__** transition_sources; } ;
typedef TYPE_2__ obs_source_t ;
typedef int obs_data_t ;
typedef int int64_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(obs_source_t *VAR_0, obs_data_t *VAR_1)
{
 obs_source_t *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_3(VAR_0) ? VAR_0->transition_sources[1]
          : VAR_0->transition_sources[0];

 FUNC_2(VAR_1, "transition_source_a",
       VAR_2 ? VAR_2->context.name : "");
 FUNC_1(VAR_1, "transition_alignment",
    VAR_0->transition_alignment);
 FUNC_1(VAR_1, "transition_mode", (int64_t)VAR_0->transition_mode);
 FUNC_1(VAR_1, "transition_scale_type",
    (int64_t)VAR_0->transition_scale_type);
 FUNC_1(VAR_1, "transition_cx", VAR_0->transition_cx);
 FUNC_1(VAR_1, "transition_cy", VAR_0->transition_cy);
 FUNC_4(VAR_0);
}
