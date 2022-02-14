
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nDb; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_7__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,char*,int ,int ) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(Parse *VAR_5, int VAR_6){
  sqlite3 *VAR_7;
  Vdbe *VAR_8;
  int VAR_9;

  FUNC_0( VAR_5!=0 );
  VAR_7 = VAR_5->db;
  FUNC_0( VAR_7!=0 );
  if( FUNC_1(VAR_5, VAR_2, "BEGIN", 0, 0) ){
    return;
  }
  VAR_8 = FUNC_2(VAR_5);
  if( !VAR_8 ) return;
  if( VAR_6!=VAR_3 ){
    for(VAR_9=0; VAR_9<VAR_7->nDb; VAR_9++){
      FUNC_4(VAR_8, VAR_1, VAR_9, (VAR_6==VAR_4)+1);
      FUNC_5(VAR_8, VAR_9);
    }
  }
  FUNC_3(VAR_8, VAR_0);
}
