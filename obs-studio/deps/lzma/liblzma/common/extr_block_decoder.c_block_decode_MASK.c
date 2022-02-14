
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const lzma_ret ;
struct TYPE_10__ {int u8; } ;
struct TYPE_12__ {TYPE_3__ buffer; } ;
struct TYPE_8__ {int coder; int const (* code ) (int ,int *,int const*,size_t*,size_t,int*,size_t*,size_t,int ) ;} ;
struct TYPE_11__ {int sequence; int compressed_size; int compressed_limit; int uncompressed_size; size_t const check_pos; TYPE_5__ check; TYPE_2__* block; TYPE_1__ next; } ;
typedef TYPE_4__ lzma_coder ;
typedef int lzma_allocator ;
typedef int lzma_action ;
struct TYPE_9__ {int uncompressed_size; int compressed_size; int raw_check; int check; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;



 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,size_t*,size_t,int ,size_t const*,size_t const) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int ,int*,size_t const) ;
 int FUNC_6 (int ,int ,size_t const) ;
 int const FUNC_7 (int ,int *,int const*,size_t*,size_t,int*,size_t*,size_t,int ) ;
 int FUNC_8 (int*,size_t const,int) ;

__attribute__((used)) static lzma_ret
FUNC_9(lzma_coder *VAR_5, lzma_allocator *VAR_6,
  const uint8_t *restrict VAR_7, size_t *restrict VAR_8,
  size_t VAR_9, uint8_t *restrict VAR_10,
  size_t *restrict VAR_11, size_t VAR_12, lzma_action VAR_13)
{
 switch (VAR_5->sequence) {
 case 129: {
  const size_t VAR_14 = *VAR_8;
  const size_t VAR_15 = *VAR_11;

  const lzma_ret VAR_16 = VAR_5->next.code(VAR_5->next.coder,
    VAR_6, VAR_7, VAR_8, VAR_9,
    VAR_10, VAR_11, VAR_12, VAR_13);

  const size_t VAR_17 = *VAR_8 - VAR_14;
  const size_t VAR_18 = *VAR_11 - VAR_15;



  if (FUNC_8(&VAR_5->compressed_size, VAR_17,
     VAR_5->compressed_limit)
    || FUNC_8(&VAR_5->uncompressed_size,
     VAR_18,
     VAR_5->block->uncompressed_size))
   return VAR_1;

  FUNC_5(&VAR_5->check, VAR_5->block->check,
    VAR_10 + VAR_15, VAR_18);

  if (VAR_16 != VAR_4)
   return VAR_16;



  if (!FUNC_0(VAR_5->compressed_size,
     VAR_5->block->compressed_size)
    || !FUNC_0(VAR_5->uncompressed_size,
     VAR_5->block->uncompressed_size))
   return VAR_1;



  VAR_5->block->compressed_size = VAR_5->compressed_size;
  VAR_5->block->uncompressed_size = VAR_5->uncompressed_size;

  VAR_5->sequence = 128;
 }



 case 128:

  while (VAR_5->compressed_size & 3) {
   if (*VAR_8 >= VAR_9)
    return VAR_2;





   ++VAR_5->compressed_size;

   if (VAR_7[(*VAR_8)++] != 0x00)
    return VAR_1;
  }

  if (VAR_5->block->check == VAR_0)
   return VAR_4;

  FUNC_2(&VAR_5->check, VAR_5->block->check);
  VAR_5->sequence = 130;



 case 130: {
  const size_t VAR_19 = FUNC_4(VAR_5->block->check);
  FUNC_1(VAR_7, VAR_8, VAR_9, VAR_5->block->raw_check,
    &VAR_5->check_pos, VAR_19);
  if (VAR_5->check_pos < VAR_19)
   return VAR_2;




  if (FUNC_3(VAR_5->block->check)
    && FUNC_6(VAR_5->block->raw_check,
     VAR_5->check.buffer.u8,
     VAR_19) != 0)
   return VAR_1;

  return VAR_4;
 }
 }

 return VAR_3;
}
