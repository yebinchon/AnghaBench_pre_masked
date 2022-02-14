
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ action_type_; scalar_t__ type_; int * output_; int * input_; } ;
typedef TYPE_1__ Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1(Config* const VAR_6) {
  int VAR_7 = 1;


  if (VAR_1) {
    FUNC_0("ERROR: No action specified.\n", VAR_3);
  }


  if (VAR_4 && VAR_6->action_type_ != VAR_0) {
    FUNC_0("ERROR: No feature specified.\n", VAR_3);
  }


  if (VAR_6->input_ == ((void*)0)) {
    if (VAR_6->action_type_ != VAR_2) {
      FUNC_0("ERROR: No input file specified.\n", VAR_3);
    } else if (VAR_6->type_ != VAR_5) {
      FUNC_0("ERROR: No input file specified.\n", VAR_3);
    }
  }


  if (VAR_6->output_ == ((void*)0) && VAR_6->action_type_ != VAR_0) {
    FUNC_0("ERROR: No output file specified.\n", VAR_3);
  }

 ErrValidate2:
  return VAR_7;
}
