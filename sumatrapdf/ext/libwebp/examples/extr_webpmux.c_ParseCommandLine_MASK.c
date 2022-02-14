
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int W_CHAR ;
struct TYPE_6__ {int argc_; char** argv_; } ;
struct TYPE_8__ {scalar_t__ action_type_; scalar_t__ type_; char* output_; char* input_; scalar_t__ arg_count_; TYPE_2__* args_; TYPE_1__ cmd_args_; } ;
struct TYPE_7__ {char* params_; char* filename_; int subtype_; } ;
typedef TYPE_2__ FeatureArg ;
typedef TYPE_3__ Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char const* const,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ** const) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int const,int const,int const) ;
 int FUNC_10 (char const* const,char*) ;

__attribute__((used)) static int FUNC_11(Config* VAR_17, const W_CHAR** const VAR_18) {
  int VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = 1;
  int VAR_22 = VAR_17->cmd_args_.argc_;
  const char* const* VAR_23 = VAR_17->cmd_args_.argv_;

  const char* const* VAR_24 =
      (VAR_18 != ((void*)0)) ? (const char**)(VAR_18 + 1) : VAR_23;

  while (VAR_19 < VAR_22) {
    FeatureArg* const VAR_25 = &VAR_17->args_[VAR_20];
    if (VAR_23[VAR_19][0] == '-') {
      if (!FUNC_10(VAR_23[VAR_19], "-set")) {
        if (VAR_3) {
          VAR_17->action_type_ = VAR_4;
        } else {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        }
        ++VAR_19;
      } else if (!FUNC_10(VAR_23[VAR_19], "-duration")) {
        FUNC_0(2, VAR_6);
        if (VAR_3 || VAR_17->action_type_ == VAR_0) {
          VAR_17->action_type_ = VAR_0;
        } else {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        }
        if (VAR_7 || VAR_17->type_ == VAR_9) {
          VAR_17->type_ = VAR_9;
        } else {
          FUNC_3("ERROR: Multiple features specified.\n", VAR_6);
        }
        VAR_25->params_ = VAR_23[VAR_19 + 1];
        ++VAR_20;
        VAR_19 += 2;
      } else if (!FUNC_10(VAR_23[VAR_19], "-get")) {
        if (VAR_3) {
          VAR_17->action_type_ = VAR_1;
        } else {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        }
        ++VAR_19;
      } else if (!FUNC_10(VAR_23[VAR_19], "-strip")) {
        if (VAR_3) {
          VAR_17->action_type_ = VAR_5;
          VAR_17->arg_count_ = 0;
        } else {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        }
        ++VAR_19;
      } else if (!FUNC_10(VAR_23[VAR_19], "-frame")) {
        FUNC_0(3, VAR_6);
        if (VAR_3 || VAR_17->action_type_ == VAR_4) {
          VAR_17->action_type_ = VAR_4;
        } else {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        }
        if (VAR_7 || VAR_17->type_ == VAR_8) {
          VAR_17->type_ = VAR_8;
        } else {
          FUNC_3("ERROR: Multiple features specified.\n", VAR_6);
        }
        VAR_25->subtype_ = VAR_14;
        VAR_25->filename_ = VAR_23[VAR_19 + 1];
        VAR_25->params_ = VAR_23[VAR_19 + 2];
        ++VAR_20;
        VAR_19 += 3;
      } else if (!FUNC_10(VAR_23[VAR_19], "-loop") || !FUNC_10(VAR_23[VAR_19], "-bgcolor")) {
        FUNC_0(2, VAR_6);
        if (VAR_3 || VAR_17->action_type_ == VAR_4) {
          VAR_17->action_type_ = VAR_4;
        } else {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        }
        if (VAR_7 || VAR_17->type_ == VAR_8) {
          VAR_17->type_ = VAR_8;
        } else {
          FUNC_3("ERROR: Multiple features specified.\n", VAR_6);
        }
        VAR_25->subtype_ =
            !FUNC_10(VAR_23[VAR_19], "-loop") ? VAR_16 : VAR_15;
        VAR_25->params_ = VAR_23[VAR_19 + 1];
        ++VAR_20;
        VAR_19 += 2;
      } else if (!FUNC_10(VAR_23[VAR_19], "-o")) {
        FUNC_0(2, VAR_6);
        VAR_17->output_ = VAR_24[VAR_19 + 1];
        VAR_19 += 2;
      } else if (!FUNC_10(VAR_23[VAR_19], "-info")) {
        FUNC_1(2, VAR_6);
        if (VAR_17->action_type_ != VAR_13) {
          FUNC_3("ERROR: Multiple actions specified.\n", VAR_6);
        } else {
          VAR_17->action_type_ = VAR_2;
          VAR_17->arg_count_ = 0;
          VAR_17->input_ = VAR_24[VAR_19 + 1];
        }
        VAR_19 += 2;
      } else if (!FUNC_10(VAR_23[VAR_19], "-h") || !FUNC_10(VAR_23[VAR_19], "-help")) {
        FUNC_6();
        FUNC_2(VAR_17);
        FUNC_5((W_CHAR** const)VAR_18);
        FUNC_8(0);
      } else if (!FUNC_10(VAR_23[VAR_19], "-version")) {
        const int VAR_26 = FUNC_7();
        FUNC_9("%d.%d.%d\n",
               (VAR_26 >> 16) & 0xff, (VAR_26 >> 8) & 0xff, VAR_26 & 0xff);
        FUNC_2(VAR_17);
        FUNC_5((W_CHAR** const)VAR_18);
        FUNC_8(0);
      } else if (!FUNC_10(VAR_23[VAR_19], "--")) {
        if (VAR_19 < VAR_22 - 1) {
          ++VAR_19;
          if (VAR_17->input_ == ((void*)0)) {
            VAR_17->input_ = VAR_24[VAR_19];
          } else {
            FUNC_4("ERROR at '%s': Multiple input files specified.\n",
                        VAR_23[VAR_19], VAR_6);
          }
        }
        break;
      } else {
        FUNC_4("ERROR: Unknown option: '%s'.\n", VAR_23[VAR_19], VAR_6);
      }
    } else {
      if (VAR_3) {
        FUNC_3("ERROR: Action must be specified before other arguments.\n",
                    VAR_6);
      }
      if (!FUNC_10(VAR_23[VAR_19], "icc") || !FUNC_10(VAR_23[VAR_19], "exif") ||
          !FUNC_10(VAR_23[VAR_19], "xmp")) {
        if (VAR_7) {
          VAR_17->type_ = (!FUNC_10(VAR_23[VAR_19], "icc")) ? VAR_11 :
              (!FUNC_10(VAR_23[VAR_19], "exif")) ? VAR_10 : VAR_12;
        } else {
          FUNC_3("ERROR: Multiple features specified.\n", VAR_6);
        }
        if (VAR_17->action_type_ == VAR_4) {
          FUNC_0(2, VAR_6);
          VAR_25->filename_ = VAR_24[VAR_19 + 1];
          ++VAR_20;
          VAR_19 += 2;
        } else {
          ++VAR_19;
        }
      } else if (!FUNC_10(VAR_23[VAR_19], "frame") &&
                 (VAR_17->action_type_ == VAR_1)) {
        FUNC_0(2, VAR_6);
        VAR_17->type_ = VAR_8;
        VAR_25->params_ = VAR_23[VAR_19 + 1];
        ++VAR_20;
        VAR_19 += 2;
      } else {
        if (VAR_17->input_ == ((void*)0)) {
          VAR_17->input_ = VAR_24[VAR_19];
        } else {
          FUNC_4("ERROR at '%s': Multiple input files specified.\n",
                      VAR_23[VAR_19], VAR_6);
        }
        ++VAR_19;
      }
    }
  }
 ErrParse:
  return VAR_21;
}
