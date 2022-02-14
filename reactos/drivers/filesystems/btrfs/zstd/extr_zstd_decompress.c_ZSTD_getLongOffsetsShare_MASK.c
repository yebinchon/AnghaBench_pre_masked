
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tableLog; } ;
typedef TYPE_1__ ZSTD_seqSymbol_header ;
struct TYPE_5__ {int nbAdditionalBits; } ;
typedef TYPE_2__ ZSTD_seqSymbol ;
typedef int U32 ;


 int FUNC_0 (int,char*,int const) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned
FUNC_2(const ZSTD_seqSymbol* VAR_1)
{
    const void* VAR_2 = VAR_1;
    U32 const VAR_3 = ((const ZSTD_seqSymbol_header*)VAR_2)[0].tableLog;
    const ZSTD_seqSymbol* VAR_4 = VAR_1 + 1;
    U32 const VAR_5 = 1 << VAR_3;
    U32 VAR_6, VAR_7 = 0;
    FUNC_0(5, "ZSTD_getLongOffsetsShare: (tableLog=%u)", VAR_3);

    FUNC_1(VAR_5 <= (1 << VAR_0));
    for (VAR_6=0; VAR_6<VAR_5; VAR_6++) {
        if (VAR_4[VAR_6].nbAdditionalBits > 22) VAR_7 += 1;
    }

    FUNC_1(VAR_3 <= VAR_0);
    VAR_7 <<= (VAR_0 - VAR_3);

    return VAR_7;
}
