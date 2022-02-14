
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_6__ {int nSrc; scalar_t__ db; struct TYPE_6__* aSrc; struct TYPE_6__* zSourceStr; int pOpenClose; int pNotFound; struct TYPE_6__* zContext; struct TYPE_6__* zFile; struct TYPE_6__* zTab; struct TYPE_6__* zDb; } ;
typedef TYPE_1__ UnionTab ;
typedef TYPE_1__ UnionSrc ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_1){
  if( VAR_1 ){
    UnionTab *VAR_2 = (UnionTab*)VAR_1;
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_2->nSrc; VAR_3++){
      UnionSrc *VAR_4 = &VAR_2->aSrc[VAR_3];
      int VAR_5 = (VAR_4->db!=0);
      FUNC_0(VAR_4->db);
      if( VAR_5 ){
        FUNC_3(VAR_2, VAR_4, 1, 0);
      }
      FUNC_2(VAR_4->zDb);
      FUNC_2(VAR_4->zTab);
      FUNC_2(VAR_4->zFile);
      FUNC_2(VAR_4->zContext);
    }
    FUNC_1(VAR_2->pNotFound);
    FUNC_1(VAR_2->pOpenClose);
    FUNC_2(VAR_2->zSourceStr);
    FUNC_2(VAR_2->aSrc);
    FUNC_2(VAR_2);
  }
  return VAR_0;
}
