
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nowait; int ancestor_views; int viewoid; int viewowner; int lockmode; } ;
struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {int relowner; } ;
typedef TYPE_2__* Relation ;
typedef int Query ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_3__ LockViewRecurse_context ;
typedef int List ;
typedef int LOCKMODE ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(Oid VAR_1, LOCKMODE VAR_2, bool VAR_3, List *VAR_4)
{
 LockViewRecurse_context VAR_5;

 Relation VAR_6;
 Query *VAR_7;

 VAR_6 = FUNC_5(VAR_1, VAR_0);
 VAR_7 = FUNC_1(VAR_6);

 VAR_5.lockmode = VAR_2;
 VAR_5.nowait = VAR_3;
 VAR_5.viewowner = VAR_6->rd_rel->relowner;
 VAR_5.viewoid = VAR_1;
 VAR_5.ancestor_views = FUNC_2(VAR_4, VAR_1);

 FUNC_0((Node *) VAR_7, &VAR_5);

 (void) FUNC_3(VAR_5.ancestor_views);

 FUNC_4(VAR_6, VAR_0);
}
