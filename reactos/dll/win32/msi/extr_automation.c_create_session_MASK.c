
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int IDispatch_iface; } ;
struct TYPE_5__ {TYPE_4__ autoobj; int * installer; } ;
typedef TYPE_1__ SessionObject ;
typedef int MSIHANDLE ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

HRESULT FUNC_3(MSIHANDLE VAR_3, IDispatch *VAR_4, IDispatch **VAR_5)
{
    SessionObject *VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_1(sizeof(SessionObject));
    if (!VAR_6) return VAR_0;

    VAR_7 = FUNC_0(&VAR_6->autoobj, VAR_3, VAR_2);
    if (VAR_7 != VAR_1)
    {
        FUNC_2(VAR_6);
        return VAR_7;
    }

    VAR_6->installer = VAR_4;
    *VAR_5 = &VAR_6->autoobj.IDispatch_iface;

    return VAR_7;
}
