
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nRef; scalar_t__ id; int trace; int mutex; scalar_t__ owner; } ;
typedef TYPE_1__ sqlite3_mutex ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(sqlite3_mutex *VAR_1){
  FUNC_0( FUNC_2(VAR_1) );




  FUNC_0( VAR_1->nRef==0 || VAR_1->id==VAR_0 );






  FUNC_3(&VAR_1->mutex);







}
