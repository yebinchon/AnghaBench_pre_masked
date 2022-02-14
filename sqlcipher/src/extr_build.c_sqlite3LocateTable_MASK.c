
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int mDbFlags; int aModule; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Table ;
struct TYPE_14__ {int * pEpoTab; } ;
struct TYPE_13__ {scalar_t__ disableVtab; int checkSchema; TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Module ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,char const*,char const*,...) ;
 int * FUNC_2 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

Table *FUNC_8(
  Parse *VAR_4,
  u32 VAR_5,
  const char *VAR_6,
  const char *VAR_7
){
  Table *VAR_8;
  sqlite3 *VAR_9 = VAR_4->db;



  if( (VAR_9->mDbFlags & VAR_0)==0
   && VAR_3!=FUNC_5(VAR_4)
  ){
    return 0;
  }

  VAR_8 = FUNC_2(VAR_9, VAR_6, VAR_7);
  if( VAR_8==0 ){




    if( VAR_4->disableVtab==0 ){
      Module *VAR_10 = (Module*)FUNC_3(&VAR_9->aModule, VAR_6);
      if( VAR_10==0 && FUNC_7(VAR_6, "pragma_", 7)==0 ){
        VAR_10 = FUNC_4(VAR_9, VAR_6);
      }
      if( VAR_10 && FUNC_6(VAR_4, VAR_10) ){
        return VAR_10->pEpoTab;
      }
    }

    if( VAR_5 & VAR_1 ) return 0;
    VAR_4->checkSchema = 1;
  }else if( FUNC_0(VAR_8) && VAR_4->disableVtab ){
    VAR_8 = 0;
  }

  if( VAR_8==0 ){
    const char *VAR_11 = VAR_5 & VAR_2 ? "no such view" : "no such table";
    if( VAR_7 ){
      FUNC_1(VAR_4, "%s: %s.%s", VAR_11, VAR_7, VAR_6);
    }else{
      FUNC_1(VAR_4, "%s: %s", VAR_11, VAR_6);
    }
  }

  return VAR_8;
}
