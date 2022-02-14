
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* lpadesc; TYPE_2__* lptdesc; } ;
struct TYPE_7__ {int vt; TYPE_1__ u; } ;
typedef TYPE_2__ TYPEDESC ;


 int FUNC_0 (TYPE_2__*) ;



 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(TYPEDESC *VAR_0)
{
    switch(VAR_0->vt)
    {
    case 129:
    case 128:
        FUNC_2(VAR_0->u.lptdesc);
        FUNC_0(VAR_0->u.lptdesc);
        break;
    case 130:
        FUNC_1(VAR_0->u.lpadesc);
        FUNC_0(VAR_0->u.lpadesc);
        break;
    }
}
