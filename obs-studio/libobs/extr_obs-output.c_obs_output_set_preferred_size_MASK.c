
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {scalar_t__ video_encoder; TYPE_1__ info; void* scaled_height; void* scaled_width; } ;
typedef TYPE_2__ obs_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (scalar_t__,void*,void*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;

void FUNC_5(obs_output_t *VAR_3, uint32_t VAR_4,
       uint32_t VAR_5)
{
 if (!FUNC_4(VAR_3, "obs_output_set_preferred_size"))
  return;
 if ((VAR_3->info.flags & VAR_2) == 0)
  return;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_0,
       "output '%s': Cannot set the preferred "
       "resolution while the output is active",
       FUNC_3(VAR_3));
  return;
 }

 VAR_3->scaled_width = VAR_4;
 VAR_3->scaled_height = VAR_5;

 if (VAR_3->info.flags & VAR_1) {
  if (VAR_3->video_encoder)
   FUNC_2(VAR_3->video_encoder,
          VAR_4, VAR_5);
 }
}
