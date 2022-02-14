
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int subxacts; int nsubxacts; int xnodes; int nrels; int twophase_xid; } ;
typedef TYPE_1__ xl_xact_parsed_abort ;
struct TYPE_7__ {int xact_time; } ;
typedef TYPE_2__ xl_xact_abort ;
typedef int uint8 ;
typedef int StringInfo ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_0, uint8 VAR_1, xl_xact_abort *VAR_2)
{
 xl_xact_parsed_abort VAR_3;

 FUNC_0(VAR_1, VAR_2, &VAR_3);


 if (FUNC_1(VAR_3.twophase_xid))
  FUNC_2(VAR_0, "%u: ", VAR_3.twophase_xid);

 FUNC_3(VAR_0, FUNC_4(VAR_2->xact_time));

 FUNC_5(VAR_0, "rels", VAR_3.nrels, VAR_3.xnodes);
 FUNC_6(VAR_0, VAR_3.nsubxacts, VAR_3.subxacts);
}
