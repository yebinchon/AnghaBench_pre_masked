
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lzma_ret ;
struct TYPE_6__ {int coder; int (* code ) (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__ next; } ;
typedef TYPE_2__ lzma_coder ;
typedef int lzma_allocator ;
typedef scalar_t__ lzma_action ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int const*,int *,size_t const) ;
 int FUNC_1 (TYPE_2__*,int *,size_t) ;
 size_t FUNC_2 (size_t const,size_t const) ;
 int FUNC_3 (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,scalar_t__) ;

__attribute__((used)) static lzma_ret
FUNC_4(lzma_coder *VAR_3, lzma_allocator *VAR_4,
  const uint8_t *restrict VAR_5, size_t *restrict VAR_6,
  size_t VAR_7, uint8_t *restrict VAR_8,
  size_t *restrict VAR_9, size_t VAR_10, lzma_action VAR_11)
{
 lzma_ret VAR_12;

 if (VAR_3->next.code == ((void*)0)) {
  const size_t VAR_13 = VAR_7 - *VAR_6;
  const size_t VAR_14 = VAR_10 - *VAR_9;
  const size_t VAR_15 = FUNC_2(VAR_13, VAR_14);

  FUNC_0(VAR_3, VAR_5 + *VAR_6, VAR_8 + *VAR_9, VAR_15);

  *VAR_6 += VAR_15;
  *VAR_9 += VAR_15;

  VAR_12 = VAR_11 != VAR_1 && *VAR_6 == VAR_7
    ? VAR_2 : VAR_0;

 } else {
  const size_t VAR_16 = *VAR_9;

  VAR_12 = VAR_3->next.code(VAR_3->next.coder, VAR_4,
    VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_11);

  FUNC_1(VAR_3, VAR_8 + VAR_16, *VAR_9 - VAR_16);
 }

 return VAR_12;
}
