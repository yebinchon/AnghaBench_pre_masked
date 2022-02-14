
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
typedef int sqlite3 ;
struct TYPE_5__ {int nRef; int * db; int enc; void* nAllField; void* nKeyField; int * aColl; int * aSortOrder; } ;
typedef TYPE_1__ KeyInfo ;
typedef int CollSeq ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

KeyInfo *FUNC_4(sqlite3 *VAR_0, int VAR_1, int VAR_2){
  int VAR_3 = (VAR_1+VAR_2)*(sizeof(CollSeq*)+1) - sizeof(CollSeq*);
  KeyInfo *VAR_4 = FUNC_2(VAR_0, sizeof(KeyInfo) + VAR_3);
  if( VAR_4 ){
    VAR_4->aSortOrder = (u8*)&VAR_4->aColl[VAR_1+VAR_2];
    VAR_4->nKeyField = (u16)VAR_1;
    VAR_4->nAllField = (u16)(VAR_1+VAR_2);
    VAR_4->enc = FUNC_0(VAR_0);
    VAR_4->db = VAR_0;
    VAR_4->nRef = 1;
    FUNC_1(&VAR_4[1], 0, VAR_3);
  }else{
    FUNC_3(VAR_0);
  }
  return VAR_4;
}
