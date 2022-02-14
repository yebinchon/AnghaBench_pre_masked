
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_5__ {scalar_t__ db; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,char*,int ,int ) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int,int) ;

void FUNC_4(Parse *VAR_5, int VAR_6){
  Vdbe *VAR_7;
  int VAR_8;

  FUNC_0( VAR_5!=0 );
  FUNC_0( VAR_5->db!=0 );
  FUNC_0( VAR_6==VAR_2 || VAR_6==VAR_3 || VAR_6==VAR_4 );
  VAR_8 = VAR_6==VAR_4;
  if( FUNC_1(VAR_5, VAR_1,
       VAR_8 ? "ROLLBACK" : "COMMIT", 0, 0) ){
    return;
  }
  VAR_7 = FUNC_2(VAR_5);
  if( VAR_7 ){
    FUNC_3(VAR_7, VAR_0, 1, VAR_8);
  }
}
