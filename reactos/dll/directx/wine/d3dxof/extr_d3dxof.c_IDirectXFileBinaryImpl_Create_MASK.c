
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IDirectXFileBinary_iface; } ;
typedef TYPE_2__ IDirectXFileBinaryImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (char*,TYPE_2__**) ;

__attribute__((used)) static HRESULT FUNC_3(IDirectXFileBinaryImpl** VAR_4)
{
    IDirectXFileBinaryImpl* VAR_5;

    FUNC_2("(%p)\n", VAR_4);

    VAR_5 = FUNC_1(FUNC_0(), VAR_2, sizeof(IDirectXFileBinaryImpl));
    if (!VAR_5)
        return VAR_0;

    VAR_5->IDirectXFileBinary_iface.lpVtbl = &VAR_3;
    VAR_5->ref = 1;

    *VAR_4 = VAR_5;

    return VAR_1;
}
