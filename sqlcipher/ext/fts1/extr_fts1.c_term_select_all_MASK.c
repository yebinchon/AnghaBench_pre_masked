
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {int nColumn; } ;
typedef TYPE_1__ fulltext_vtab ;
typedef int DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*,int ,int **) ;
 int FUNC_6 (TYPE_1__*,int ,int **) ;
 int FUNC_7 (int *,int,char const*,int,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(
  fulltext_vtab *VAR_6,
  int VAR_7,
  const char *VAR_8,
  int VAR_9,
  DocList *VAR_10
){
  DocList VAR_11;
  sqlite3_stmt *VAR_12;
  int VAR_13 = FUNC_5(VAR_6, VAR_5, &VAR_12);
  if( VAR_13!=VAR_2 ) return VAR_13;

  VAR_13 = FUNC_7(VAR_12, 1, VAR_8, VAR_9, VAR_4);
  if( VAR_13!=VAR_2 ) return VAR_13;

  FUNC_3(&VAR_11, VAR_0, 0, 0);


  while( (VAR_13=FUNC_6(VAR_6, VAR_5, &VAR_12))==VAR_3 ){
    DocList VAR_14;







    FUNC_3(&VAR_14, VAR_0,
                FUNC_8(VAR_12, 0), FUNC_9(VAR_12, 0));

    if( VAR_7<VAR_6->nColumn ){
      FUNC_4(&VAR_14, VAR_7);
    }




    FUNC_0(&VAR_14, &VAR_11);
    FUNC_1(&VAR_11);
    VAR_11 = VAR_14;
  }
  if( VAR_13!=VAR_1 ){
    FUNC_1(&VAR_11);
    return VAR_13;
  }

  FUNC_2(&VAR_11);
  *VAR_10 = VAR_11;
  return VAR_2;
}
