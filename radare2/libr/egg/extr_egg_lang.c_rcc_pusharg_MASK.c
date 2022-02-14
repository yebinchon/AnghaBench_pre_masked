
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nargs; int varxs; scalar_t__ pushargs; int * ctxpush; } ;
struct TYPE_9__ {TYPE_1__ lang; TYPE_2__* remit; } ;
struct TYPE_8__ {int (* push_arg ) (TYPE_3__*,int ,int ,char*) ;} ;
typedef TYPE_2__ REggEmit ;
typedef TYPE_3__ REgg ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_3__*,char*,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(REgg *VAR_1, char *VAR_2) {
 REggEmit *VAR_3 = VAR_1->remit;
 char VAR_4[64], *VAR_5 = FUNC_2 (VAR_1, VAR_4, VAR_2, 0);
 if (!VAR_5) {
  return;
 }
 FUNC_0 (VAR_1->lang.ctxpush[VAR_0]);
 VAR_1->lang.ctxpush[VAR_0] = FUNC_3 (VAR_5);
 VAR_1->lang.nargs++;
 if (VAR_1->lang.pushargs) {
  VAR_3->push_arg (VAR_1, VAR_1->lang.varxs, VAR_1->lang.nargs, VAR_5);
 }

 FUNC_1 (VAR_5);
}
