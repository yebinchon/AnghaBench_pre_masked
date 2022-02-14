
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_12__ {char** pzErrmsg; } ;
struct TYPE_10__ {int pIndex; TYPE_3__* pConfig; } ;
struct TYPE_11__ {TYPE_1__ p; int pStorage; int * pGlobal; } ;
typedef int Fts5Global ;
typedef TYPE_2__ Fts5FullTable ;
typedef TYPE_3__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *,int,char const**,TYPE_3__**,char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int,int *,char**) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int*,int) ;
 int FUNC_9 (TYPE_3__*,int ,int,int *,char**) ;

__attribute__((used)) static int FUNC_10(
  int VAR_2,
  sqlite3 *VAR_3,
  void *VAR_4,
  int VAR_5,
  const char * const *VAR_6,
  sqlite3_vtab **VAR_7,
  char **VAR_8
){
  Fts5Global *VAR_9 = (Fts5Global*)VAR_4;
  const char **VAR_10 = (const char**)VAR_6;
  int VAR_11 = VAR_1;
  Fts5Config *VAR_12 = 0;
  Fts5FullTable *VAR_13 = 0;


  VAR_13 = (Fts5FullTable*)FUNC_8(&VAR_11, sizeof(Fts5FullTable));
  if( VAR_11==VAR_1 ){
    VAR_11 = FUNC_4(VAR_9, VAR_3, VAR_5, VAR_10, &VAR_12, VAR_8);
    FUNC_0( (VAR_11==VAR_1 && *VAR_8==0) || VAR_12==0 );
  }
  if( VAR_11==VAR_1 ){
    VAR_13->p.pConfig = VAR_12;
    VAR_13->pGlobal = VAR_9;
  }


  if( VAR_11==VAR_1 ){
    VAR_11 = FUNC_6(VAR_12, VAR_2, &VAR_13->p.pIndex, VAR_8);
  }


  if( VAR_11==VAR_1 ){
    VAR_11 = FUNC_9(
        VAR_12, VAR_13->p.pIndex, VAR_2, &VAR_13->pStorage, VAR_8
    );
  }


  if( VAR_11==VAR_1 ){
    VAR_11 = FUNC_3(VAR_12);
  }


  if( VAR_11==VAR_1 ){
    FUNC_0( VAR_12->pzErrmsg==0 );
    VAR_12->pzErrmsg = VAR_8;
    VAR_11 = FUNC_5(VAR_13->p.pIndex);
    FUNC_7(VAR_13->p.pIndex);
    VAR_12->pzErrmsg = 0;
  }

  if( VAR_11!=VAR_1 ){
    FUNC_2(VAR_13);
    VAR_13 = 0;
  }else if( VAR_2 ){
    FUNC_1(VAR_13, VAR_0, 0);
  }
  *VAR_7 = (sqlite3_vtab*)VAR_13;
  return VAR_11;
}
