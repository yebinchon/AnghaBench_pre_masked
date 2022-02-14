
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {scalar_t__ scaled_width; int media; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*,char*) ;
 scalar_t__ FUNC_3 (int ) ;

uint32_t FUNC_4(const obs_encoder_t *VAR_2)
{
 if (!FUNC_2(VAR_2, "obs_encoder_get_width"))
  return 0;
 if (VAR_2->info.type != VAR_1) {
  FUNC_0(VAR_0,
       "obs_encoder_get_width: "
       "encoder '%s' is not a video encoder",
       FUNC_1(VAR_2));
  return 0;
 }
 if (!VAR_2->media)
  return 0;

 return VAR_2->scaled_width != 0
         ? VAR_2->scaled_width
         : FUNC_3(VAR_2->media);
}
