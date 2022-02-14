
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_12__ {scalar_t__ nData; } ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__*,char const*,int,int,TYPE_1__*) ;
 int FUNC_6 (int *,char const*,int,int,scalar_t__*,TYPE_1__*) ;
 int FUNC_7 (int *,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(fulltext_vtab *VAR_6, const char *VAR_7, int VAR_8,
                             DocList *VAR_9){
  sqlite_int64 VAR_10;
  DocList VAR_11;
  int VAR_12 = 0, VAR_13;

  VAR_13 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_12, &VAR_10, &VAR_11);
  if( VAR_13==VAR_2 ){
    FUNC_2(&VAR_11, VAR_1, 0, 0);
    FUNC_3(&VAR_11, VAR_9);

    VAR_13 = FUNC_5(VAR_6, ((void*)0), VAR_7, VAR_8, VAR_12, &VAR_11);
    goto err;
  }
  if( VAR_13!=VAR_5 ) return VAR_3;

  FUNC_3(&VAR_11, VAR_9);
  if( VAR_11.nData<=VAR_0 ){
    VAR_13 = FUNC_7(VAR_6, VAR_10, &VAR_11);
    goto err;
  }




  VAR_13 = FUNC_4(VAR_6, VAR_10);
  if( VAR_13!=VAR_4 ) goto err;





  VAR_12++;
  while( (VAR_13=FUNC_5(VAR_6, &VAR_10, VAR_7, VAR_8, VAR_12,
                         &VAR_11))!=VAR_4 ){
    sqlite_int64 VAR_14;
    DocList VAR_15;
    int VAR_16;




    VAR_16 = FUNC_6(VAR_6, VAR_7, VAR_8, VAR_12, &VAR_14, &VAR_15);
    if( VAR_16!=VAR_5 ) goto err;

    VAR_13 = FUNC_4(VAR_6, VAR_14);
    if( VAR_13!=VAR_4 ) goto err;


    if( VAR_14<VAR_10 ) VAR_10 = VAR_14;




    FUNC_0(&VAR_15, &VAR_11);
    FUNC_1(&VAR_11);
    VAR_11 = VAR_15;

    VAR_12++;
  }

 err:
  FUNC_1(&VAR_11);
  return VAR_13;
}
