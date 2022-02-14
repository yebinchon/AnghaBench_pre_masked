
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refs; TYPE_2__ IKindaEnumWidget_iface; } ;
typedef TYPE_1__ KindaEnum ;
typedef TYPE_2__ IKindaEnumWidget ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static IKindaEnumWidget *FUNC_2(void)
{
    KindaEnum *VAR_1;

    VAR_1 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_1));
    if (!VAR_1) return ((void*)0);
    VAR_1->IKindaEnumWidget_iface.lpVtbl = &VAR_0;
    VAR_1->refs = 1;
    return &VAR_1->IKindaEnumWidget_iface;
}
