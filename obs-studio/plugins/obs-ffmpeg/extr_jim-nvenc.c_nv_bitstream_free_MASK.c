
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvenc_data {int session; } ;
struct nv_bitstream {int event; scalar_t__ ptr; } ;
struct TYPE_5__ {int (* nvEncUnregisterAsyncEvent ) (int ,TYPE_1__*) ;int (* nvEncDestroyBitstreamBuffer ) (int ,scalar_t__) ;} ;
struct TYPE_4__ {int completionEvent; int member_0; } ;
typedef TYPE_1__ NV_ENC_EVENT_PARAMS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct nvenc_data *VAR_2, struct nv_bitstream *VAR_3)
{
 if (VAR_3->ptr) {
  VAR_1.nvEncDestroyBitstreamBuffer(VAR_2->session, VAR_3->ptr);

  NV_ENC_EVENT_PARAMS VAR_4 = {VAR_0};
  VAR_4.completionEvent = VAR_3->event;
  VAR_1.nvEncUnregisterAsyncEvent(VAR_2->session, &VAR_4);
  FUNC_0(VAR_3->event);
 }
}
