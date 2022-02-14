
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* doc_obj; } ;
struct TYPE_4__ {int update; scalar_t__ hwnd; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__,int ,int,int *) ;
 int VAR_0 ;

void FUNC_1(HTMLDocument *VAR_1, DWORD VAR_2)
{
    if(!VAR_1->doc_obj->update && VAR_1->doc_obj->hwnd)
        FUNC_0(VAR_1->doc_obj->hwnd, VAR_0, 100, ((void*)0));

    VAR_1->doc_obj->update |= VAR_2;
}
