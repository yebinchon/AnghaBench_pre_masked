
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {scalar_t__ scaled_height; int video; int video_encoder; TYPE_1__ info; } ;
typedef TYPE_2__ obs_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const*,char*) ;
 scalar_t__ FUNC_2 (int ) ;

uint32_t FUNC_3(const obs_output_t *VAR_2)
{
 if (!FUNC_1(VAR_2, "obs_output_get_height"))
  return 0;
 if ((VAR_2->info.flags & VAR_1) == 0)
  return 0;

 if (VAR_2->info.flags & VAR_0)
  return FUNC_0(VAR_2->video_encoder);
 else
  return VAR_2->scaled_height != 0
          ? VAR_2->scaled_height
          : FUNC_2(VAR_2->video);
}
