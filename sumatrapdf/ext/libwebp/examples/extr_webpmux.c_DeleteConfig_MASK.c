
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cmd_args_; int args_; } ;
typedef TYPE_1__ Config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__* const,int ,int) ;

__attribute__((used)) static void FUNC_3(Config* const VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_1(VAR_0->args_);
    FUNC_0(&VAR_0->cmd_args_);
    FUNC_2(VAR_0, 0, sizeof(*VAR_0));
  }
}
