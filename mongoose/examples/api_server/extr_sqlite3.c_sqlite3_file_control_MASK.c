
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pMethods; } ;
typedef TYPE_1__ sqlite3_file ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Pager ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_1__*,int,void*) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(sqlite3 *VAR_4, const char *VAR_5, int VAR_6, void *VAR_7){
  int VAR_8 = VAR_0;
  Btree *VAR_9;

  FUNC_7(VAR_4->mutex);
  VAR_9 = FUNC_4(VAR_4, VAR_5);
  if( VAR_9 ){
    Pager *VAR_10;
    sqlite3_file *VAR_11;
    FUNC_1(VAR_9);
    VAR_10 = FUNC_3(VAR_9);
    FUNC_0( VAR_10!=0 );
    VAR_11 = FUNC_6(VAR_10);
    FUNC_0( VAR_11!=0 );
    if( VAR_6==VAR_1 ){
      *(sqlite3_file**)VAR_7 = VAR_11;
      VAR_8 = VAR_3;
    }else if( VAR_11->pMethods ){
      VAR_8 = FUNC_5(VAR_11, VAR_6, VAR_7);
    }else{
      VAR_8 = VAR_2;
    }
    FUNC_2(VAR_9);
  }
  FUNC_8(VAR_4->mutex);
  return VAR_8;
}
