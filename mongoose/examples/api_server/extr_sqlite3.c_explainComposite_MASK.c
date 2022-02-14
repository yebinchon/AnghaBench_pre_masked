
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_3__ {int explain; int iSelectId; int db; int * pVdbe; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,char*,int,int,char*,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(
  Parse *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10
){
  FUNC_0( VAR_7==VAR_5 || VAR_7==VAR_3 || VAR_7==VAR_4 || VAR_7==VAR_2 );
  if( VAR_6->explain==2 ){
    Vdbe *VAR_11 = VAR_6->pVdbe;
    char *VAR_12 = FUNC_2(
        VAR_6->db, "COMPOUND SUBQUERIES %d AND %d %s(%s)", VAR_8, VAR_9,
        VAR_10?"USING TEMP B-TREE ":"", FUNC_1(VAR_7)
    );
    FUNC_3(VAR_11, VAR_0, VAR_6->iSelectId, 0, 0, VAR_12, VAR_1);
  }
}
