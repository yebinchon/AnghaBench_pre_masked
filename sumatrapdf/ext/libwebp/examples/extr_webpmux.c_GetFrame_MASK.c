
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ const id; int bitstream; } ;
typedef TYPE_2__ WebPMuxFrameInfo ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPMux ;
typedef scalar_t__ WebPChunkId ;
struct TYPE_8__ {int output_; TYPE_1__* args_; } ;
struct TYPE_6__ {int params_; } ;
typedef TYPE_3__ Config ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int,int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int const*,int,TYPE_2__*) ;
 int * FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(const WebPMux* VAR_5, const Config* VAR_6) {
  WebPMuxError VAR_7 = VAR_4;
  WebPMux* VAR_8 = ((void*)0);
  int VAR_9 = 0;
  int VAR_10 = 1;
  int VAR_11 = 0;
  const WebPChunkId VAR_12 = VAR_1;
  WebPMuxFrameInfo VAR_13;
  FUNC_6(&VAR_13.bitstream);

  VAR_9 = FUNC_4(VAR_6->args_[0].params_, 10, &VAR_11);
  if (VAR_9 < 0) {
    FUNC_0("ERROR: Frame/Fragment index must be non-negative.\n", VAR_0);
  }
  if (VAR_11) goto ErrGet;

  VAR_7 = FUNC_8(VAR_5, VAR_9, &VAR_13);
  if (VAR_7 == VAR_4 && VAR_13.id != VAR_12) VAR_7 = VAR_3;
  if (VAR_7 != VAR_4) {
    FUNC_2("ERROR (%s): Could not get frame %d.\n",
                FUNC_3(VAR_7), VAR_9, VAR_0);
  }

  VAR_8 = FUNC_9();
  if (VAR_8 == ((void*)0)) {
    VAR_7 = VAR_2;
    FUNC_1("ERROR (%s): Could not allocate a mux object.\n",
                FUNC_3(VAR_7), VAR_0);
  }
  VAR_7 = FUNC_10(VAR_8, &VAR_13.bitstream, 1);
  if (VAR_7 != VAR_4) {
    FUNC_1("ERROR (%s): Could not create single image mux object.\n",
                FUNC_3(VAR_7), VAR_0);
  }

  VAR_10 = FUNC_11(VAR_8, VAR_6->output_);

 ErrGet:
  FUNC_5(&VAR_13.bitstream);
  FUNC_7(VAR_8);
  return VAR_10 && !VAR_11;
}
