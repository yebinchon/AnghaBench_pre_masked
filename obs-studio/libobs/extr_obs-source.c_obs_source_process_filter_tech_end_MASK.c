
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int output_flags; } ;
struct TYPE_12__ {int filter_texrender; int allow_direct; TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;
typedef int gs_texture_t ;
typedef int gs_effect_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*,int ,int ) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *,char const*) ;
 int FUNC_5 (int *,int *,int ,int ,char const*) ;

void FUNC_6(obs_source_t *VAR_0,
     gs_effect_t *VAR_1, uint32_t VAR_2,
     uint32_t VAR_3, const char *VAR_4)
{
 obs_source_t *VAR_5, *VAR_6;
 gs_texture_t *VAR_7;
 uint32_t VAR_8;

 if (!VAR_0)
  return;

 VAR_5 = FUNC_3(VAR_0);
 VAR_6 = FUNC_2(VAR_0);

 if (!VAR_5 || !VAR_6)
  return;

 VAR_8 = VAR_6->info.output_flags;

 const char *VAR_9 = VAR_4 ? VAR_4 : "Draw";

 if (FUNC_0(VAR_5, VAR_6, VAR_8, VAR_0->allow_direct)) {
  FUNC_4(VAR_5, VAR_1, VAR_9);
 } else {
  VAR_7 = FUNC_1(VAR_0->filter_texrender);
  if (VAR_7) {
   FUNC_5(VAR_7, VAR_1, VAR_2, VAR_3, VAR_9);
  }
 }
}
