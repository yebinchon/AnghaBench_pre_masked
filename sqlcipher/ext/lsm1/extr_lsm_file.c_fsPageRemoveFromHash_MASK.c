
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** apHash; int nHash; } ;
struct TYPE_5__ {struct TYPE_5__* pHashNext; int iPg; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(FileSystem *VAR_0, Page *VAR_1){
  int VAR_2;
  Page **VAR_3;

  VAR_2 = FUNC_0(VAR_0->nHash, VAR_1->iPg);
  for(VAR_3=&VAR_0->apHash[VAR_2]; *VAR_3!=VAR_1; VAR_3=&(*VAR_3)->pHashNext);
  *VAR_3 = VAR_1->pHashNext;
  VAR_1->pHashNext = 0;
}
