
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; int limit; char const** data; int expret; TYPE_2__ IACList_iface; TYPE_1__ IEnumString_iface; } ;
typedef TYPE_3__ TestACL ;


 TYPE_3__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static TestACL *FUNC_2(int VAR_3, const char **VAR_4)
{
    TestACL *VAR_5 = FUNC_0(sizeof(TestACL));
    FUNC_1(VAR_5, sizeof(*VAR_5));
    VAR_5->IEnumString_iface.lpVtbl = &VAR_1;
    VAR_5->IACList_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;
    VAR_5->expret = VAR_0;
    VAR_5->limit = VAR_3;
    VAR_5->data = VAR_4;
    return VAR_5;
}
