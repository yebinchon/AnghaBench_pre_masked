
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* user; } ;
struct TYPE_4__ {int input; int core; } ;
typedef TYPE_1__ RapThread ;
typedef int RThreadFunctionRet ;
typedef TYPE_2__ RThread ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static RThreadFunctionRet FUNC_1 (RThread *VAR_2) {
 if (!VAR_2) {
  return 0;
 }
 RapThread *VAR_3 = VAR_2->user;
 if (!VAR_3 || !VAR_3->core) {
  return 0;
 }
 return FUNC_0 (VAR_3->core, VAR_3->input) ? VAR_0 : VAR_1;
}
