
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int out_port ;
typedef int in_port ;
typedef int hecv_type ;
typedef int bitrate_type ;
typedef int avc ;
struct TYPE_22__ {char const* filename; int width; int height; int fps; int remuxing; int downscale; int segment; int num_in_bufs; int num_out_bufs; scalar_t__* in_buf_headers; int free_in; scalar_t__* out_buf_headers; int handle; int state_cv; int state_lock; int done_out; int * codec_config; int state; void* v_ptr2; void* u_ptr2; void* y_ptr2; int lock; } ;
struct TYPE_16__ {int nFrameWidth; int nFrameHeight; int nSliceHeight; int xFramerate; int nBitrate; int eColorFormat; int eCompressionFormat; int nStride; } ;
struct TYPE_17__ {TYPE_1__ video; } ;
struct TYPE_21__ {int nSize; int nBufferCountActual; int nBufferSize; TYPE_2__ format; void* nPortIndex; int member_0; } ;
struct TYPE_20__ {int nSize; int nPFrames; int eLoopFilterMode; int nAllowedPictureTypes; int eLevel; int eProfile; scalar_t__ nBFrames; void* nPortIndex; int member_0; } ;
struct TYPE_19__ {int nSize; int nTargetBitrate; int eControlRate; void* nPortIndex; int member_0; } ;
struct TYPE_18__ {int nSize; int eLevel; int eProfile; void* nPortIndex; int member_0; } ;
typedef TYPE_3__ OMX_VIDEO_PARAM_HEVCTYPE ;
typedef TYPE_4__ OMX_VIDEO_PARAM_BITRATETYPE ;
typedef TYPE_5__ OMX_VIDEO_PARAM_AVCTYPE ;
typedef void* OMX_U32 ;
typedef int OMX_STRING ;
typedef TYPE_5__* OMX_PTR ;
typedef TYPE_7__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef int OMX_INDEXTYPE ;
typedef int OMX_BUFFERHEADERTYPE ;
typedef TYPE_8__ EncoderState ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__,TYPE_8__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,int ,TYPE_8__*,int *) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,TYPE_5__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 void* FUNC_9 (int,int) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (TYPE_8__*,int ,int) ;
 int FUNC_12 (int *) ;
 int VAR_24 ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,void*) ;
 int FUNC_17 (TYPE_8__*,int ) ;

