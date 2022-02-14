
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lzma_vli ;
struct TYPE_11__ {int check; int backward_size; int version; } ;
typedef TYPE_2__ lzma_stream_flags ;
typedef int const lzma_ret ;
struct TYPE_14__ {int check; int uncompressed_size; int header_size; } ;
struct TYPE_13__ {int coder; int const (* code ) (int ,int *,int *,int *,int ,int *,size_t*,size_t,size_t const) ;} ;
struct TYPE_10__ {int coder; int const (* code ) (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,size_t const) ;} ;
struct TYPE_12__ {int sequence; int block_encoder_is_initialized; int buffer_size; int buffer; TYPE_7__ block_options; int index; TYPE_6__ index_encoder; TYPE_1__ block_encoder; int buffer_pos; } ;
typedef TYPE_3__ lzma_coder ;
typedef int lzma_allocator ;
typedef size_t const lzma_action ;



 int const VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int const FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,int *,int ,int *,size_t*,size_t) ;
 int FUNC_5 (int ,int *,int const,int ) ;
 int FUNC_6 (TYPE_6__*,int *,int ) ;
 int FUNC_7 (int ) ;
 int const FUNC_8 (TYPE_2__ const*,int ) ;
 int FUNC_9 (int ) ;
 int const FUNC_10 (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,size_t const) ;
 int const FUNC_11 (int ,int *,int *,int *,int ,int *,size_t*,size_t,size_t const) ;

__attribute__((used)) static lzma_ret
FUNC_12(lzma_coder *VAR_4, lzma_allocator *VAR_5,
  const uint8_t *restrict VAR_6, size_t *restrict VAR_7,
  size_t VAR_8, uint8_t *restrict VAR_9,
  size_t *restrict VAR_10, size_t VAR_11, lzma_action VAR_12)
{

 while (*VAR_10 < VAR_11)
 switch (VAR_4->sequence) {
 case 128:
 case 132:
 case 129:
  FUNC_4(VAR_4->buffer, &VAR_4->buffer_pos,
    VAR_4->buffer_size, VAR_9, VAR_10, VAR_11);
  if (VAR_4->buffer_pos < VAR_4->buffer_size)
   return VAR_0;

  if (VAR_4->sequence == 129)
   return VAR_2;

  VAR_4->buffer_pos = 0;
  ++VAR_4->sequence;
  break;

 case 131: {
  if (*VAR_7 == VAR_8) {



   if (VAR_12 != 136)
    return VAR_12 == 135
      ? VAR_0 : VAR_2;
   FUNC_9(FUNC_6(
     &VAR_4->index_encoder, VAR_5,
     VAR_4->index));
   VAR_4->sequence = 130;
   break;
  }




  if (!VAR_4->block_encoder_is_initialized)
   FUNC_9(FUNC_1(VAR_4, VAR_5));



  VAR_4->block_encoder_is_initialized = 0;



  if (FUNC_2(&VAR_4->block_options,
    VAR_4->buffer) != VAR_0)
   return VAR_1;

  VAR_4->buffer_size = VAR_4->block_options.header_size;
  VAR_4->sequence = 132;
  break;
 }

 case 133: {
  static const lzma_action VAR_13[4] = {
   135,
   134,
   136,
   136,
  };

  const lzma_ret VAR_14 = VAR_4->block_encoder.code(
    VAR_4->block_encoder.coder, VAR_5,
    VAR_6, VAR_7, VAR_8,
    VAR_9, VAR_10, VAR_11, VAR_13[VAR_12]);
  if (VAR_14 != VAR_2 || VAR_12 == 134)
   return VAR_14;


  const lzma_vli VAR_15 = FUNC_3(
    &VAR_4->block_options);
  FUNC_0(VAR_15 != 0);
  FUNC_9(FUNC_5(VAR_4->index, VAR_5,
    VAR_15,
    VAR_4->block_options.uncompressed_size));

  VAR_4->sequence = 131;
  break;
 }

 case 130: {


  const lzma_ret VAR_16 = VAR_4->index_encoder.code(
    VAR_4->index_encoder.coder, VAR_5,
    ((void*)0), ((void*)0), 0,
    VAR_9, VAR_10, VAR_11, 135);
  if (VAR_16 != VAR_2)
   return VAR_16;


  const lzma_stream_flags VAR_17 = {
   .version = 0,
   .backward_size = FUNC_7(VAR_4->index),
   .check = VAR_4->block_options.check,
  };

  if (FUNC_8(&VAR_17, VAR_4->buffer)
    != VAR_0)
   return VAR_1;

  VAR_4->buffer_size = VAR_3;
  VAR_4->sequence = 129;
  break;
 }

 default:
  FUNC_0(0);
  return VAR_1;
 }

 return VAR_0;
}
