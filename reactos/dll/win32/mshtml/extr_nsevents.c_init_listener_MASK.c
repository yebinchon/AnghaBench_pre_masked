
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsIDOMEventListenerVtbl ;
struct TYPE_4__ {int const* lpVtbl; } ;
struct TYPE_5__ {int * This; TYPE_1__ nsIDOMEventListener_iface; } ;
typedef TYPE_2__ nsEventListener ;
typedef int nsDocumentEventListener ;



__attribute__((used)) static void FUNC_0(nsEventListener *VAR_0, nsDocumentEventListener *VAR_1,
        const nsIDOMEventListenerVtbl *VAR_2)
{
    VAR_0->nsIDOMEventListener_iface.lpVtbl = VAR_2;
    VAR_0->This = VAR_1;
}
