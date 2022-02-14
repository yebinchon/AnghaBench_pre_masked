
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* lpadesc; TYPE_2__* lptdesc; } ;
struct TYPE_8__ {int vt; TYPE_1__ u; } ;
struct TYPE_9__ {size_t cDims; TYPE_2__ tdescElem; } ;
typedef TYPE_2__ TYPEDESC ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;



 int FUNC_1 (TYPE_3__*,TYPE_3__*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void *FUNC_2( TYPEDESC *VAR_2, const TYPEDESC *VAR_3, void *VAR_4 )
{
    if (!VAR_2)
    {
        VAR_2 = VAR_4;
        VAR_4 = (char *)VAR_4 + sizeof(TYPEDESC);
    }

    *VAR_2 = *VAR_3;

    switch (VAR_3->vt)
    {
    case 129:
    case 128:
        VAR_2->u.lptdesc = VAR_4;
        VAR_4 = FUNC_2(((void*)0), VAR_3->u.lptdesc, VAR_4);
        break;
    case 130:
        VAR_2->u.lpadesc = VAR_4;
        FUNC_1(VAR_2->u.lpadesc, VAR_3->u.lpadesc, FUNC_0(VAR_0, VAR_1[VAR_3->u.lpadesc->cDims]));
        VAR_4 = (char *)VAR_4 + FUNC_0(VAR_0, VAR_1[VAR_3->u.lpadesc->cDims]);
        VAR_4 = FUNC_2(&VAR_2->u.lpadesc->tdescElem, &VAR_3->u.lpadesc->tdescElem, VAR_4);
        break;
    }
    return VAR_4;
}
