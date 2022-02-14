
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* rcPath; struct TYPE_8__* prjName; int core; } ;
struct TYPE_7__ {TYPE_2__* user; } ;
typedef int RThreadFunctionRet ;
typedef TYPE_1__ RThread ;
typedef TYPE_2__ ProjectState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static RThreadFunctionRet FUNC_2(RThread *VAR_1) {
 ProjectState *VAR_2 = VAR_1->user;
 FUNC_1 (VAR_2->core, VAR_2->prjName, VAR_2->rcPath);
 FUNC_0 (VAR_2->prjName);
 FUNC_0 (VAR_2->rcPath);
 FUNC_0 (VAR_2);
 return VAR_0;
}
