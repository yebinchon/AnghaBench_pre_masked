
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ commandType; int resultRelation; } ;
struct TYPE_8__ {scalar_t__ event; scalar_t__ enabled; } ;
struct TYPE_7__ {int numLocks; TYPE_2__** rules; } ;
typedef TYPE_1__ RuleLock ;
typedef TYPE_2__ RewriteRule ;
typedef TYPE_3__ Query ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ CmdType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;

__attribute__((used)) static List *
FUNC_2(CmdType VAR_8,
     RuleLock *VAR_9,
     int VAR_10,
     Query *VAR_11,
     bool *VAR_12)
{
 List *VAR_13 = VAR_2;
 int VAR_14;
 int VAR_15;

 if (VAR_9 == ((void*)0))
  return VAR_2;

 if (VAR_11->commandType != VAR_0)
 {
  if (VAR_11->resultRelation != VAR_10)
   return VAR_2;
 }

 VAR_14 = VAR_9->numLocks;

 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
 {
  RewriteRule *VAR_16 = VAR_9->rules[VAR_15];

  if (VAR_16->event == VAR_1)
   *VAR_12 = 1;







  if (VAR_16->event != VAR_0)
  {
   if (VAR_7 == VAR_6)
   {
    if (VAR_16->enabled == VAR_4 ||
     VAR_16->enabled == VAR_3)
     continue;
   }
   else
   {
    if (VAR_16->enabled == VAR_5 ||
     VAR_16->enabled == VAR_3)
     continue;
   }
  }

  if (VAR_16->event == VAR_8)
  {
   if (VAR_11->commandType != VAR_0 ||
    FUNC_1((Node *) VAR_11, VAR_10, 0))
    VAR_13 = FUNC_0(VAR_13, VAR_16);
  }
 }

 return VAR_13;
}
