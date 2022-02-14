
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int averageBitRate; int maxBitRate; } ;
struct TYPE_7__ {TYPE_1__ rcParams; } ;
struct nvenc_data {int session; int params; TYPE_2__ config; scalar_t__ can_change_bitrate; } ;
typedef int obs_data_t ;
struct TYPE_9__ {int (* nvEncReconfigureEncoder ) (int ,TYPE_3__*) ;} ;
struct TYPE_8__ {int resetEncoder; int forceIDR; int reInitEncodeParams; int version; int member_0; } ;
typedef TYPE_3__ NV_ENC_RECONFIGURE_PARAMS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_2, obs_data_t *VAR_3)
{
 struct nvenc_data *VAR_4 = VAR_2;


 if (VAR_4->can_change_bitrate) {
  int VAR_5 = (int)FUNC_1(VAR_3, "bitrate");

  VAR_4->config.rcParams.averageBitRate = VAR_5 * 1000;
  VAR_4->config.rcParams.maxBitRate = VAR_5 * 1000;

  NV_ENC_RECONFIGURE_PARAMS VAR_6 = {0};
  VAR_6.version = VAR_0;
  VAR_6.reInitEncodeParams = VAR_4->params;
  VAR_6.resetEncoder = 1;
  VAR_6.forceIDR = 1;

  if (FUNC_0(VAR_1.nvEncReconfigureEncoder(VAR_4->session,
        &VAR_6))) {
   return 0;
  }
 }

 return 1;
}
