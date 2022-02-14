
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int pb; } ;
struct TYPE_11__ {int open; int dirty; int lock; int lock_path; int of; TYPE_7__* ofmt_ctx; scalar_t__ remuxing; int done_out; int handle; int free_in; } ;
struct TYPE_10__ {int nFlags; scalar_t__ nTimeStamp; scalar_t__ nOffset; scalar_t__ nFilledLen; } ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ EncoderState ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(EncoderState *VAR_2) {
  int VAR_3;

  FUNC_7(&VAR_2->lock);

  if (VAR_2->open) {
    if (VAR_2->dirty) {


      OMX_BUFFERHEADERTYPE* VAR_4 = FUNC_9(&VAR_2->free_in);
      VAR_4->nFilledLen = 0;
      VAR_4->nOffset = 0;
      VAR_4->nFlags = VAR_0;
      VAR_4->nTimeStamp = 0;

      VAR_3 = FUNC_0(VAR_2->handle, VAR_4);
      FUNC_1(VAR_3 == VAR_1);

      while (1) {
        OMX_BUFFERHEADERTYPE *VAR_5 = FUNC_9(&VAR_2->done_out);

        FUNC_6(VAR_2, VAR_5);

        if (VAR_5->nFlags & VAR_0) {
          break;
        }
      }
      VAR_2->dirty = 0;
    }

    if (VAR_2->remuxing) {
      FUNC_2(VAR_2->ofmt_ctx);
      FUNC_4(&VAR_2->ofmt_ctx->pb);
      FUNC_3(VAR_2->ofmt_ctx);
    } else {
      FUNC_5(VAR_2->of);
    }
    FUNC_10(VAR_2->lock_path);
  }
  VAR_2->open = 0;

  FUNC_8(&VAR_2->lock);
}
