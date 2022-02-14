
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvenc_data {int session; int device; } ;
struct TYPE_5__ {int (* nvEncOpenEncodeSessionEx ) (TYPE_1__*,int *) ;} ;
struct TYPE_4__ {int apiVersion; int deviceType; int device; int member_0; } ;
typedef TYPE_1__ NV_ENC_OPEN_ENCODE_SESSION_EX_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static bool FUNC_2(struct nvenc_data *VAR_4)
{
 NV_ENC_OPEN_ENCODE_SESSION_EX_PARAMS VAR_5 = {
  VAR_2};
 VAR_5.device = VAR_4->device;
 VAR_5.deviceType = VAR_1;
 VAR_5.apiVersion = VAR_0;

 if (FUNC_0(VAR_3.nvEncOpenEncodeSessionEx(&VAR_5, &VAR_4->session))) {
  return 0;
 }
 return 1;
}
