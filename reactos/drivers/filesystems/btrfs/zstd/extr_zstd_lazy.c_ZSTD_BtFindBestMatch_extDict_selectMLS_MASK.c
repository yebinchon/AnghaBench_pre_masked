
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int searchLength; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef int BYTE ;


 size_t FUNC_0 (TYPE_2__*,int const*,int const* const,size_t*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1 (
                        ZSTD_matchState_t* VAR_1,
                        const BYTE* VAR_2, const BYTE* const VAR_3,
                        size_t* VAR_4)
{
    switch(VAR_1->cParams.searchLength)
    {
    default :
    case 4 : return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 4, VAR_0);
    case 5 : return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 5, VAR_0);
    case 7 :
    case 6 : return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 6, VAR_0);
    }
}
