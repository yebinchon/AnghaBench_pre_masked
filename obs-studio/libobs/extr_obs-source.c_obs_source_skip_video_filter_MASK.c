
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_15__ {int output_flags; scalar_t__ video_render; } ;
struct TYPE_16__ {TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(obs_source_t *VAR_2)
{
 obs_source_t *VAR_3, *VAR_4;
 bool VAR_5, VAR_6;
 uint32_t VAR_7;

 if (!FUNC_4(VAR_2, "obs_source_skip_video_filter"))
  return;

 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = FUNC_2(VAR_2);
 VAR_7 = VAR_4->info.output_flags;
 VAR_5 = (VAR_7 & VAR_1) != 0;
 VAR_6 = (VAR_7 & VAR_0) != 0;

 if (VAR_3 == VAR_4) {
  if (!VAR_5 && !VAR_6)
   FUNC_5(VAR_3);
  else if (VAR_3->info.video_render)
   FUNC_6(VAR_3);
  else if (FUNC_1(VAR_3))
   FUNC_0(VAR_3);
  else
   FUNC_7(VAR_3);

 } else {
  FUNC_8(VAR_3);
 }
}
