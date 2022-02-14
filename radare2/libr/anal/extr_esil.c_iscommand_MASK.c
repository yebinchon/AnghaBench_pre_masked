
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ops; } ;
typedef int RAnalEsilOp ;
typedef TYPE_1__ RAnalEsil ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(RAnalEsil *VAR_0, const char *VAR_1, RAnalEsilOp **VAR_2) {
 char VAR_3[128];
 char *VAR_4 = FUNC_1 (FUNC_0 (VAR_1), VAR_3, 16);
 if (FUNC_2 (VAR_0->ops, VAR_4)) {
  *VAR_2 = (RAnalEsilOp *)(size_t)FUNC_3 (VAR_0->ops, VAR_4, 0);
  return 1;
 }
 return 0;
}
