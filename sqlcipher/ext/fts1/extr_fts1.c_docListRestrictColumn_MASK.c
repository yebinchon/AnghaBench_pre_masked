
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_8__ {scalar_t__ iType; } ;
typedef int DocListReader ;
typedef TYPE_1__ DocList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(DocList *VAR_1, int VAR_2){
  DocListReader VAR_3;
  DocList VAR_4;

  FUNC_0( VAR_1->iType>=VAR_0 );
  FUNC_8(&VAR_3, VAR_1);
  FUNC_5(&VAR_4, VAR_0, ((void*)0), 0);

  while( !FUNC_1(&VAR_3) ){
    sqlite_int64 VAR_5 = FUNC_6(&VAR_3);
    int VAR_6, VAR_7;

    FUNC_2(&VAR_4, VAR_5);
    while( (VAR_6 = FUNC_7(&VAR_3, &VAR_7)) != -1 ){
      if( VAR_7==VAR_2 ){
        FUNC_3(&VAR_4, VAR_7, VAR_6);
      }
    }
  }

  FUNC_4(VAR_1);
  *VAR_1 = VAR_4;
}
