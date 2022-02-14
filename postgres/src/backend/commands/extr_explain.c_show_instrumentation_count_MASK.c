
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ format; int analyze; } ;
struct TYPE_8__ {TYPE_1__* instrument; } ;
struct TYPE_7__ {double nfiltered2; double nfiltered1; double nloops; } ;
typedef TYPE_2__ PlanState ;
typedef TYPE_3__ ExplainState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*,int *,double,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, int VAR_2,
         PlanState *VAR_3, ExplainState *VAR_4)
{
 double VAR_5;
 double VAR_6;

 if (!VAR_4->analyze || !VAR_3->instrument)
  return;

 if (VAR_2 == 2)
  VAR_5 = VAR_3->instrument->nfiltered2;
 else
  VAR_5 = VAR_3->instrument->nfiltered1;
 VAR_6 = VAR_3->instrument->nloops;


 if (VAR_5 > 0 || VAR_4->format != VAR_0)
 {
  if (VAR_6 > 0)
   FUNC_0(VAR_1, ((void*)0), VAR_5 / VAR_6, 0, VAR_4);
  else
   FUNC_0(VAR_1, ((void*)0), 0.0, 0, VAR_4);
 }
}
