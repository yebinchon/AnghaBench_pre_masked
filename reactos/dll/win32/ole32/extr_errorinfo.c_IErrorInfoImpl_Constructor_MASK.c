
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; TYPE_3__ IErrorInfo_iface; scalar_t__ m_dwHelpContext; int * help_file; int * description; int * source; TYPE_1__ ISupportErrorInfo_iface; TYPE_2__ ICreateErrorInfo_iface; } ;
typedef TYPE_3__ IErrorInfo ;
typedef TYPE_4__ ErrorInfoImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int) ;

__attribute__((used)) static IErrorInfo* FUNC_1(void)
{
    ErrorInfoImpl *VAR_3 = FUNC_0(sizeof(ErrorInfoImpl));

    if (!VAR_3) return ((void*)0);

    VAR_3->IErrorInfo_iface.lpVtbl = &VAR_1;
    VAR_3->ICreateErrorInfo_iface.lpVtbl = &VAR_0;
    VAR_3->ISupportErrorInfo_iface.lpVtbl = &VAR_2;
    VAR_3->ref = 1;
    VAR_3->source = ((void*)0);
    VAR_3->description = ((void*)0);
    VAR_3->help_file = ((void*)0);
    VAR_3->m_dwHelpContext = 0;

    return &VAR_3->IErrorInfo_iface;
}
