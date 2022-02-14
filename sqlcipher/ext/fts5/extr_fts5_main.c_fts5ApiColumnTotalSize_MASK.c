
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_4__ {scalar_t__ pVtab; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct TYPE_5__ {int pStorage; } ;
typedef TYPE_2__ Fts5FullTable ;
typedef TYPE_3__ Fts5Cursor ;
typedef int Fts5Context ;


 int FUNC_0 (int ,int,int *) ;

__attribute__((used)) static int FUNC_1(
  Fts5Context *VAR_0,
  int VAR_1,
  sqlite3_int64 *VAR_2
){
  Fts5Cursor *VAR_3 = (Fts5Cursor*)VAR_0;
  Fts5FullTable *VAR_4 = (Fts5FullTable*)(VAR_3->base.pVtab);
  return FUNC_0(VAR_4->pStorage, VAR_1, VAR_2);
}
