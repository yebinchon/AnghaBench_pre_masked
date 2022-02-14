
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {void* scaled_height; void* scaled_width; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

void FUNC_4(obs_encoder_t *VAR_2, uint32_t VAR_3,
     uint32_t VAR_4)
{
 if (!FUNC_3(VAR_2, "obs_encoder_set_scaled_size"))
  return;
 if (VAR_2->info.type != VAR_1) {
  FUNC_0(VAR_0,
       "obs_encoder_set_scaled_size: "
       "encoder '%s' is not a video encoder",
       FUNC_2(VAR_2));
  return;
 }
 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_0,
       "encoder '%s': Cannot set the scaled "
       "resolution while the encoder is active",
       FUNC_2(VAR_2));
  return;
 }

 VAR_2->scaled_width = VAR_3;
 VAR_2->scaled_height = VAR_4;
}
