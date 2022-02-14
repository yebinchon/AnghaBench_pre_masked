
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nParam; int * apSqlParam; } ;
typedef TYPE_1__ RtreeMatchArg ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0){
  int VAR_1;
  RtreeMatchArg *VAR_2 = (RtreeMatchArg*)VAR_0;
  for(VAR_1=0; VAR_1<VAR_2->nParam; VAR_1++){
    FUNC_1(VAR_2->apSqlParam[VAR_1]);
  }
  FUNC_0(VAR_2);
}
