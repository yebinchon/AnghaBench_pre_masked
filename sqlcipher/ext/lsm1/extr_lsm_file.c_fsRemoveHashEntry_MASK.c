
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** apHash; int nHash; } ;
struct TYPE_6__ {scalar_t__ iPg; scalar_t__ nRef; int flags; struct TYPE_6__* pHashNext; } ;
typedef TYPE_1__ Page ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(FileSystem *VAR_1, LsmPgno VAR_2){
  Page *VAR_3;
  int VAR_4 = FUNC_1(VAR_1->nHash, VAR_2);

  for(VAR_3=VAR_1->apHash[VAR_4]; VAR_3 && VAR_3->iPg!=VAR_2; VAR_3=VAR_3->pHashNext);

  if( VAR_3 ){
    FUNC_0( VAR_3->nRef==0 || (VAR_3->flags & VAR_0)==0 );
    FUNC_2(VAR_1, VAR_3);
    VAR_3->iPg = 0;
    VAR_4 = FUNC_1(VAR_1->nHash, 0);
    VAR_3->pHashNext = VAR_1->apHash[VAR_4];
    VAR_1->apHash[VAR_4] = VAR_3;
  }
}
