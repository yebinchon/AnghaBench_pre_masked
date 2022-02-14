
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_19__ {size_t num; TYPE_13__* array; } ;
struct nvenc_data {size_t next_bitstream; TYPE_16__ packet_data; TYPE_16__ input_textures; TYPE_16__ bitstreams; TYPE_16__ textures; int dts_list; struct nvenc_data* sei; struct nvenc_data* header; TYPE_8__* device; TYPE_9__* context; scalar_t__ session; scalar_t__ encode_started; } ;
struct TYPE_28__ {TYPE_3__* lpVtbl; } ;
struct TYPE_27__ {TYPE_4__* lpVtbl; } ;
struct TYPE_26__ {TYPE_1__* lpVtbl; } ;
struct TYPE_25__ {TYPE_2__* lpVtbl; } ;
struct TYPE_24__ {int completionEvent; int encodePicFlags; int member_0; } ;
struct TYPE_23__ {int (* Release ) (TYPE_8__*) ;} ;
struct TYPE_22__ {int (* Release ) (TYPE_9__*) ;} ;
struct TYPE_21__ {int (* Release ) (TYPE_6__*) ;} ;
struct TYPE_20__ {int (* Release ) (TYPE_7__*) ;} ;
struct TYPE_18__ {int (* nvEncDestroyEncoder ) (scalar_t__) ;int (* nvEncEncodePicture ) (scalar_t__,TYPE_5__*) ;} ;
struct TYPE_17__ {TYPE_6__* km; TYPE_7__* tex; int event; } ;
typedef TYPE_5__ NV_ENC_PIC_PARAMS ;
typedef TYPE_6__ IDXGIKeyedMutex ;
typedef TYPE_7__ ID3D11Texture2D ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvenc_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_16__) ;
 int FUNC_3 (struct nvenc_data*,int) ;
 TYPE_15__ VAR_2 ;
 int FUNC_4 (struct nvenc_data*,TYPE_13__*) ;
 int FUNC_5 (struct nvenc_data*,TYPE_13__*) ;
 int FUNC_6 (scalar_t__,TYPE_5__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (TYPE_8__*) ;

__attribute__((used)) static void FUNC_12(void *VAR_3)
{
 struct nvenc_data *VAR_4 = VAR_3;

 if (VAR_4->encode_started) {
  size_t VAR_5 = VAR_4->next_bitstream;
  HANDLE VAR_6 = VAR_4->bitstreams.array[VAR_5].event;

  NV_ENC_PIC_PARAMS VAR_7 = {VAR_1};
  VAR_7.encodePicFlags = VAR_0;
  VAR_7.completionEvent = VAR_6;
  VAR_2.nvEncEncodePicture(VAR_4->session, &VAR_7);
  FUNC_3(VAR_4, 1);
 }
 for (size_t VAR_8 = 0; VAR_8 < VAR_4->textures.num; VAR_8++) {
  FUNC_5(VAR_4, &VAR_4->textures.array[VAR_8]);
 }
 for (size_t VAR_9 = 0; VAR_9 < VAR_4->bitstreams.num; VAR_9++) {
  FUNC_4(VAR_4, &VAR_4->bitstreams.array[VAR_9]);
 }
 if (VAR_4->session) {
  VAR_2.nvEncDestroyEncoder(VAR_4->session);
 }
 for (size_t VAR_10 = 0; VAR_10 < VAR_4->input_textures.num; VAR_10++) {
  ID3D11Texture2D *VAR_11 = VAR_4->input_textures.array[VAR_10].tex;
  IDXGIKeyedMutex *VAR_12 = VAR_4->input_textures.array[VAR_10].km;
  VAR_11->lpVtbl->Release(VAR_11);
  VAR_12->lpVtbl->Release(VAR_12);
 }
 if (VAR_4->context) {
  VAR_4->context->lpVtbl->Release(VAR_4->context);
 }
 if (VAR_4->device) {
  VAR_4->device->lpVtbl->Release(VAR_4->device);
 }

 FUNC_0(VAR_4->header);
 FUNC_0(VAR_4->sei);
 FUNC_1(&VAR_4->dts_list);
 FUNC_2(VAR_4->textures);
 FUNC_2(VAR_4->bitstreams);
 FUNC_2(VAR_4->input_textures);
 FUNC_2(VAR_4->packet_data);
 FUNC_0(VAR_4);
}
