
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IMimeBody_iface; } ;
typedef TYPE_1__ MimeBody ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;

HRESULT FUNC_1(IUnknown *VAR_3, void **VAR_4)
{
    MimeBody *VAR_5;

    if(VAR_3)
        return VAR_0;

    if ((VAR_5 = FUNC_0()))
    {
        *VAR_4 = &VAR_5->IMimeBody_iface;
        return VAR_2;
    }
    else
    {
        *VAR_4 = ((void*)0);
        return VAR_1;
    }
}
