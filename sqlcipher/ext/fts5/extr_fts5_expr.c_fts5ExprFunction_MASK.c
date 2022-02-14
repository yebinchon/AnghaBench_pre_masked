
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
struct TYPE_14__ {scalar_t__ xNext; } ;
struct TYPE_13__ {int nCol; } ;
struct TYPE_12__ {TYPE_9__* pRoot; } ;
typedef int Fts5Global ;
typedef TYPE_1__ Fts5Expr ;
typedef TYPE_2__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_2__*,TYPE_9__*) ;
 char* FUNC_1 (TYPE_2__*,char const*,TYPE_9__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *,int,char const**,TYPE_2__**,char**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int ,char const*,TYPE_1__**,char**) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (int) ;
 char* FUNC_9 (char*,...) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int,int ) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5,
  int VAR_6
){
  Fts5Global *VAR_7 = (Fts5Global*)FUNC_14(VAR_3);
  sqlite3 *VAR_8 = FUNC_6(VAR_3);
  const char *VAR_9 = 0;
  char *VAR_10 = 0;
  Fts5Expr *VAR_11 = 0;
  int VAR_12;
  int VAR_13;

  const char **VAR_14;
  const char *VAR_15 = "nearset";
  int VAR_16;
  Fts5Config *VAR_17 = 0;
  int VAR_18 = 1;

  if( VAR_4<1 ){
    VAR_10 = FUNC_9("wrong number of arguments to function %s",
        VAR_6 ? "fts5_expr_tcl" : "fts5_expr"
    );
    FUNC_10(VAR_3, VAR_10, -1);
    FUNC_7(VAR_10);
    return;
  }

  if( VAR_6 && VAR_4>1 ){
    VAR_15 = (const char*)FUNC_15(VAR_5[1]);
    VAR_18 = 2;
  }

  VAR_16 = 3 + (VAR_4-VAR_18);
  VAR_14 = (const char**)FUNC_8(sizeof(char*) * VAR_16);
  if( VAR_14==0 ){
    FUNC_12(VAR_3);
    return;
  }
  VAR_14[0] = 0;
  VAR_14[1] = "main";
  VAR_14[2] = "tbl";
  for(VAR_13=3; VAR_18<VAR_4; VAR_18++){
    VAR_14[VAR_13++] = (const char*)FUNC_15(VAR_5[VAR_18]);
  }

  VAR_9 = (const char*)FUNC_15(VAR_5[0]);

  VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_16, VAR_14, &VAR_17, &VAR_10);
  if( VAR_12==VAR_1 ){
    VAR_12 = FUNC_5(VAR_17, VAR_17->nCol, VAR_9, &VAR_11, &VAR_10);
  }
  if( VAR_12==VAR_1 ){
    char *VAR_19;
    if( VAR_11->pRoot->xNext==0 ){
      VAR_19 = FUNC_9("");
    }else if( VAR_6 ){
      VAR_19 = FUNC_1(VAR_17, VAR_15, VAR_11->pRoot);
    }else{
      VAR_19 = FUNC_0(VAR_17, VAR_11->pRoot);
    }
    if( VAR_19==0 ){
      VAR_12 = VAR_0;
    }else{
      FUNC_13(VAR_3, VAR_19, -1, VAR_2);
      FUNC_7(VAR_19);
    }
  }

  if( VAR_12!=VAR_1 ){
    if( VAR_10 ){
      FUNC_10(VAR_3, VAR_10, -1);
      FUNC_7(VAR_10);
    }else{
      FUNC_11(VAR_3, VAR_12);
    }
  }
  FUNC_7((void *)VAR_14);
  FUNC_2(VAR_17);
  FUNC_4(VAR_11);
}
