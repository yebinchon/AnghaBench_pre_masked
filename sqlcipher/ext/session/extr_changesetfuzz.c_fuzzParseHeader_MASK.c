
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {scalar_t__ bPatchset; } ;
struct TYPE_6__ {scalar_t__* aPK; char const* zTab; int nCol; } ;
typedef TYPE_1__ FuzzChangesetGroup ;
typedef TYPE_2__ FuzzChangeset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
  FuzzChangeset *VAR_2,
  u8 **VAR_3,
  u8 *VAR_4,
  FuzzChangesetGroup **VAR_5
){
  int VAR_6 = VAR_1;
  FuzzChangesetGroup *VAR_7;
  u8 VAR_8 = (VAR_2->bPatchset ? 'P' : 'T');

  FUNC_0( VAR_4>(*VAR_3) );
  VAR_7 = (FuzzChangesetGroup*)FUNC_4(sizeof(FuzzChangesetGroup));
  if( !VAR_7 ){
    VAR_6 = VAR_0;
  }else{
    u8 *VAR_9 = *VAR_3;
    if( VAR_9[0]!=VAR_8 ){
      VAR_6 = FUNC_1();
    }else{
      VAR_9++;
      VAR_9 += FUNC_3(VAR_9, &VAR_7->nCol);
      VAR_7->aPK = VAR_9;
      VAR_9 += VAR_7->nCol;
      VAR_7->zTab = (const char*)VAR_9;
      VAR_9 = &VAR_9[FUNC_5((const char*)VAR_9)+1];

      if( VAR_9>=VAR_4 ){
        VAR_6 = FUNC_1();
      }
    }
    *VAR_3 = VAR_9;
  }

  if( VAR_6!=VAR_1 ){
    FUNC_2(VAR_7);
    VAR_7 = 0;
  }

  *VAR_5 = VAR_7;
  return VAR_6;
}
