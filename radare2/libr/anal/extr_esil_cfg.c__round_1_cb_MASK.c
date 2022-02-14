
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_7__ {int esil; } ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ RAnalEsilOp ;
typedef TYPE_2__ EsilCfgGen ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;

bool FUNC_4 (void *VAR_1, void *VAR_2, ut32 VAR_3) {
 EsilCfgGen *VAR_4 = (EsilCfgGen *)VAR_1;
 char *VAR_5 = (char *)VAR_2;
 RAnalEsilOp *VAR_6 = FUNC_2 (VAR_4->esil, VAR_5);
 if (VAR_6 && VAR_6->type == VAR_0) {
  if (!FUNC_3 ("BREAK", VAR_5)) {
   FUNC_0 (VAR_4, VAR_3);
  }
  if (!FUNC_3 ("GOTO", VAR_5)) {
   FUNC_1 (VAR_4, VAR_3);
  }
 }
 return 1;
}
