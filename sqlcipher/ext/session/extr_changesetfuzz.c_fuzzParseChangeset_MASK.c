
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_6__ {int bPatchset; int nGroup; int ** apGroup; } ;
typedef int FuzzChangesetGroup ;
typedef TYPE_1__ FuzzChangeset ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char**,char*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char**,char*,int **) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (int **,int) ;

__attribute__((used)) static int FUNC_5(
  u8 *VAR_2,
  int VAR_3,
  FuzzChangeset *VAR_4
){
  u8 *VAR_5 = &VAR_2[VAR_3];
  u8 *VAR_6 = VAR_2;
  int VAR_7 = VAR_1;

  FUNC_3(VAR_4, 0, sizeof(FuzzChangeset));
  if( VAR_3>0 ){
    VAR_4->bPatchset = (VAR_2[0]=='P');
  }

  while( VAR_7==VAR_1 && VAR_6<VAR_5 ){
    FuzzChangesetGroup *VAR_8 = 0;


    VAR_7 = FUNC_2(VAR_4, &VAR_6, VAR_5, &VAR_8);
    FUNC_0( (VAR_7==VAR_1)==(VAR_8!=0) );



    if( VAR_7==VAR_1 ){
      FuzzChangesetGroup **VAR_9 = (FuzzChangesetGroup**)FUNC_4(
          VAR_4->apGroup, sizeof(FuzzChangesetGroup*)*(VAR_4->nGroup+1)
      );
      if( VAR_9==0 ){
        VAR_7 = VAR_0;
      }else{
        VAR_9[VAR_4->nGroup] = VAR_8;
        VAR_4->apGroup = VAR_9;
        VAR_4->nGroup++;
      }
      VAR_7 = FUNC_1(&VAR_6, VAR_5, VAR_4);
    }
  }

  return VAR_7;
}
