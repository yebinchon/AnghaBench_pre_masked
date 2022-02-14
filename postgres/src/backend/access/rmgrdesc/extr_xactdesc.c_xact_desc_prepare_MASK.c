
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int initfileinval; } ;
typedef TYPE_1__ xl_xact_prepare ;
struct TYPE_7__ {int tsId; int dbId; int msgs; int nmsgs; int subxacts; int nsubxacts; int abortnodes; int nabortrels; int xnodes; int nrels; int xact_time; int twophase_gid; } ;
typedef TYPE_2__ xl_xact_parsed_prepare ;
typedef int uint8 ;
typedef int StringInfo ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(StringInfo VAR_0, uint8 VAR_1, xl_xact_prepare *VAR_2)
{
 xl_xact_parsed_prepare VAR_3;

 FUNC_0(VAR_1, VAR_2, &VAR_3);

 FUNC_1(VAR_0, "gid %s: ", VAR_3.twophase_gid);
 FUNC_2(VAR_0, FUNC_4(VAR_3.xact_time));

 FUNC_5(VAR_0, "rels(commit)", VAR_3.nrels, VAR_3.xnodes);
 FUNC_5(VAR_0, "rels(abort)", VAR_3.nabortrels,
      VAR_3.abortnodes);
 FUNC_6(VAR_0, VAR_3.nsubxacts, VAR_3.subxacts);

 FUNC_3(
      VAR_0, VAR_3.nmsgs, VAR_3.msgs, VAR_3.dbId, VAR_3.tsId,
      VAR_2->initfileinval);
}
