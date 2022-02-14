
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_11__ {double total; int bufusage; } ;
struct TYPE_10__ {TYPE_7__* totaltime; TYPE_1__* estate; TYPE_2__* plannedstmt; int sourceText; } ;
struct TYPE_9__ {scalar_t__ queryId; int stmt_len; int stmt_location; } ;
struct TYPE_8__ {int es_processed; } ;
typedef TYPE_3__ QueryDesc ;


 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,int ,int ,double,int ,int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_6(QueryDesc *VAR_0)
{
 uint64 VAR_1 = VAR_0->plannedstmt->queryId;

 if (VAR_1 != FUNC_1(0) && VAR_0->totaltime && FUNC_2())
 {




  FUNC_0(VAR_0->totaltime);

  FUNC_3(VAR_0->sourceText,
       VAR_1,
       VAR_0->plannedstmt->stmt_location,
       VAR_0->plannedstmt->stmt_len,
       VAR_0->totaltime->total * 1000.0,
       VAR_0->estate->es_processed,
       &VAR_0->totaltime->bufusage,
       ((void*)0));
 }

 if (&FUNC_4)
  FUNC_4(VAR_0);
 else
  FUNC_5(VAR_0);
}
