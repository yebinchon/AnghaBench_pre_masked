
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nsubxacts; int * xsub; } ;
typedef TYPE_1__ xl_xact_assignment ;
typedef int StringInfo ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(StringInfo VAR_0, xl_xact_assignment *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, "subxacts:");

 for (VAR_2 = 0; VAR_2 < VAR_1->nsubxacts; VAR_2++)
  FUNC_0(VAR_0, " %u", VAR_1->xsub[VAR_2]);
}
