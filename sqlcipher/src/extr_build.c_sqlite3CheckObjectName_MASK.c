
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int busy; } ;
struct TYPE_8__ {TYPE_1__ init; } ;
struct TYPE_7__ {scalar_t__ nested; TYPE_3__* db; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

int FUNC_3(Parse *VAR_2, const char *VAR_3){
  if( !VAR_2->db->init.busy && VAR_2->nested==0
          && FUNC_2(VAR_2->db)==0
          && 0==FUNC_1(VAR_3, "sqlite_", 7) ){
    FUNC_0(VAR_2, "object name reserved for internal use: %s", VAR_3);
    return VAR_0;
  }
  return VAR_1;
}
