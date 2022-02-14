
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nField; TYPE_2__* pKeyInfo; int * aMem; } ;
typedef TYPE_1__ UnpackedRecord ;
struct TYPE_6__ {int nKeyField; scalar_t__ aSortOrder; int db; } ;
typedef int Mem ;
typedef TYPE_2__ KeyInfo ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;

UnpackedRecord *FUNC_3(
  KeyInfo *VAR_0
){
  UnpackedRecord *VAR_1;
  int VAR_2;
  VAR_2 = FUNC_0(sizeof(UnpackedRecord)) + sizeof(Mem)*(VAR_0->nKeyField+1);
  VAR_1 = (UnpackedRecord *)FUNC_2(VAR_0->db, VAR_2);
  if( !VAR_1 ) return 0;
  VAR_1->aMem = (Mem*)&((char*)VAR_1)[FUNC_0(sizeof(UnpackedRecord))];
  FUNC_1( VAR_0->aSortOrder!=0 );
  VAR_1->pKeyInfo = VAR_0;
  VAR_1->nField = VAR_0->nKeyField + 1;
  return VAR_1;
}
