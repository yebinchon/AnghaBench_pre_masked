
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {scalar_t__ ireg; } ;
typedef int RCore ;
typedef TYPE_1__ RAnalOp ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int ) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static char *FUNC_3 (void *VAR_0, ut64 VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 char *VAR_3 = ((void*)0);
 RAnalOp *VAR_4 = FUNC_1 (VAR_2, VAR_1, 0);
 if (VAR_4 && VAR_4->ireg) {
  VAR_3 = FUNC_2 (VAR_4->ireg);
 }
 FUNC_0 (VAR_4);
 return VAR_3;
}
