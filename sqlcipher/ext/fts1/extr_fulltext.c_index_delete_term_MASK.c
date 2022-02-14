
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int fulltext_vtab ;
struct TYPE_6__ {scalar_t__ nData; } ;
typedef TYPE_1__ DocList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int *,char const*,int,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*,int,int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(fulltext_vtab *VAR_3, const char *VAR_4, int VAR_5,
                             sqlite_int64 VAR_6){
  sqlite_int64 VAR_7;
  sqlite_int64 VAR_8;
  DocList VAR_9;

  int VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7);
  if( VAR_10!=VAR_2 ) return VAR_0;

  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7, &VAR_8, &VAR_9);
  if( VAR_10!=VAR_1 ) return VAR_10;

  if( FUNC_1(&VAR_9, VAR_6, ((void*)0)) ){
    if( VAR_9.nData>0 ){
      VAR_10 = FUNC_5(VAR_3, VAR_8, &VAR_9);
    } else {
      VAR_10 = FUNC_3(VAR_3, VAR_8);
    }
  }
  FUNC_0(&VAR_9);
  return VAR_10;
}
