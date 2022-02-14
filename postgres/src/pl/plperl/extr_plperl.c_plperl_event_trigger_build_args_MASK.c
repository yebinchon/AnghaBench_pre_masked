
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tag; int event; } ;
struct TYPE_4__ {scalar_t__ context; } ;
typedef int SV ;
typedef int HV ;
typedef TYPE_1__* FunctionCallInfo ;
typedef TYPE_2__ EventTriggerData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static SV *
FUNC_4(FunctionCallInfo VAR_1)
{
 VAR_0;
 EventTriggerData *VAR_2;
 HV *VAR_3;

 VAR_3 = FUNC_2();

 VAR_2 = (EventTriggerData *) VAR_1->context;

 FUNC_1(VAR_3, "event", FUNC_0(VAR_2->event));
 FUNC_1(VAR_3, "tag", FUNC_0(VAR_2->tag));

 return FUNC_3((SV *) VAR_3);
}
