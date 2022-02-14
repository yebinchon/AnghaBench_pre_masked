
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int for_execute; } ;
typedef TYPE_1__ acquireLocksOnSubLinks_context ;
struct TYPE_8__ {int hasSubLinks; int targetList; int rtable; } ;
typedef TYPE_2__ Query ;
typedef int Node ;
typedef scalar_t__ CmdType ;


 int FUNC_0 (TYPE_2__*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *,int ,int ,int ,int ,int ,int,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static Query *
FUNC_6(Query *VAR_6,
        Node *VAR_7,
        int VAR_8,
        CmdType VAR_9)
{

 Node *VAR_10 = FUNC_4(VAR_7);
 acquireLocksOnSubLinks_context VAR_11;

 VAR_11.for_execute = 1;







 (void) FUNC_3(VAR_10, &VAR_11);


 FUNC_1(VAR_10, VAR_3, VAR_8, 0);

 if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
  VAR_10 = FUNC_2(VAR_10,
            VAR_2,
            0,
            FUNC_5(VAR_8,
               VAR_6->rtable),
            VAR_6->targetList,
            (VAR_9 == VAR_1) ?
            VAR_4 :
            VAR_5,
            VAR_8,
            &VAR_6->hasSubLinks);

 FUNC_0(VAR_6, VAR_10);

 return VAR_6;
}
