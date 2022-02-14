
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int nSrc; char* zSourceStr; int nOpen; TYPE_2__* pClosable; scalar_t__ nMaxOpen; scalar_t__ bSwarm; TYPE_2__* aSrc; } ;
typedef TYPE_1__ UnionTab ;
struct TYPE_12__ {scalar_t__ db; struct TYPE_12__* pNextClosable; } ;
typedef TYPE_2__ UnionSrc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*,char**) ;
 char* FUNC_8 (int*,TYPE_1__*,TYPE_2__*,char**) ;

__attribute__((used)) static int FUNC_9(UnionTab *VAR_2, int VAR_3, char **VAR_4){
  int VAR_5 = VAR_1;
  UnionSrc *VAR_6 = &VAR_2->aSrc[VAR_3];

  FUNC_0( VAR_2->bSwarm && VAR_3<VAR_2->nSrc );
  if( VAR_6->db==0 ){
    FUNC_5(VAR_2, VAR_2->nMaxOpen-1);
    VAR_5 = FUNC_7(VAR_2, VAR_6, VAR_4);
    if( VAR_5==VAR_1 ){
      char *VAR_7 = FUNC_8(&VAR_5, VAR_2, VAR_6, VAR_4);
      if( VAR_5==VAR_1 ){
        if( VAR_2->zSourceStr==0 ){
          VAR_2->zSourceStr = VAR_7;
        }else{
          if( FUNC_4(VAR_7, VAR_2->zSourceStr) ){
            *VAR_4 = FUNC_3("source table schema mismatch");
            VAR_5 = VAR_0;
          }
          FUNC_2(VAR_7);
        }
      }
    }

    if( VAR_5==VAR_1 ){
      VAR_6->pNextClosable = VAR_2->pClosable;
      VAR_2->pClosable = VAR_6;
      VAR_2->nOpen++;
    }else{
      FUNC_1(VAR_6->db);
      VAR_6->db = 0;
      FUNC_6(VAR_2, VAR_6, 1, 0);
    }
  }

  return VAR_5;
}
