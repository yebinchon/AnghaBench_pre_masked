
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d3dformat; int wic_guid; } ;
typedef int GUID ;
typedef int D3DFORMAT ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int const*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static D3DFORMAT FUNC_2(const GUID *VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
    {
        if (FUNC_1(VAR_1[VAR_3].wic_guid, VAR_2))
            return VAR_1[VAR_3].d3dformat;
    }

    return VAR_0;
}
