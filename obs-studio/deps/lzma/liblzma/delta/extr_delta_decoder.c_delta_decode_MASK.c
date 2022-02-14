
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const lzma_ret ;
struct TYPE_5__ {int coder; int const (* code ) (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;} ;
struct TYPE_6__ {TYPE_1__ next; } ;
typedef TYPE_2__ lzma_coder ;
typedef int lzma_allocator ;
typedef int lzma_action ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,size_t) ;
 int const FUNC_2 (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_coder *VAR_0, lzma_allocator *VAR_1,
  const uint8_t *restrict VAR_2, size_t *restrict VAR_3,
  size_t VAR_4, uint8_t *restrict VAR_5,
  size_t *restrict VAR_6, size_t VAR_7, lzma_action VAR_8)
{
 FUNC_0(VAR_0->next.code != ((void*)0));

 const size_t VAR_9 = *VAR_6;

 const lzma_ret VAR_10 = VAR_0->next.code(VAR_0->next.coder, VAR_1,
   VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_8);

 FUNC_1(VAR_0, VAR_5 + VAR_9, *VAR_6 - VAR_9);

 return VAR_10;
}
