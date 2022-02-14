
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Table ;
struct TYPE_8__ {TYPE_1__* pFrom; struct TYPE_8__* pNextTo; } ;
struct TYPE_7__ {int db; } ;
struct TYPE_6__ {int zName; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ FKey ;


 TYPE_3__* FUNC_0 (int *) ;
 char* FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_2(Parse *VAR_0, Table *VAR_1){
  FKey *VAR_2;
  char *VAR_3 = 0;
  for(VAR_2=FUNC_0(VAR_1); VAR_2; VAR_2=VAR_2->pNextTo){
    VAR_3 = FUNC_1(VAR_0->db, VAR_3, VAR_2->pFrom->zName);
  }
  return VAR_3;
}
