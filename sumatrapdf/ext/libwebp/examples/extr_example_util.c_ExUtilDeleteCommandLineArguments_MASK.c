
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int argv_data_; scalar_t__ argv_; scalar_t__ own_argv_; } ;
typedef TYPE_1__ CommandLineArguments ;


 int FUNC_0 (int ,int *,TYPE_1__* const) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

void FUNC_3(CommandLineArguments* const VAR_0) {
  if (VAR_0 != ((void*)0)) {
    if (VAR_0->own_argv_) {
      FUNC_2((void*)VAR_0->argv_);
      FUNC_1(&VAR_0->argv_data_);
    }
    FUNC_0(0, ((void*)0), VAR_0);
  }
}
