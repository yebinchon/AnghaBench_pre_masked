
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bGlobal; int nElem; int * aMatchinfo; } ;
typedef TYPE_1__ MatchinfoBuffer ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(MatchinfoBuffer *VAR_0){
  VAR_0->bGlobal = 1;
  FUNC_0(&VAR_0->aMatchinfo[2+VAR_0->nElem], &VAR_0->aMatchinfo[1], VAR_0->nElem*sizeof(u32));
}
