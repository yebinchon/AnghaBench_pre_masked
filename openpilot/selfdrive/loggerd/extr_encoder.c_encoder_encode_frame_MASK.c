
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {long long timestamp_eof; } ;
typedef TYPE_1__ VIPCBufExtra ;
struct TYPE_15__ {int opening; int rotating; int segment; int next_segment; int counter; int width; int dirty; int closing; int lock; int done_out; int handle; int height; int * v_ptr2; int * u_ptr2; int * y_ptr2; scalar_t__ downscale; int next_path; int free_in; int open; } ;
struct TYPE_14__ {long long nTimeStamp; scalar_t__ nOffset; int nFlags; int nFilledLen; int * pBuffer; } ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_3__ EncoderState ;


 int VAR_0 ;
 int FUNC_0 (int const*,int,int const*,int,int const*,int,int,int,int *,int,int *,int,int *,int,int,int ,int ) ;
 int FUNC_1 (int const*,int,int const*,int,int const*,int,int *,int,int *,int,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int *) ;

int FUNC_15(EncoderState *VAR_4,
                         const uint8_t *VAR_5, const uint8_t *VAR_6, const uint8_t *VAR_7,
                         int VAR_8, int VAR_9,
                         int *VAR_10, VIPCBufExtra *VAR_11) {
  int VAR_12;
  FUNC_11(&VAR_4->lock);

  if (VAR_4->opening) {
    FUNC_9(VAR_4, VAR_4->next_path);
    VAR_4->opening = 0;
  }

  if (!VAR_4->open) {
    FUNC_12(&VAR_4->lock);
    return -1;
  }



  FUNC_12(&VAR_4->lock);
  OMX_BUFFERHEADERTYPE* VAR_13 = FUNC_13(&VAR_4->free_in);
  FUNC_11(&VAR_4->lock);

  if (VAR_4->rotating) {
    FUNC_8(VAR_4);
    FUNC_9(VAR_4, VAR_4->next_path);
    VAR_4->segment = VAR_4->next_segment;
    VAR_4->rotating = 0;
  }

  int VAR_14 = VAR_4->counter;

  uint8_t *VAR_15 = VAR_13->pBuffer;


  uint8_t *VAR_16 = VAR_15;
  int VAR_17 = FUNC_6(VAR_0, VAR_4->width);
  int VAR_18 = FUNC_4(VAR_0, VAR_4->width);

  uint8_t *VAR_19 = VAR_15 + (VAR_17 * FUNC_5(VAR_0, VAR_4->height));

  if (VAR_4->downscale) {
    FUNC_0(VAR_5, VAR_8,
              VAR_6, VAR_8/2,
              VAR_7, VAR_8/2,
              VAR_8, VAR_9,
              VAR_4->y_ptr2, VAR_4->width,
              VAR_4->u_ptr2, VAR_4->width/2,
              VAR_4->v_ptr2, VAR_4->width/2,
              VAR_4->width, VAR_4->height,
              VAR_3);
    VAR_5 = VAR_4->y_ptr2;
    VAR_6 = VAR_4->u_ptr2;
    VAR_7 = VAR_4->v_ptr2;
  }
  VAR_12 = FUNC_1(VAR_5, VAR_4->width,
                   VAR_6, VAR_4->width/2,
                   VAR_7, VAR_4->width/2,
                   VAR_16, VAR_17,
                   VAR_19, VAR_18,
                   VAR_4->width, VAR_4->height);
  FUNC_7(VAR_12 == 0);


  VAR_13->nFilledLen = FUNC_3(VAR_0, VAR_4->width, VAR_4->height);
  VAR_13->nFlags = VAR_1;
  VAR_13->nOffset = 0;
  VAR_13->nTimeStamp = VAR_11->timestamp_eof/1000LL;

  VAR_12 = FUNC_2(VAR_4->handle, VAR_13);
  FUNC_7(VAR_12 == VAR_2);


  while (1) {
    OMX_BUFFERHEADERTYPE *VAR_20 = FUNC_14(&VAR_4->done_out);
    if (!VAR_20) {
      break;
    }
    FUNC_10(VAR_4, VAR_20);
  }

  VAR_4->dirty = 1;

  VAR_4->counter++;

  if (VAR_10) {
    *VAR_10 = VAR_4->segment;
  }

  if (VAR_4->closing) {
    FUNC_8(VAR_4);
    VAR_4->closing = 0;
  }

  FUNC_12(&VAR_4->lock);
  return VAR_14;
}
