
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; scalar_t__ pOpenClose; scalar_t__ bHasContext; } ;
typedef TYPE_1__ UnionTab ;
struct TYPE_6__ {int zContext; int zFile; } ;
typedef TYPE_2__ UnionSrc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int ,int,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(
  UnionTab *VAR_2,
  UnionSrc *VAR_3,
  int VAR_4,
  char **VAR_5
){
  int VAR_6 = VAR_0;
  if( VAR_2->pOpenClose ){
    FUNC_1(VAR_2->pOpenClose, 1, VAR_3->zFile, -1, VAR_1);
    if( VAR_2->bHasContext ){
      FUNC_1(VAR_2->pOpenClose, 2, VAR_3->zContext, -1, VAR_1);
    }
    FUNC_0(VAR_2->pOpenClose, 2+VAR_2->bHasContext, VAR_4);
    FUNC_5(VAR_2->pOpenClose);
    if( VAR_0!=(VAR_6 = FUNC_4(VAR_2->pOpenClose)) ){
      if( VAR_5 ){
        *VAR_5 = FUNC_3("%s", FUNC_2(VAR_2->db));
      }
    }
  }
  return VAR_6;
}
