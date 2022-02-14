
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_3__ {int RefCount; int SectionObject; } ;
typedef TYPE_1__* PNOCC_BCB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,size_t) ;

VOID
FUNC_2(ULONG VAR_2)
{
    PNOCC_BCB VAR_3;
    VAR_3 = &VAR_1[VAR_2];
    FUNC_0(VAR_3->SectionObject);
    VAR_3->RefCount++;
    FUNC_1(VAR_0, VAR_2);

}
