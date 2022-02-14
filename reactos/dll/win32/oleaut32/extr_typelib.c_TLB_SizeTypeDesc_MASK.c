
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* lpadesc; TYPE_3__* lptdesc; } ;
struct TYPE_7__ {int vt; TYPE_2__ u; } ;
struct TYPE_5__ {size_t cDims; TYPE_3__ tdescElem; } ;
typedef TYPE_3__ TYPEDESC ;
typedef int SIZE_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;



 int * VAR_3 ;

__attribute__((used)) static SIZE_T FUNC_1( const TYPEDESC *VAR_4, BOOL VAR_5 )
{
    SIZE_T VAR_6 = 0;

    if (VAR_5)
        VAR_6 += sizeof(TYPEDESC);

    switch (VAR_4->vt)
    {
    case 129:
    case 128:
        VAR_6 += FUNC_1(VAR_4->u.lptdesc, VAR_2);
        break;
    case 130:
        VAR_6 += FUNC_0(VAR_0, VAR_3[VAR_4->u.lpadesc->cDims]);
        VAR_6 += FUNC_1(&VAR_4->u.lpadesc->tdescElem, VAR_1);
        break;
    }
    return VAR_6;
}
