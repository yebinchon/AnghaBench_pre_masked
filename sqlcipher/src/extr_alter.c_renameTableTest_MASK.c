
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ sqlite3_xauth ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_19__ {int flags; scalar_t__ xAuth; } ;
typedef TYPE_3__ sqlite3 ;
typedef int sNC ;
struct TYPE_21__ {TYPE_4__* pParse; } ;
struct TYPE_20__ {int rc; TYPE_2__* pNewTrigger; scalar_t__ nErr; TYPE_1__* pNewTable; } ;
struct TYPE_18__ {int pTabSchema; } ;
struct TYPE_17__ {scalar_t__ pSelect; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ NameContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (int *,int,int *,int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char const*,int,TYPE_3__*,char const*,int) ;
 int FUNC_5 (TYPE_4__*,char const*) ;
 int FUNC_6 (TYPE_3__*,char const*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,TYPE_5__*) ;
 TYPE_3__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  sqlite3 *VAR_5 = FUNC_9(VAR_2);
  char const *VAR_6 = (const char*)FUNC_12(VAR_4[0]);
  char const *VAR_7 = (const char*)FUNC_12(VAR_4[1]);
  int VAR_8 = FUNC_11(VAR_4[4]);
  int VAR_9 = (VAR_5->flags & VAR_0);


  sqlite3_xauth VAR_10 = VAR_5->xAuth;
  VAR_5->xAuth = 0;


  FUNC_0(VAR_3);
  if( VAR_6 && VAR_7 ){
    int VAR_11;
    Parse VAR_12;
    VAR_11 = FUNC_4(&VAR_12, VAR_6, 1, VAR_5, VAR_7, VAR_8);
    if( VAR_11==VAR_1 ){
      if( VAR_9==0 && VAR_12.pNewTable && VAR_12.pNewTable->pSelect ){
        NameContext VAR_13;
        FUNC_1(&VAR_13, 0, sizeof(VAR_13));
        VAR_13.pParse = &VAR_12;
        FUNC_8(&VAR_12, VAR_12.pNewTable->pSelect, &VAR_13);
        if( VAR_12.nErr ) VAR_11 = VAR_12.rc;
      }

      else if( VAR_12.pNewTrigger ){
        if( VAR_9==0 ){
          VAR_11 = FUNC_5(&VAR_12, VAR_8 ? 0 : VAR_6);
        }
        if( VAR_11==VAR_1 ){
          int VAR_14 = FUNC_7(VAR_5, VAR_12.pNewTrigger->pTabSchema);
          int VAR_15 = FUNC_6(VAR_5, VAR_6);
          if( VAR_14==VAR_15 ) FUNC_10(VAR_2, 1);
        }
      }
    }

    if( VAR_11!=VAR_1 ){
      FUNC_2(VAR_2, 1, VAR_4[2], VAR_4[3], &VAR_12);
    }
    FUNC_3(&VAR_12);
  }


  VAR_5->xAuth = VAR_10;

}
