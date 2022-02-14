
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int nGroup; int nVal; int ** apVal; TYPE_1__** apGroup; } ;
struct TYPE_4__ {int nCol; scalar_t__* aPK; } ;
typedef TYPE_1__ FuzzChangesetGroup ;
typedef TYPE_2__ FuzzChangeset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int **,int) ;

__attribute__((used)) static int FUNC_3(
  u8 **VAR_2,
  u8 *VAR_3,
  FuzzChangeset *VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_1;
  FuzzChangesetGroup *VAR_7 = VAR_4->apGroup[VAR_4->nGroup-1];
  int VAR_8;
  u8 *VAR_9 = *VAR_2;

  for(VAR_8=0; VAR_6==VAR_1 && VAR_8<VAR_7->nCol; VAR_8++){
    if( VAR_5==0 || VAR_7->aPK[VAR_8] ){
      int VAR_10;
      if( VAR_9>=VAR_3 ) break;
      if( (VAR_4->nVal & (VAR_4->nVal-1))==0 ){
        int VAR_11 = VAR_4->nVal ? VAR_4->nVal*2 : 4;
        u8 **VAR_12 = (u8**)FUNC_2(VAR_4->apVal, VAR_11*sizeof(u8*));
        if( VAR_12==0 ) return VAR_0;
        VAR_4->apVal = VAR_12;
      }
      VAR_4->apVal[VAR_4->nVal++] = VAR_9;
      VAR_6 = FUNC_0(VAR_9, &VAR_10);
      VAR_9 += VAR_10;
    }
  }

  if( VAR_6==VAR_1 && VAR_8<VAR_7->nCol ){
    VAR_6 = FUNC_1();
  }

  *VAR_2 = VAR_9;
  return VAR_6;
}
