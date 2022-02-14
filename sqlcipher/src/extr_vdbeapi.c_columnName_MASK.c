
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_stmt ;
struct TYPE_4__ {scalar_t__ mallocFailed; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {int * aColName; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;

__attribute__((used)) static const void *FUNC_7(
  sqlite3_stmt *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4
){
  const void *VAR_5;
  Vdbe *VAR_6;
  int VAR_7;
  sqlite3 *VAR_8;






  VAR_5 = 0;
  VAR_6 = (Vdbe *)VAR_1;
  VAR_8 = VAR_6->db;
  FUNC_0( VAR_8!=0 );
  VAR_7 = FUNC_2(VAR_1);
  if( VAR_2<VAR_7 && VAR_2>=0 ){
    VAR_2 += VAR_4*VAR_7;
    FUNC_3(VAR_8->mutex);
    FUNC_0( VAR_8->mallocFailed==0 );

    if( VAR_3 ){
      VAR_5 = FUNC_6((sqlite3_value*)&VAR_6->aColName[VAR_2]);
    }else

    {
      VAR_5 = FUNC_5((sqlite3_value*)&VAR_6->aColName[VAR_2]);
    }



    if( VAR_8->mallocFailed ){
      FUNC_1(VAR_8);
      VAR_5 = 0;
    }
    FUNC_4(VAR_8->mutex);
  }
  return VAR_5;
}
