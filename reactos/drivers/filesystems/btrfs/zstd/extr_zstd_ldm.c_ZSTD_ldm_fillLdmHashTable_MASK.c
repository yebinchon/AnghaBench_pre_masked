
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int hashPower; } ;
typedef TYPE_1__ ldmState_t ;
struct TYPE_8__ {int minMatchLength; } ;
typedef TYPE_2__ ldmParams_t ;
typedef int U64 ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,TYPE_2__ const) ;
 int FUNC_1 (int ,int const,int const,int ) ;

__attribute__((used)) static U64 FUNC_2(ldmState_t* VAR_0,
                                     U64 VAR_1, const BYTE* VAR_2,
                                     const BYTE* VAR_3, const BYTE* VAR_4,
                                     U32 VAR_5, ldmParams_t const VAR_6)
{
    U64 VAR_7 = VAR_1;
    const BYTE* VAR_8 = VAR_2 + 1;

    while (VAR_8 < VAR_3) {
        VAR_7 = FUNC_1(VAR_7, VAR_8[-1],
                                          VAR_8[VAR_6.minMatchLength-1],
                                          VAR_0->hashPower);
        FUNC_0(VAR_0,
                                         VAR_7, VAR_5,
                                         (U32)(VAR_8 - VAR_4), VAR_6);
        ++VAR_8;
    }
    return VAR_7;
}
