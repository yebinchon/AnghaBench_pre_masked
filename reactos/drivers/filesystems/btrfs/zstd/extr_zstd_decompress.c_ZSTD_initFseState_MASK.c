
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tableLog; } ;
typedef TYPE_1__ ZSTD_seqSymbol_header ;
typedef int ZSTD_seqSymbol ;
struct TYPE_5__ {int const* table; scalar_t__ state; } ;
typedef TYPE_2__ ZSTD_fseState ;
typedef int U32 ;
typedef int BIT_DStream_t ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(ZSTD_fseState* VAR_0, BIT_DStream_t* VAR_1, const ZSTD_seqSymbol* VAR_2)
{
    const void* VAR_3 = VAR_2;
    const ZSTD_seqSymbol_header* const VAR_4 = (const ZSTD_seqSymbol_header*)VAR_3;
    VAR_0->state = FUNC_0(VAR_1, VAR_4->tableLog);
    FUNC_2(6, "ZSTD_initFseState : val=%u using %u bits",
                (U32)VAR_0->state, VAR_4->tableLog);
    FUNC_1(VAR_1);
    VAR_0->table = VAR_2 + 1;
}
