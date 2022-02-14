
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvenc_data {int session; } ;
struct TYPE_5__ {int (* nvEncGetEncodeCaps ) (int ,int ,TYPE_1__*,int*) ;} ;
struct TYPE_4__ {int capsToQuery; int member_0; } ;
typedef TYPE_1__ NV_ENC_CAPS_PARAM ;
typedef int NV_ENC_CAPS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int*) ;

__attribute__((used)) static inline int FUNC_1(struct nvenc_data *VAR_3, NV_ENC_CAPS VAR_4)
{
 if (!VAR_3->session)
  return 0;

 NV_ENC_CAPS_PARAM VAR_5 = {VAR_0};
 int VAR_6;

 VAR_5.capsToQuery = VAR_4;
 VAR_2.nvEncGetEncodeCaps(VAR_3->session, VAR_1, &VAR_5, &VAR_6);
 return VAR_6;
}
