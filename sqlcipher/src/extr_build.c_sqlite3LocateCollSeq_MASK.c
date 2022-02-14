
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int busy; } ;
struct TYPE_14__ {TYPE_1__ init; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_16__ {int xCmp; } ;
struct TYPE_15__ {TYPE_2__* db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ CollSeq ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ,char const*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ,TYPE_4__*,char const*) ;

CollSeq *FUNC_3(Parse *VAR_0, const char *VAR_1){
  sqlite3 *VAR_2 = VAR_0->db;
  u8 VAR_3 = FUNC_0(VAR_2);
  u8 VAR_4 = VAR_2->init.busy;
  CollSeq *VAR_5;

  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1, VAR_4);
  if( !VAR_4 && (!VAR_5 || !VAR_5->xCmp) ){
    VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_5, VAR_1);
  }

  return VAR_5;
}
