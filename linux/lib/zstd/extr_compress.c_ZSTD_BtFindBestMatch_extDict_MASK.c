
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nextToUpdate; int const* const base; } ;
typedef TYPE_1__ ZSTD_CCtx ;
typedef int U32 ;
typedef int BYTE ;


 size_t FUNC_0 (TYPE_1__*,int const* const,int const* const,size_t*,int const,int const,int) ;
 int FUNC_1 (TYPE_1__*,int const* const,int const* const,int const,int const) ;

__attribute__((used)) static size_t FUNC_2(ZSTD_CCtx *VAR_0, const BYTE *const VAR_1, const BYTE *const VAR_2, size_t *VAR_3, const U32 VAR_4,
        const U32 VAR_5)
{
 if (VAR_1 < VAR_0->base + VAR_0->nextToUpdate)
  return 0;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1);
}
