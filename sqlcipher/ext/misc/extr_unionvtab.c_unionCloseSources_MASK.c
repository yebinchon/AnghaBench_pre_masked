
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nOpen; TYPE_2__* pClosable; } ;
typedef TYPE_1__ UnionTab ;
struct TYPE_7__ {scalar_t__ db; struct TYPE_7__* pNextClosable; } ;
typedef TYPE_2__ UnionSrc ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_3(UnionTab *VAR_0, int VAR_1){
  while( VAR_0->pClosable && VAR_0->nOpen>VAR_1 ){
    UnionSrc *VAR_2;
    UnionSrc **VAR_3;
    for(VAR_3=&VAR_0->pClosable; (*VAR_3)->pNextClosable; VAR_3=&(*VAR_3)->pNextClosable);
    VAR_2 = *VAR_3;
    FUNC_0( VAR_2->db );
    FUNC_1(VAR_2->db);
    VAR_2->db = 0;
    *VAR_3 = 0;
    VAR_0->nOpen--;
    FUNC_2(VAR_0, VAR_2, 1, 0);
  }
}
