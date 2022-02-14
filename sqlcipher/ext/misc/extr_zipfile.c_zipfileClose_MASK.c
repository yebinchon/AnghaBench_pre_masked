
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_7__ {TYPE_3__* pCsrList; } ;
typedef TYPE_2__ ZipfileTab ;
struct TYPE_6__ {scalar_t__ pVtab; } ;
struct TYPE_8__ {struct TYPE_8__* pCsrNext; TYPE_1__ base; } ;
typedef TYPE_3__ ZipfileCsr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  ZipfileCsr *VAR_2 = (ZipfileCsr*)VAR_1;
  ZipfileTab *VAR_3 = (ZipfileTab*)(VAR_2->base.pVtab);
  ZipfileCsr **VAR_4;
  FUNC_1(VAR_2);


  for(VAR_4=&VAR_3->pCsrList; *VAR_4!=VAR_2; VAR_4=&((*VAR_4)->pCsrNext));
  *VAR_4 = VAR_2->pCsrNext;

  FUNC_0(VAR_2);
  return VAR_0;
}
