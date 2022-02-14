
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int tabFlags; } ;
typedef TYPE_1__ Table ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int iDb; int regCtr; TYPE_1__* pTab; struct TYPE_12__* pNext; } ;
struct TYPE_11__ {int nMem; TYPE_3__* pAinc; TYPE_7__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ AutoincInfo ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_7__*,int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(
  Parse *VAR_2,
  int VAR_3,
  Table *VAR_4
){
  int VAR_5 = 0;
  if( (VAR_4->tabFlags & VAR_1)!=0
   && (VAR_2->db->flags & VAR_0)==0
  ){
    Parse *VAR_6 = FUNC_1(VAR_2);
    AutoincInfo *VAR_7;

    VAR_7 = VAR_6->pAinc;
    while( VAR_7 && VAR_7->pTab!=VAR_4 ){ VAR_7 = VAR_7->pNext; }
    if( VAR_7==0 ){
      VAR_7 = FUNC_0(VAR_2->db, sizeof(*VAR_7));
      if( VAR_7==0 ) return 0;
      VAR_7->pNext = VAR_6->pAinc;
      VAR_6->pAinc = VAR_7;
      VAR_7->pTab = VAR_4;
      VAR_7->iDb = VAR_3;
      VAR_6->nMem++;
      VAR_7->regCtr = ++VAR_6->nMem;
      VAR_6->nMem++;
    }
    VAR_5 = VAR_7->regCtr;
  }
  return VAR_5;
}
