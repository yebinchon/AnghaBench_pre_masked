
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ query_depth; scalar_t__ maxquerydepth; } ;
struct TYPE_4__ {int before_trig_done; } ;
typedef int Oid ;
typedef int CmdType ;
typedef TYPE_1__ AfterTriggersTableData ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static bool
FUNC_3(Oid VAR_2, CmdType VAR_3)
{
 bool VAR_4;
 AfterTriggersTableData *VAR_5;


 if (VAR_1.query_depth < 0)
  FUNC_2(VAR_0, "before_stmt_triggers_fired() called outside of query");


 if (VAR_1.query_depth >= VAR_1.maxquerydepth)
  FUNC_0();
 VAR_5 = FUNC_1(VAR_2, VAR_3);
 VAR_4 = VAR_5->before_trig_done;
 VAR_5->before_trig_done = 1;
 return VAR_4;
}
