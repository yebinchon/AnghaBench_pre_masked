
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_20__ {scalar_t__ bytes; } ;
struct TYPE_18__ {int duration; TYPE_4__ bitstream; int id; } ;
typedef TYPE_2__ WebPMuxFrameInfo ;
typedef int WebPMuxError ;
struct TYPE_19__ {int member_0; int loop_count; int bgcolor; int member_1; } ;
typedef TYPE_3__ WebPMuxAnimParams ;
typedef int WebPMux ;
typedef TYPE_4__ WebPData ;
struct TYPE_21__ {int action_type_; size_t type_; int arg_count_; int input_; int output_; TYPE_1__* args_; } ;
struct TYPE_17__ {int params_; int filename_; int subtype_; } ;
typedef TYPE_5__ Config ;







 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int ,int,int,int*) ;
 int FUNC_9 (int ,TYPE_4__*) ;




 int FUNC_10 (int *,TYPE_5__ const*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,TYPE_2__*) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int*) ;
 scalar_t__ FUNC_15 (size_t) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ,TYPE_4__*) ;
 int FUNC_19 (int *,int,TYPE_2__*) ;
 int * FUNC_20 () ;
 int FUNC_21 (int *,int ,int*) ;
 int FUNC_22 (int *,TYPE_2__*,int) ;
 int FUNC_23 (int *,TYPE_3__*) ;
 int FUNC_24 (int *,int ,TYPE_4__*,int) ;
 int FUNC_25 (int ,TYPE_4__*) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (void*) ;
 int* VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_30(const Config* VAR_8) {
  WebPMux* VAR_9 = ((void*)0);
  WebPData VAR_10;
  WebPMuxError VAR_11 = VAR_4;
  int VAR_12 = 1;

  switch (VAR_8->action_type_) {
    case 138: {
      VAR_12 = FUNC_0(VAR_8->input_, &VAR_9);
      if (!VAR_12) goto Err2;
      switch (VAR_8->type_) {
        case 134:
          VAR_12 = FUNC_10(VAR_9, VAR_8);
          break;

        case 132:
        case 133:
        case 131:
          VAR_11 = FUNC_18(VAR_9, VAR_6[VAR_8->type_], &VAR_10);
          if (VAR_11 != VAR_4) {
            FUNC_5("ERROR (%s): Could not get the %s.\n",
                        FUNC_6(VAR_11), VAR_5[VAR_8->type_], VAR_0);
          }
          VAR_12 = FUNC_25(VAR_8->output_, &VAR_10);
          break;

        default:
          FUNC_3("ERROR: Invalid feature for action 'get'.\n", VAR_0);
          break;
      }
      break;
    }
    case 136: {
      switch (VAR_8->type_) {
        case 134: {
          int VAR_13;
          WebPMuxAnimParams VAR_14 = { 0xFFFFFFFF, 0 };
          VAR_9 = FUNC_20();
          if (VAR_9 == ((void*)0)) {
            FUNC_4("ERROR (%s): Could not allocate a mux object.\n",
                        FUNC_6(VAR_3), VAR_0);
          }
          for (VAR_13 = 0; VAR_13 < VAR_8->arg_count_; ++VAR_13) {
            switch (VAR_8->args_[VAR_13].subtype_) {
              case 129: {
                uint32_t VAR_15;
                VAR_12 = FUNC_11(VAR_8->args_[VAR_13].params_, &VAR_15);
                if (!VAR_12) {
                  FUNC_3("ERROR: Could not parse the background color \n",
                              VAR_0);
                }
                VAR_14.bgcolor = VAR_15;
                break;
              }
              case 128: {
                int VAR_16 = 0;
                const int VAR_17 =
                    FUNC_7(VAR_8->args_[VAR_13].params_, 10, &VAR_16);
                if (VAR_17 < 0 || VAR_17 > 65535) {



                  FUNC_3("ERROR: Loop count must be in the range 0 to "
                              "65535.\n", VAR_0);
                }
                VAR_12 = !VAR_16;
                if (!VAR_12) goto Err2;
                VAR_14.loop_count = VAR_17;
                break;
              }
              case 130: {
                WebPMuxFrameInfo VAR_18;
                VAR_18.id = VAR_2;
                VAR_12 = FUNC_9(VAR_8->args_[VAR_13].filename_,
                                              &VAR_18.bitstream);
                if (!VAR_12) goto Err2;
                VAR_12 = FUNC_12(VAR_8->args_[VAR_13].params_, &VAR_18);
                if (!VAR_12) {
                  FUNC_13(&VAR_18.bitstream);
                  FUNC_3("ERROR: Could not parse frame properties.\n",
                              VAR_0);
                }
                VAR_11 = FUNC_22(VAR_9, &VAR_18, 1);
                FUNC_13(&VAR_18.bitstream);
                if (VAR_11 != VAR_4) {
                  FUNC_5("ERROR (%s): Could not add a frame at index %d."
                              "\n", FUNC_6(VAR_11), VAR_13, VAR_0);
                }
                break;
              }
              default: {
                FUNC_3("ERROR: Invalid subtype for 'frame'", VAR_0);
                break;
              }
            }
          }
          VAR_11 = FUNC_23(VAR_9, &VAR_14);
          if (VAR_11 != VAR_4) {
            FUNC_4("ERROR (%s): Could not set animation parameters.\n",
                        FUNC_6(VAR_11), VAR_0);
          }
          break;
        }

        case 132:
        case 133:
        case 131: {
          VAR_12 = FUNC_0(VAR_8->input_, &VAR_9);
          if (!VAR_12) goto Err2;
          VAR_12 = FUNC_9(VAR_8->args_[0].filename_, &VAR_10);
          if (!VAR_12) goto Err2;
          VAR_11 = FUNC_24(VAR_9, VAR_6[VAR_8->type_], &VAR_10, 1);
          FUNC_29((void*)VAR_10.bytes);
          if (VAR_11 != VAR_4) {
            FUNC_5("ERROR (%s): Could not set the %s.\n",
                        FUNC_6(VAR_11), VAR_5[VAR_8->type_], VAR_0);
          }
          break;
        }
        default: {
          FUNC_3("ERROR: Invalid feature for action 'set'.\n", VAR_0);
          break;
        }
      }
      VAR_12 = FUNC_26(VAR_9, VAR_8->output_);
      break;
    }
    case 139: {
      int VAR_19;
      VAR_12 = FUNC_0(VAR_8->input_, &VAR_9);
      if (!VAR_12) goto Err2;
      VAR_11 = FUNC_21(VAR_9, VAR_2, &VAR_19);
      VAR_12 = (VAR_11 == VAR_4);
      if (!VAR_12) {
        FUNC_3("ERROR: can not parse the number of frames.\n", VAR_0);
      }
      if (VAR_19 == 0) {
        FUNC_28(VAR_7, "Doesn't look like the source is animated. "
                        "Skipping duration setting.\n");
        VAR_12 = FUNC_26(VAR_9, VAR_8->output_);
        if (!VAR_12) goto Err2;
      } else {
        int VAR_20;
        int* VAR_21 = ((void*)0);
        WebPMux* VAR_22 = FUNC_2(VAR_9);
        if (VAR_22 == ((void*)0)) goto Err2;
        VAR_21 = (int*)FUNC_15((size_t)VAR_19 * sizeof(*VAR_21));
        if (VAR_21 == ((void*)0)) goto Err2;
        for (VAR_20 = 0; VAR_20 < VAR_19; ++VAR_20) VAR_21[VAR_20] = -1;


        for (VAR_20 = 0; VAR_20 < VAR_8->arg_count_; ++VAR_20) {
          int VAR_23;
          int VAR_24[3];
          int VAR_25, VAR_26, VAR_27;
          const int VAR_28 = FUNC_8(VAR_8->args_[VAR_20].params_,
                                            10, 3, VAR_24);
          VAR_12 = (VAR_28 >= 1);
          if (!VAR_12) goto Err3;
          VAR_25 = VAR_24[0];
          if (VAR_25 < 0) {
            FUNC_3("ERROR: duration must be strictly positive.\n", VAR_1);
          }

          if (VAR_28 == 1) {
            VAR_26 = 1;
            VAR_27 = VAR_19;
          } else {
            VAR_26 = VAR_24[1];
            if (VAR_26 <= 0) {
              VAR_26 = 1;
            } else if (VAR_26 > VAR_19) {
              VAR_26 = VAR_19;
            }
            VAR_27 = (VAR_28 >= 3) ? VAR_24[2] : VAR_26;
            if (VAR_27 == 0 || VAR_27 > VAR_19) VAR_27 = VAR_19;
          }

          for (VAR_23 = VAR_26; VAR_23 <= VAR_27; ++VAR_23) {
            FUNC_27(VAR_23 >= 1 && VAR_23 <= VAR_19);
            VAR_21[VAR_23 - 1] = VAR_25;
          }
        }


        for (VAR_20 = 1; VAR_20 <= VAR_19; ++VAR_20) {
          WebPMuxFrameInfo VAR_29;
          VAR_11 = FUNC_19(VAR_9, VAR_20, &VAR_29);
          if (VAR_11 != VAR_4 || VAR_29.id != VAR_2) {
            FUNC_4("ERROR: can not retrieve frame #%d.\n", VAR_20, VAR_1);
          }
          if (VAR_21[VAR_20 - 1] >= 0) VAR_29.duration = VAR_21[VAR_20 - 1];
          VAR_11 = FUNC_22(VAR_22, &VAR_29, 1);
          if (VAR_11 != VAR_4) {
            FUNC_4("ERROR: error push frame data #%d\n", VAR_20, VAR_1);
          }
          FUNC_13(&VAR_29.bitstream);
        }
        FUNC_16(VAR_9);
        VAR_12 = FUNC_26(VAR_22, VAR_8->output_);
        VAR_9 = VAR_22;
        VAR_22 = ((void*)0);

 Err3:
        FUNC_14(VAR_21);
        FUNC_16(VAR_22);
        if (!VAR_12) goto Err2;
      }
      break;
    }
    case 135: {
      VAR_12 = FUNC_0(VAR_8->input_, &VAR_9);
      if (!VAR_12) goto Err2;
      if (VAR_8->type_ == 132 || VAR_8->type_ == 133 ||
          VAR_8->type_ == 131) {
        VAR_11 = FUNC_17(VAR_9, VAR_6[VAR_8->type_]);
        if (VAR_11 != VAR_4) {
          FUNC_5("ERROR (%s): Could not strip the %s.\n",
                      FUNC_6(VAR_11), VAR_5[VAR_8->type_], VAR_0);
        }
      } else {
        FUNC_3("ERROR: Invalid feature for action 'strip'.\n", VAR_0);
        break;
      }
      VAR_12 = FUNC_26(VAR_9, VAR_8->output_);
      break;
    }
    case 137: {
      VAR_12 = FUNC_0(VAR_8->input_, &VAR_9);
      if (!VAR_12) goto Err2;
      VAR_12 = (FUNC_1(VAR_9) == VAR_4);
      break;
    }
    default: {
      FUNC_27(0);
      break;
    }
  }

 Err2:
  FUNC_16(VAR_9);
  return VAR_12;
}
