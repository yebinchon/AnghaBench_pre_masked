
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ size; } ;
struct TYPE_15__ {scalar_t__ id; TYPE_2__ bitstream; } ;
typedef TYPE_1__ WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPMux ;
typedef TYPE_2__ WebPData ;
struct TYPE_17__ {int out_frame_count_; } ;
typedef TYPE_3__ WebPAnimEncoder ;


 int FUNC_0 (TYPE_3__* const,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int * const,TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__* const,int ) ;
 int FUNC_5 (int * const) ;
 scalar_t__ FUNC_6 (int * const,int*,int*) ;
 scalar_t__ FUNC_7 (int * const,int,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int * const,TYPE_2__*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static WebPMuxError FUNC_10(WebPAnimEncoder* const VAR_3,
                                        WebPData* const VAR_4) {
  WebPMuxError VAR_5 = VAR_2;
  int VAR_6, VAR_7;
  WebPMuxFrameInfo VAR_8;
  WebPData VAR_9;
  WebPData VAR_10;
  WebPMux* const VAR_11 = FUNC_4(VAR_4, 0);
  if (VAR_11 == ((void*)0)) return VAR_1;
  FUNC_9(VAR_3->out_frame_count_ == 1);
  FUNC_2(&VAR_8.bitstream);
  FUNC_2(&VAR_9);
  FUNC_2(&VAR_10);

  VAR_5 = FUNC_7(VAR_11, 1, &VAR_8);
  if (VAR_5 != VAR_2) goto End;
  if (VAR_8.id != VAR_0) goto End;
  VAR_5 = FUNC_6(VAR_11, &VAR_6, &VAR_7);
  if (VAR_5 != VAR_2) goto End;
  if (!FUNC_0(VAR_3, &VAR_8, &VAR_9)) {
    VAR_5 = VAR_1;
    goto End;
  }
  VAR_5 = FUNC_8(VAR_11, &VAR_9, 1);
  if (VAR_5 != VAR_2) goto End;
  VAR_5 = FUNC_3(VAR_11, &VAR_10);
  if (VAR_5 != VAR_2) goto End;

  if (VAR_10 < VAR_4->size) {
    FUNC_1(VAR_4);
    *VAR_4 = VAR_10;
    FUNC_2(&VAR_10);
  }

 End:
  FUNC_1(&VAR_8.bitstream);
  FUNC_1(&VAR_9);
  FUNC_5(VAR_11);
  FUNC_1(&VAR_10);
  return VAR_5;
}
