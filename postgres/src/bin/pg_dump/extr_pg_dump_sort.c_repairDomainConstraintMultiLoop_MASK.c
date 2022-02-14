
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int separate; } ;
struct TYPE_7__ {int dumpId; } ;
typedef TYPE_1__ DumpableObject ;
typedef TYPE_2__ ConstraintInfo ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(DumpableObject *VAR_1,
        DumpableObject *VAR_2)
{

 FUNC_1(VAR_1, VAR_2->dumpId);

 ((ConstraintInfo *) VAR_2)->separate = 1;

 FUNC_0(VAR_2, VAR_1->dumpId);

 FUNC_0(VAR_2, VAR_0);
}
