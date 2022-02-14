
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pClosable; TYPE_2__* aSrc; scalar_t__ bSwarm; } ;
typedef TYPE_1__ UnionTab ;
struct TYPE_5__ {scalar_t__ nUser; struct TYPE_5__* pNextClosable; scalar_t__ db; } ;
typedef TYPE_2__ UnionSrc ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(UnionTab *VAR_0, int VAR_1){
  if( VAR_0->bSwarm ){
    UnionSrc *VAR_2 = &VAR_0->aSrc[VAR_1];
    FUNC_0( VAR_2->nUser>=0 && VAR_2->db );
    if( VAR_2->nUser==0 ){
      UnionSrc **VAR_3;
      for(VAR_3=&VAR_0->pClosable; *VAR_3!=VAR_2; VAR_3=&(*VAR_3)->pNextClosable);
      *VAR_3 = VAR_2->pNextClosable;
      VAR_2->pNextClosable = 0;
    }
    VAR_2->nUser++;
  }
}
