
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t offset; } ;
typedef int MSIDATABASE ;
typedef TYPE_1__ MSICOLUMNINFO ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *,TYPE_1__ const*,size_t) ;

__attribute__((used)) static UINT FUNC_1( MSIDATABASE *VAR_1, const MSICOLUMNINFO *VAR_2, UINT VAR_3, UINT VAR_4 )
{
    const MSICOLUMNINFO *VAR_5;

    if (!VAR_3)
        return 0;

    if (VAR_4 != VAR_0)
    {
        UINT VAR_6, VAR_7 = 0;
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) VAR_7 += FUNC_0( VAR_1, &VAR_2[VAR_6], VAR_4 );
        return VAR_7;
    }
    VAR_5 = &VAR_2[VAR_3 - 1];
    return VAR_5->offset + FUNC_0( VAR_1, VAR_5, VAR_4 );
}
