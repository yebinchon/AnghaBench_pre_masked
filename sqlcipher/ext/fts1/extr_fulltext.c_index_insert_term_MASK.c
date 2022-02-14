
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_13__ {scalar_t__ nData; } ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char const*,int,int ,int *) ;
 int FUNC_6 (int *,char const*,int,int ,TYPE_1__*) ;
 int FUNC_7 (int *,char const*,int,int ,int *,TYPE_1__*) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(fulltext_vtab *VAR_6, const char *VAR_7, int VAR_8,
                             sqlite_int64 VAR_9, DocList *VAR_10){
  sqlite_int64 VAR_11;
  sqlite_int64 VAR_12;
  DocList VAR_13;

  int VAR_14 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, &VAR_11);
  if( VAR_14==VAR_2 ){
    FUNC_1(&VAR_13, VAR_1, 0, 0);
    if( FUNC_3(&VAR_13, VAR_9, VAR_10) ){
      VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9, &VAR_13);
      FUNC_0(&VAR_13);
      return VAR_14;
    }
    return VAR_4;
  }
  if( VAR_14!=VAR_5 ) return VAR_3;



  VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_11, &VAR_12, &VAR_13);
  if( VAR_14!=VAR_4 ) return VAR_14;

  if( FUNC_3(&VAR_13, VAR_9, VAR_10) ){

    if( VAR_13.nData>VAR_0 ){
      DocList VAR_15;
      if( FUNC_2(&VAR_13, &VAR_15) ){
        VAR_14 = FUNC_6(VAR_6, VAR_7, VAR_8, FUNC_4(&VAR_15), &VAR_15);
        FUNC_0(&VAR_15);
        if( VAR_14!=VAR_4 ) goto err;
      }
    }
    VAR_14 = FUNC_8(VAR_6, VAR_12, &VAR_13);
  }

err:
  FUNC_0(&VAR_13);
  return VAR_14;
}
