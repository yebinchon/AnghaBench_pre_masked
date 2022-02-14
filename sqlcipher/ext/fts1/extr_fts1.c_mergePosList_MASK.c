
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_5__ {scalar_t__ iType; } ;
typedef int DocListReader ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  DocListReader *VAR_1,
  DocListReader *VAR_2,
  sqlite_int64 VAR_3,
  DocList *VAR_4
){
  int VAR_5, VAR_6 = FUNC_2(VAR_1, &VAR_5);
  int VAR_7, VAR_8 = FUNC_2(VAR_2, &VAR_7);
  int VAR_9 = 0;


  while( VAR_6!=-1 && VAR_8!=-1 ){
    if( VAR_5==VAR_7 && VAR_6+1==VAR_8 ){
      if( !VAR_9 ){
        FUNC_0(VAR_4, VAR_3);
        VAR_9 = 1;
      }
      if( VAR_4->iType>=VAR_0 ){
        FUNC_1(VAR_4, VAR_7, VAR_8);
      }
      VAR_6 = FUNC_2(VAR_1, &VAR_5);
      VAR_8 = FUNC_2(VAR_2, &VAR_7);
    }else if( VAR_7<VAR_5 ||
              (VAR_7==VAR_5 && VAR_8<VAR_6+1) ){
      VAR_8 = FUNC_2(VAR_2, &VAR_7);
    }else{
      VAR_6 = FUNC_2(VAR_1, &VAR_5);
    }
  }
  if( VAR_6>=0 ) FUNC_3(VAR_1);
  if( VAR_8>=0 ) FUNC_3(VAR_2);
}
