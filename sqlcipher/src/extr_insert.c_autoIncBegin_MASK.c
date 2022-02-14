
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int tabFlags; int nCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_19__ {int mDbFlags; TYPE_2__* aDb; } ;
struct TYPE_18__ {int iDb; int regCtr; TYPE_3__* pTab; struct TYPE_18__* pNext; } ;
struct TYPE_17__ {int nMem; TYPE_5__* pAinc; TYPE_9__* db; int rc; int nErr; } ;
struct TYPE_15__ {TYPE_1__* pSchema; } ;
struct TYPE_14__ {TYPE_3__* pSeqTab; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ AutoincInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (TYPE_9__*,int) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(
  Parse *VAR_3,
  int VAR_4,
  Table *VAR_5
){
  int VAR_6 = 0;
  FUNC_2( VAR_3->db->aDb[VAR_4].pSchema!=0 );
  if( (VAR_5->tabFlags & VAR_2)!=0
   && (VAR_3->db->mDbFlags & VAR_0)==0
  ){
    Parse *VAR_7 = FUNC_4(VAR_3);
    AutoincInfo *VAR_8;
    Table *VAR_9 = VAR_3->db->aDb[VAR_4].pSchema->pSeqTab;




    if( VAR_9==0
     || !FUNC_0(VAR_9)
     || FUNC_1(VAR_9)
     || VAR_9->nCol!=2
    ){
      VAR_3->nErr++;
      VAR_3->rc = VAR_1;
      return 0;
    }

    VAR_8 = VAR_7->pAinc;
    while( VAR_8 && VAR_8->pTab!=VAR_5 ){ VAR_8 = VAR_8->pNext; }
    if( VAR_8==0 ){
      VAR_8 = FUNC_3(VAR_3->db, sizeof(*VAR_8));
      if( VAR_8==0 ) return 0;
      VAR_8->pNext = VAR_7->pAinc;
      VAR_7->pAinc = VAR_8;
      VAR_8->pTab = VAR_5;
      VAR_8->iDb = VAR_4;
      VAR_7->nMem++;
      VAR_8->regCtr = ++VAR_7->nMem;
      VAR_7->nMem +=2;
    }
    VAR_6 = VAR_8->regCtr;
  }
  return VAR_6;
}
