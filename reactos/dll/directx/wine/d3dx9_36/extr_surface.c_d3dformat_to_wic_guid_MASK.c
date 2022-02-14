
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ d3dformat; int const* wic_guid; } ;
typedef int GUID ;
typedef scalar_t__ D3DFORMAT ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const GUID *FUNC_1(D3DFORMAT VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
    {
        if (VAR_0[VAR_2].d3dformat == VAR_1)
            return VAR_0[VAR_2].wic_guid;
    }

    return ((void*)0);
}
