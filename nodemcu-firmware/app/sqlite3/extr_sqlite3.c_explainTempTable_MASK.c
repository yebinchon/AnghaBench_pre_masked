
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
 char* FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(Parse *VAR_2, const char *VAR_3){
  if( VAR_2->explain==2 ){
    Vdbe *VAR_4 = VAR_2->pVdbe;
    char *VAR_5 = FUNC_0(VAR_2->db, "USE TEMP B-TREE FOR %s", VAR_3);
    FUNC_1(VAR_4, VAR_0, VAR_2->iSelectId, 0, 0, VAR_5, VAR_1);
  }
}