void FUNC_18(EncoderState *VAR_25, const char* VAR_26, int VAR_27, int VAR_28, int VAR_29, int VAR_30, bool VAR_31, bool VAR_32) {
  int VAR_33;

  FUNC_11(VAR_25, 0, sizeof(*VAR_25));
  VAR_25->filename = VAR_26;
  VAR_25->width = VAR_27;
  VAR_25->height = VAR_28;
  VAR_25->fps = VAR_29;
  FUNC_12(&VAR_25->lock);

  if (!VAR_31) {
    VAR_25->remuxing = 1;
  }

  if (VAR_32) {
    VAR_25->downscale = 1;
    VAR_25->y_ptr2 = FUNC_10(VAR_25->width*VAR_25->height);
    VAR_25->u_ptr2 = FUNC_10(VAR_25->width*VAR_25->height/4);
    VAR_25->v_ptr2 = FUNC_10(VAR_25->width*VAR_25->height/4);
  }

  VAR_25->segment = -1;

  VAR_25->state = VAR_10;

  VAR_25->codec_config = ((void*)0);

  FUNC_15(&VAR_25->free_in);
  FUNC_15(&VAR_25->done_out);

  FUNC_14(&VAR_25->state_lock, ((void*)0));
  FUNC_13(&VAR_25->state_cv, ((void*)0));

  if (VAR_31) {
    VAR_33 = FUNC_2(&VAR_25->handle, (OMX_STRING)"OMX.qcom.video.encoder.hevc",
                        VAR_25, &VAR_24);
  } else {
    VAR_33 = FUNC_2(&VAR_25->handle, (OMX_STRING)"OMX.qcom.video.encoder.avc",
                        VAR_25, &VAR_24);
  }
  FUNC_8(VAR_33 == VAR_3);




  OMX_PARAM_PORTDEFINITIONTYPE VAR_34 = {0};
  VAR_34.nSize = sizeof(VAR_34);
  VAR_34.nPortIndex = (OMX_U32) VAR_21;
  VAR_33 = FUNC_3(VAR_25->handle, VAR_4,
                         (OMX_PTR) &VAR_34);
  FUNC_8(VAR_33 == VAR_3);

  VAR_34.format.video.nFrameWidth = VAR_25->width;
  VAR_34.format.video.nFrameHeight = VAR_25->height;
  VAR_34.format.video.nStride = FUNC_7(VAR_0, VAR_25->width);
  VAR_34.format.video.nSliceHeight = VAR_25->height;

  VAR_34.nBufferSize = FUNC_6(VAR_0, VAR_25->width, VAR_25->height);
  VAR_34.format.video.xFramerate = (VAR_25->fps * 65536);
  VAR_34.format.video.eCompressionFormat = VAR_16;

  VAR_34.format.video.eColorFormat = VAR_23;

  VAR_33 = FUNC_5(VAR_25->handle, VAR_4,
                         (OMX_PTR) &VAR_34);
  FUNC_8(VAR_33 == VAR_3);


  VAR_33 = FUNC_3(VAR_25->handle, VAR_4,
                         (OMX_PTR) &VAR_34);
  FUNC_8(VAR_33 == VAR_3);
  VAR_25->num_in_bufs = VAR_34.nBufferCountActual;






  OMX_PARAM_PORTDEFINITIONTYPE VAR_35 = {0};
  VAR_35.nSize = sizeof(VAR_35);
  VAR_35.nPortIndex = (OMX_U32) VAR_22;
  VAR_33 = FUNC_3(VAR_25->handle, VAR_4,
                         (OMX_PTR)&VAR_35);
  FUNC_8(VAR_33 == VAR_3);
  VAR_35.format.video.nFrameWidth = VAR_25->width;
  VAR_35.format.video.nFrameHeight = VAR_25->height;
  VAR_35.format.video.xFramerate = 0;
  VAR_35.format.video.nBitrate = VAR_30;
  if (VAR_31) {
    VAR_35.format.video.eCompressionFormat = VAR_15;
  } else {
    VAR_35.format.video.eCompressionFormat = VAR_14;
  }
  VAR_35.format.video.eColorFormat = VAR_1;

  VAR_33 = FUNC_5(VAR_25->handle, VAR_4,
                         (OMX_PTR) &VAR_35);
  FUNC_8(VAR_33 == VAR_3);

  VAR_33 = FUNC_3(VAR_25->handle, VAR_4,
                         (OMX_PTR) &VAR_35);
  FUNC_8(VAR_33 == VAR_3);
  VAR_25->num_out_bufs = VAR_35.nBufferCountActual;

  OMX_VIDEO_PARAM_BITRATETYPE VAR_36 = {0};
  VAR_36.nSize = sizeof(VAR_36);
  VAR_36.nPortIndex = (OMX_U32) VAR_22;
  VAR_33 = FUNC_3(VAR_25->handle, VAR_6,
                         (OMX_PTR) &VAR_36);
  FUNC_8(VAR_33 == VAR_3);

  VAR_36.eControlRate = VAR_20;
  VAR_36.nTargetBitrate = VAR_30;

  VAR_33 = FUNC_5(VAR_25->handle, VAR_6,
                         (OMX_PTR) &VAR_36);
  FUNC_8(VAR_33 == VAR_3);

  if (VAR_31) {

    OMX_VIDEO_PARAM_HEVCTYPE VAR_37 = {0};
    VAR_37.nSize = sizeof(VAR_37);
    VAR_37.nPortIndex = (OMX_U32) VAR_22;
    VAR_33 = FUNC_3(VAR_25->handle, (OMX_INDEXTYPE)VAR_7,
                           (OMX_PTR) &VAR_37);
    FUNC_8(VAR_33 == VAR_3);

    VAR_37.eProfile = VAR_18;
    VAR_37.eLevel = VAR_17;

    VAR_33 = FUNC_5(VAR_25->handle, (OMX_INDEXTYPE)VAR_7,
                           (OMX_PTR) &VAR_37);
    FUNC_8(VAR_33 == VAR_3);
  } else {

    OMX_VIDEO_PARAM_AVCTYPE VAR_38 = { 0 };
    VAR_38.nSize = sizeof(VAR_38);
    VAR_38.nPortIndex = (OMX_U32) VAR_22;
    VAR_33 = FUNC_3(VAR_25->handle, VAR_5, &VAR_38);
    FUNC_8(VAR_33 == VAR_3);

    VAR_38.nBFrames = 0;
    VAR_38.nPFrames = 15;

    VAR_38.eProfile = VAR_13;
    VAR_38.eLevel = VAR_11;

    VAR_38.nAllowedPictureTypes |= VAR_19;
    VAR_38.eLoopFilterMode = VAR_12;

    VAR_33 = FUNC_5(VAR_25->handle, VAR_5, &VAR_38);
    FUNC_8(VAR_33 == VAR_3);
  }
  VAR_33 = FUNC_4(VAR_25->handle, VAR_2, VAR_9, ((void*)0));
  FUNC_8(VAR_33 == VAR_3);

  VAR_25->in_buf_headers = FUNC_9(VAR_25->num_in_bufs, sizeof(OMX_BUFFERHEADERTYPE*));
  for (int VAR_39=0; VAR_39<VAR_25->num_in_bufs; VAR_39++) {
    VAR_33 = FUNC_0(VAR_25->handle, &VAR_25->in_buf_headers[VAR_39], VAR_21, VAR_25,
                             VAR_34.nBufferSize);
    FUNC_8(VAR_33 == VAR_3);
  }

  VAR_25->out_buf_headers = FUNC_9(VAR_25->num_out_bufs, sizeof(OMX_BUFFERHEADERTYPE*));
  for (int VAR_40=0; VAR_40<VAR_25->num_out_bufs; VAR_40++) {
    VAR_33 = FUNC_0(VAR_25->handle, &VAR_25->out_buf_headers[VAR_40], VAR_22, VAR_25,
                             VAR_35.nBufferSize);
    FUNC_8(VAR_33 == VAR_3);
  }

  FUNC_17(VAR_25, VAR_9);

  VAR_33 = FUNC_4(VAR_25->handle, VAR_2, VAR_8, ((void*)0));
  FUNC_8(VAR_33 == VAR_3);

  FUNC_17(VAR_25, VAR_8);


  for (int VAR_41 = 0; VAR_41 < VAR_25->num_out_bufs; VAR_41++) {

    VAR_33 = FUNC_1(VAR_25->handle, VAR_25->out_buf_headers[VAR_41]);
    FUNC_8(VAR_33 == VAR_3);
  }


  for (int VAR_42 = 0; VAR_42 < VAR_25->num_in_bufs; VAR_42++) {
    FUNC_16(&VAR_25->free_in, (void*)VAR_25->in_buf_headers[VAR_42]);
  }
}
