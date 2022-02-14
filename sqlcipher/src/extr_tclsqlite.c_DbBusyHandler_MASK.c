
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zVal ;
struct TYPE_2__ {int interp; int zBusy; } ;
typedef TYPE_1__ SqliteDb ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*,char*,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, int VAR_2){
  SqliteDb *VAR_3 = (SqliteDb*)VAR_1;
  int VAR_4;
  char VAR_5[30];

  FUNC_3(sizeof(VAR_5), VAR_5, "%d", VAR_2);
  VAR_4 = FUNC_1(VAR_3->interp, VAR_3->zBusy, " ", VAR_5, (char*)0);
  if( VAR_4!=VAR_0 || FUNC_2(FUNC_0(VAR_3->interp)) ){
    return 0;
  }
  return 1;
}
