
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int tabFlags; int zName; } ;
typedef TYPE_2__ Table ;
struct TYPE_9__ {TYPE_1__* db; } ;
struct TYPE_7__ {int flags; scalar_t__ nVdbeExec; } ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(Parse *VAR_2, Table *VAR_3){
  if( 0==FUNC_1(VAR_3->zName, "sqlite_", 7)

   || ( (VAR_3->tabFlags & VAR_1)
     && (VAR_2->db->flags & VAR_0)
     && VAR_2->db->nVdbeExec==0
   )

  ){
    FUNC_0(VAR_2, "table %s may not be altered", VAR_3->zName);
    return 1;
  }
  return 0;
}
