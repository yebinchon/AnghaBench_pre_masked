
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_7__ {scalar_t__ iType; } ;
typedef int DocListReader ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(
  DocList *VAR_1,
  DocList *VAR_2,
  DocList *VAR_3
){
  DocListReader VAR_4, VAR_5;
  sqlite_int64 VAR_6, VAR_7;

  FUNC_0( VAR_3->iType<VAR_0 );

  FUNC_3(&VAR_4, VAR_1);
  FUNC_3(&VAR_5, VAR_2);
  VAR_6 = FUNC_2(&VAR_4);
  VAR_7 = FUNC_2(&VAR_5);

  while( VAR_6>0 && VAR_7>0 ){
    if( VAR_6<VAR_7 ){
      VAR_6 = FUNC_2(&VAR_4);
    }else if( VAR_7<VAR_6 ){
      VAR_7 = FUNC_2(&VAR_5);
    }else{
      FUNC_1(VAR_3, VAR_6);
      VAR_6 = FUNC_2(&VAR_4);
      VAR_7 = FUNC_2(&VAR_5);
    }
  }
}
