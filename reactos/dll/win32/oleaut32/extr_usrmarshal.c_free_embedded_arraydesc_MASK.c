
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* lpadesc; TYPE_3__* lptdesc; } ;
struct TYPE_8__ {int vt; TYPE_1__ u; } ;
struct TYPE_9__ {TYPE_2__ tdescElem; } ;
typedef TYPE_3__ ARRAYDESC ;


 int FUNC_0 (TYPE_3__*) ;



 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(ARRAYDESC *VAR_0)
{
    switch(VAR_0->tdescElem.vt)
    {
    case 129:
    case 128:
        FUNC_1(VAR_0->tdescElem.u.lptdesc);
        FUNC_0(VAR_0->tdescElem.u.lptdesc);
        break;
    case 130:
        FUNC_2(VAR_0->tdescElem.u.lpadesc);
        FUNC_0(VAR_0->tdescElem.u.lpadesc);
        break;
    }
}
