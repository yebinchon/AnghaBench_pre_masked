
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int magic; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_12__ {int pSqllogArg; int (* xSqllog ) (int ,TYPE_1__*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 TYPE_6__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_9(sqlite3 *VAR_5, int VAR_6){
  if( !VAR_5 ){
    return VAR_3;
  }
  if( !FUNC_4(VAR_5) ){
    return VAR_2;
  }
  FUNC_6(VAR_5->mutex);


  FUNC_1(VAR_5);
  FUNC_5(VAR_5);




  if( !VAR_6 && FUNC_0(VAR_5) ){
    FUNC_2(VAR_5, VAR_0, "unable to close due to unfinalized "
       "statements or unfinished backups");
    FUNC_7(VAR_5->mutex);
    return VAR_0;
  }
  VAR_5->magic = VAR_1;
  FUNC_3(VAR_5);
  return VAR_3;
}
