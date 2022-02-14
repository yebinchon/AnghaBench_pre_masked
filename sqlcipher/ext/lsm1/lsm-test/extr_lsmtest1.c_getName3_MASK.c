
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nValMax; int nValMin; int nDelete; int nWrite; int nIter; int nRange; } ;
typedef TYPE_1__ Datatest3 ;


 char* FUNC_0 (char*,char const*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0, Datatest3 *VAR_1){
  return FUNC_0("data3.%s.%d.%d.%d.%d.(%d..%d)",
      VAR_0, VAR_1->nRange, VAR_1->nIter, VAR_1->nWrite, VAR_1->nDelete,
      VAR_1->nValMin, VAR_1->nValMax
  );
}
