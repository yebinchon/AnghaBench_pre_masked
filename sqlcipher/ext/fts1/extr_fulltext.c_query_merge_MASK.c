
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int fulltext_vtab ;
struct TYPE_9__ {int nData; } ;
typedef int DocListMerge ;
typedef TYPE_1__ DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,int,int **) ;

__attribute__((used)) static int FUNC_8(fulltext_vtab *VAR_4, sqlite3_stmt **VAR_5,
                       const char *VAR_6,
                       DocList *VAR_7, int VAR_8, DocList *VAR_9){
  int VAR_10;
  DocListMerge VAR_11;

  if( VAR_7!=((void*)0) && !VAR_7->nData ){


      return VAR_2;
  }

  VAR_10 = FUNC_7(VAR_4, VAR_6, -1, VAR_5);
  if( VAR_10!=VAR_3 && VAR_10!=VAR_1 ) return VAR_10;

  FUNC_3(&VAR_11, VAR_7, VAR_8, VAR_9);
  while( VAR_10==VAR_3 ){
    DocList VAR_12;
    FUNC_1(&VAR_12, VAR_0,
                FUNC_4(*VAR_5, 0),
                FUNC_5(*VAR_5, 0));
    FUNC_2(&VAR_11, &VAR_12);
    FUNC_0(&VAR_12);

    VAR_10 = FUNC_6(*VAR_5);
    if( VAR_10!=VAR_3 && VAR_10!=VAR_1 ){
      return VAR_10;
    }
  }

  return VAR_2;
}
