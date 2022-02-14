
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_vtab ;
struct TYPE_4__ {int pStorage; } ;
typedef TYPE_1__ Fts5FullTable ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_1, int VAR_2){
  Fts5FullTable *VAR_3 = (Fts5FullTable*)VAR_1;
  FUNC_0(VAR_2);
  FUNC_1(VAR_3, VAR_0, VAR_2);
  FUNC_2(VAR_3);
  return FUNC_3(VAR_3->pStorage);
}
