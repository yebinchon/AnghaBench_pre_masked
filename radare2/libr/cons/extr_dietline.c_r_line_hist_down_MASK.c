
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* cb_history_down ) (TYPE_1__*) ;} ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2() {
 if (!VAR_0.cb_history_down) {
  FUNC_0 (&VAR_0, &VAR_2, &VAR_1);
 }
 return VAR_0.cb_history_down (&VAR_0);
}
