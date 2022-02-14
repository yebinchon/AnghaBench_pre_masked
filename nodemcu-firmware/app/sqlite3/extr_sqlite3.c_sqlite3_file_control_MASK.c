
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_vfs ;
struct TYPE_9__ {scalar_t__ pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_10__ {int mutex; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Pager ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_1__*,int,void*) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

int FUNC_12(sqlite3 *VAR_7, const char *VAR_8, int VAR_9, void *VAR_10){
  int VAR_11 = VAR_0;
  Btree *VAR_12;




  FUNC_10(VAR_7->mutex);
  VAR_12 = FUNC_4(VAR_7, VAR_8);
  if( VAR_12 ){
    Pager *VAR_13;
    sqlite3_file *VAR_14;
    FUNC_1(VAR_12);
    VAR_13 = FUNC_3(VAR_12);
    FUNC_0( VAR_13!=0 );
    VAR_14 = FUNC_6(VAR_13);
    FUNC_0( VAR_14!=0 );
    if( VAR_9==VAR_1 ){
      *(sqlite3_file**)VAR_10 = VAR_14;
      VAR_11 = VAR_6;
    }else if( VAR_9==VAR_3 ){
      *(sqlite3_vfs**)VAR_10 = FUNC_8(VAR_13);
      VAR_11 = VAR_6;
    }else if( VAR_9==VAR_2 ){
      *(sqlite3_file**)VAR_10 = FUNC_7(VAR_13);
      VAR_11 = VAR_6;
    }else if( VAR_14->pMethods ){
      VAR_11 = FUNC_5(VAR_14, VAR_9, VAR_10);
    }else{
      VAR_11 = VAR_5;
    }
    FUNC_2(VAR_12);
  }
  FUNC_11(VAR_7->mutex);
  return VAR_11;
}
