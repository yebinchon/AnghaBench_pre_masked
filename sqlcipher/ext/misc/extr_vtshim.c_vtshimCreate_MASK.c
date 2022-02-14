
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* pNext; struct TYPE_8__** ppPrev; TYPE_3__* pAux; int pChild; } ;
typedef TYPE_2__ vtshim_vtab ;
struct TYPE_9__ {TYPE_2__* pAllVtab; int pChildAux; TYPE_1__* pMod; int zName; scalar_t__ bDisposed; int * db; } ;
typedef TYPE_3__ vtshim_aux ;
typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_7__ {int (* xCreate ) (int *,int ,int,char const* const*,int *,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ,int,char const* const*,int *,char**) ;

__attribute__((used)) static int FUNC_6(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4,
  const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  vtshim_aux *VAR_8 = (vtshim_aux*)VAR_3;
  vtshim_vtab *VAR_9;
  int VAR_10;

  FUNC_0( VAR_2==VAR_8->db );
  if( VAR_8->bDisposed ){
    if( VAR_7 ){
      *VAR_7 = FUNC_4("virtual table was disposed: \"%s\"",
                               VAR_8->zName);
    }
    return VAR_0;
  }
  VAR_9 = FUNC_3( sizeof(*VAR_9) );
  *VAR_6 = (sqlite3_vtab*)VAR_9;
  if( VAR_9==0 ) return VAR_1;
  FUNC_1(VAR_9, 0, sizeof(*VAR_9));
  VAR_10 = VAR_8->pMod->xCreate(VAR_2, VAR_8->pChildAux, VAR_4, VAR_5,
                           &VAR_9->pChild, VAR_7);
  if( VAR_10 ){
    FUNC_2(VAR_9);
    *VAR_6 = 0;
    return VAR_10;
  }
  VAR_9->pAux = VAR_8;
  VAR_9->ppPrev = &VAR_8->pAllVtab;
  VAR_9->pNext = VAR_8->pAllVtab;
  if( VAR_8->pAllVtab ) VAR_8->pAllVtab->ppPrev = &VAR_9->pNext;
  VAR_8->pAllVtab = VAR_9;
  return VAR_10;
}
