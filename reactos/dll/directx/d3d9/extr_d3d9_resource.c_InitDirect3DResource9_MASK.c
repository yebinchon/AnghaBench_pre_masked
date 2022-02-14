
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum REF_TYPE { ____Placeholder_REF_TYPE } REF_TYPE ;
struct TYPE_6__ {int Pool; int BaseObject; } ;
struct TYPE_5__ {int lpVtbl; } ;
typedef TYPE_1__* LPDIRECT3DDEVICE9_INT ;
typedef int IUnknown ;
typedef TYPE_2__ Direct3DResource9_INT ;
typedef int D3DPOOL ;


 int FUNC_0 (int *,int,int *) ;

void FUNC_1(Direct3DResource9_INT* VAR_0, D3DPOOL VAR_1, LPDIRECT3DDEVICE9_INT VAR_2, enum REF_TYPE VAR_3)
{
    FUNC_0(&VAR_0->BaseObject, VAR_3, (IUnknown*)&VAR_2->lpVtbl);

    VAR_0->Pool = VAR_1;
}
