
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Trigger ;
typedef int Table ;
struct TYPE_2__ {int schemaFlags; int iGeneration; scalar_t__ pSeqTab; int fkeyHash; int tblHash; int idxHash; int trigHash; } ;
typedef TYPE_1__ Schema ;
typedef int HashElem ;
typedef int Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

void FUNC_7(void *VAR_2){
  Hash VAR_3;
  Hash VAR_4;
  HashElem *VAR_5;
  Schema *VAR_6 = (Schema *)VAR_2;

  VAR_3 = VAR_6->tblHash;
  VAR_4 = VAR_6->trigHash;
  FUNC_3(&VAR_6->trigHash);
  FUNC_2(&VAR_6->idxHash);
  for(VAR_5=FUNC_5(&VAR_4); VAR_5; VAR_5=FUNC_6(VAR_5)){
    FUNC_1(0, (Trigger*)FUNC_4(VAR_5));
  }
  FUNC_2(&VAR_4);
  FUNC_3(&VAR_6->tblHash);
  for(VAR_5=FUNC_5(&VAR_3); VAR_5; VAR_5=FUNC_6(VAR_5)){
    Table *VAR_7 = FUNC_4(VAR_5);
    FUNC_0(0, VAR_7);
  }
  FUNC_2(&VAR_3);
  FUNC_2(&VAR_6->fkeyHash);
  VAR_6->pSeqTab = 0;
  if( VAR_6->schemaFlags & VAR_1 ){
    VAR_6->iGeneration++;
  }
  VAR_6->schemaFlags &= ~(VAR_1|VAR_0);
}
