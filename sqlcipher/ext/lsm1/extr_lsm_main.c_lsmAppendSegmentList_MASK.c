
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nSize; int iRoot; int iLastPg; int iFirst; } ;
typedef TYPE_1__ Segment ;
typedef int LsmString ;


 int FUNC_0 (int *,char*,char*,int ,int ,int ,int ) ;

void FUNC_1(LsmString *VAR_0, char *VAR_1, Segment *VAR_2){
  FUNC_0(VAR_0, "%s{%d %d %d %d}", VAR_1,
        VAR_2->iFirst, VAR_2->iLastPg, VAR_2->iRoot, VAR_2->nSize
  );
}
