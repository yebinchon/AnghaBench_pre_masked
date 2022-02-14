
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nsubxacts; int ncommitrels; int nabortrels; int ninvalmsgs; int gidlen; int database; int xid; int origin_timestamp; int origin_lsn; int prepared_at; } ;
typedef TYPE_1__ xl_xact_prepare ;
struct TYPE_7__ {int nsubxacts; int nrels; int nabortrels; int nmsgs; int * msgs; int * abortnodes; int * xnodes; int * subxacts; int twophase_gid; int dbId; int twophase_xid; int origin_timestamp; int origin_lsn; int xact_time; } ;
typedef TYPE_2__ xl_xact_parsed_prepare ;
typedef int uint8 ;
typedef int TransactionId ;
typedef int SharedInvalidationMessage ;
typedef int RelFileNode ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

void
FUNC_3(uint8 VAR_0, xl_xact_prepare *VAR_1, xl_xact_parsed_prepare *VAR_2)
{
 char *VAR_3;

 VAR_3 = ((char *) VAR_1) + FUNC_0(sizeof(xl_xact_prepare));

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->xact_time = VAR_1->prepared_at;
 VAR_2->origin_lsn = VAR_1->origin_lsn;
 VAR_2->origin_timestamp = VAR_1->origin_timestamp;
 VAR_2->twophase_xid = VAR_1->xid;
 VAR_2->dbId = VAR_1->database;
 VAR_2->nsubxacts = VAR_1->nsubxacts;
 VAR_2->nrels = VAR_1->ncommitrels;
 VAR_2->nabortrels = VAR_1->nabortrels;
 VAR_2->nmsgs = VAR_1->ninvalmsgs;

 FUNC_2(VAR_2->twophase_gid, VAR_3, VAR_1->gidlen);
 VAR_3 += FUNC_0(VAR_1->gidlen);

 VAR_2->subxacts = (TransactionId *) VAR_3;
 VAR_3 += FUNC_0(VAR_1->nsubxacts * sizeof(TransactionId));

 VAR_2->xnodes = (RelFileNode *) VAR_3;
 VAR_3 += FUNC_0(VAR_1->ncommitrels * sizeof(RelFileNode));

 VAR_2->abortnodes = (RelFileNode *) VAR_3;
 VAR_3 += FUNC_0(VAR_1->nabortrels * sizeof(RelFileNode));

 VAR_2->msgs = (SharedInvalidationMessage *) VAR_3;
 VAR_3 += FUNC_0(VAR_1->ninvalmsgs * sizeof(SharedInvalidationMessage));
}
