
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int W_CHAR ;
struct TYPE_6__ {int arg_count_; int * args_; int cmd_args_; } ;
typedef int FeatureArg ;
typedef TYPE_1__ Config ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char const**,int *) ;
 int FUNC_2 (TYPE_1__* const,int const** const) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (TYPE_1__* const) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__* const,int ,int) ;

__attribute__((used)) static int FUNC_7(int VAR_1, const char* VAR_2[], Config* const VAR_3,
                            const W_CHAR** const VAR_4) {
  int VAR_5 = 0;
  int VAR_6;

  FUNC_6(VAR_3, 0, sizeof(*VAR_3));

  VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_3->cmd_args_);
  if (!VAR_6) return 0;


  if (!FUNC_3(&VAR_3->cmd_args_, &VAR_5)) {
    FUNC_0("Exiting due to command-line parsing error.\n", VAR_0);
  }

  VAR_3->arg_count_ = VAR_5;
  VAR_3->args_ = (FeatureArg*)FUNC_5(VAR_5, sizeof(*VAR_3->args_));
  if (VAR_3->args_ == ((void*)0)) {
    FUNC_0("ERROR: Memory allocation error.\n", VAR_0);
  }


  if (!FUNC_2(VAR_3, VAR_4) || !FUNC_4(VAR_3)) {
    FUNC_0("Exiting due to command-line parsing error.\n", VAR_0);
  }

 Err1:
  return VAR_6;
}
