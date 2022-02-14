
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nRowEst; int zName; } ;
typedef TYPE_1__ Table ;
struct TYPE_9__ {char* zName; } ;
struct TYPE_8__ {int explain; int iSelectId; int pVdbe; int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,int ,char*,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_2,
  Table *VAR_3,
  Index *VAR_4
){
  if( VAR_2->explain==2 ){
    char *VAR_5 = FUNC_0(VAR_2->db, "SCAN TABLE %s %s%s(~%d rows)",
        VAR_3->zName,
        VAR_4 ? "USING COVERING INDEX " : "",
        VAR_4 ? VAR_4->zName : "",
        VAR_3->nRowEst
    );
    FUNC_1(
        VAR_2->pVdbe, VAR_0, VAR_2->iSelectId, 0, 0, VAR_5, VAR_1
    );
  }
}
