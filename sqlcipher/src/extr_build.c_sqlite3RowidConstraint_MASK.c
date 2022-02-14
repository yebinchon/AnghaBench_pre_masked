
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t iPKey; int zName; TYPE_1__* aCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_9__ {int db; } ;
struct TYPE_7__ {int zName; } ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,int,char*,int ,int ) ;
 char* FUNC_1 (int ,char*,int ,...) ;

void FUNC_2(
  Parse *VAR_4,
  int VAR_5,
  Table *VAR_6
){
  char *VAR_7;
  int VAR_8;
  if( VAR_6->iPKey>=0 ){
    VAR_7 = FUNC_1(VAR_4->db, "%s.%s", VAR_6->zName,
                          VAR_6->aCol[VAR_6->iPKey].zName);
    VAR_8 = VAR_2;
  }else{
    VAR_7 = FUNC_1(VAR_4->db, "%s.rowid", VAR_6->zName);
    VAR_8 = VAR_3;
  }
  FUNC_0(VAR_4, VAR_8, VAR_5, VAR_7, VAR_0,
                        VAR_1);
}
