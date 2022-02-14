
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZSTD_match_t ;
struct TYPE_5__ {int nextToUpdate; int const* const base; } ;
typedef TYPE_1__ ZSTD_CCtx ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,int const* const,int const* const,int const,int const,int,int *,int const) ;
 int FUNC_1 (TYPE_1__*,int const* const,int const* const,int const,int const) ;

__attribute__((used)) static U32 FUNC_2(ZSTD_CCtx *VAR_0, const BYTE *const VAR_1, const BYTE *const VAR_2, const U32 VAR_3, const U32 VAR_4,
     ZSTD_match_t *VAR_5, const U32 VAR_6)
{
 if (VAR_1 < VAR_0->base + VAR_0->nextToUpdate)
  return 0;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, 1, VAR_5, VAR_6);
}
