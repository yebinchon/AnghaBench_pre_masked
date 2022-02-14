
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct master_clock {int ref; double freq; TYPE_2__ IReferenceClock_iface; } ;
struct TYPE_6__ {double QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef TYPE_2__ IReferenceClock ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_2__**) ;
 struct master_clock* FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(IReferenceClock **VAR_3)
{
    struct master_clock *VAR_4;
    LARGE_INTEGER VAR_5;

    FUNC_1("(%p)\n", VAR_3);

    if (!(VAR_4 = FUNC_2(sizeof(*VAR_4))))
        return VAR_0;

    VAR_4->IReferenceClock_iface.lpVtbl = &VAR_2;
    VAR_4->ref = 1;
    FUNC_0(&VAR_5);
    VAR_4->freq = 10000000.0 / VAR_5.QuadPart;

    *VAR_3 = &VAR_4->IReferenceClock_iface;

    return VAR_1;
}
