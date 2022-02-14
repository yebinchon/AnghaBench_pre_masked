
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc_; char const** argv_; int argv_data_; scalar_t__ own_argv_; } ;
typedef TYPE_1__ CommandLineArguments ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(int VAR_0, const char* VAR_1[],
                                      CommandLineArguments* const VAR_2) {
  FUNC_1(VAR_2 != ((void*)0));
  VAR_2->argc_ = VAR_0;
  VAR_2->argv_ = VAR_1;
  VAR_2->own_argv_ = 0;
  FUNC_0(&VAR_2->argv_data_);
}
