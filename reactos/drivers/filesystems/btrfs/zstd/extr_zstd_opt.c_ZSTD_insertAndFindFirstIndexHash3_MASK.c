
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * base; } ;
struct TYPE_5__ {scalar_t__* hashTable3; scalar_t__ hashLog3; scalar_t__ nextToUpdate3; TYPE_1__ window; } ;
typedef TYPE_2__ ZSTD_matchState_t ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int const* const,scalar_t__ const) ;
 int FUNC_1 (int) ;

__attribute__((used)) static U32 FUNC_2 (ZSTD_matchState_t* VAR_0, const BYTE* const VAR_1)
{
    U32* const VAR_2 = VAR_0->hashTable3;
    U32 const VAR_3 = VAR_0->hashLog3;
    const BYTE* const VAR_4 = VAR_0->window.base;
    U32 VAR_5 = VAR_0->nextToUpdate3;
    U32 const VAR_6 = VAR_0->nextToUpdate3 = (U32)(VAR_1 - VAR_4);
    size_t const VAR_7 = FUNC_0(VAR_1, VAR_3);
    FUNC_1(VAR_3 > 0);

    while(VAR_5 < VAR_6) {
        VAR_2[FUNC_0(VAR_4+VAR_5, VAR_3)] = VAR_5;
        VAR_5++;
    }

    return VAR_2[VAR_7];
}
