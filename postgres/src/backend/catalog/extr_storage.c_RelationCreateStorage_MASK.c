
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int atCommit; struct TYPE_10__* next; int nestLevel; int backend; int relnode; } ;
struct TYPE_8__ {int node; } ;
struct TYPE_9__ {TYPE_1__ smgr_rnode; } ;
typedef TYPE_2__* SMgrRelation ;
typedef int RelFileNode ;
typedef TYPE_3__ PendingRelDelete ;
typedef int BackendId ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int) ;



 int VAR_3 ;
 int FUNC_3 (int ,char*,char) ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_6 (int ,int ) ;

SMgrRelation
FUNC_7(RelFileNode VAR_5, char VAR_6)
{
 PendingRelDelete *VAR_7;
 SMgrRelation VAR_8;
 BackendId VAR_9;
 bool VAR_10;

 switch (VAR_6)
 {
  case 129:
   VAR_9 = FUNC_0();
   VAR_10 = 0;
   break;
  case 128:
   VAR_9 = VAR_1;
   VAR_10 = 0;
   break;
  case 130:
   VAR_9 = VAR_1;
   VAR_10 = 1;
   break;
  default:
   FUNC_3(VAR_0, "invalid relpersistence: %c", VAR_6);
   return ((void*)0);
 }

 VAR_8 = FUNC_6(VAR_5, VAR_9);
 FUNC_5(VAR_8, VAR_2, 0);

 if (VAR_10)
  FUNC_4(&VAR_8->smgr_rnode.node, VAR_2);


 VAR_7 = (PendingRelDelete *)
  FUNC_2(VAR_3, sizeof(PendingRelDelete));
 VAR_7->relnode = VAR_5;
 VAR_7->backend = VAR_9;
 VAR_7->atCommit = 0;
 VAR_7->nestLevel = FUNC_1();
 VAR_7->next = VAR_4;
 VAR_4 = VAR_7;

 return VAR_8;
}
