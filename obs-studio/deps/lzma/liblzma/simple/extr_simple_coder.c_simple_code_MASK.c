
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ const lzma_ret ;
struct TYPE_5__ {size_t pos; size_t filtered; size_t size; int allocated; scalar_t__ end_was_reached; int * buffer; } ;
typedef TYPE_1__ lzma_coder ;
typedef int lzma_allocator ;
typedef scalar_t__ lzma_action ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,int *,size_t const) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int const*,size_t*,size_t,int *,size_t*,size_t,scalar_t__) ;
 int FUNC_3 (int *,size_t*,size_t,int *,size_t*,size_t) ;
 int FUNC_4 (int *,int *,size_t const) ;
 int FUNC_5 (int *,int *,size_t const) ;

__attribute__((used)) static lzma_ret
FUNC_6(lzma_coder *VAR_4, lzma_allocator *VAR_5,
  const uint8_t *restrict VAR_6, size_t *restrict VAR_7,
  size_t VAR_8, uint8_t *restrict VAR_9,
  size_t *restrict VAR_10, size_t VAR_11, lzma_action VAR_12)
{





 if (VAR_12 == VAR_3)
  return VAR_1;


 if (VAR_4->pos < VAR_4->filtered) {
  FUNC_3(VAR_4->buffer, &VAR_4->pos, VAR_4->filtered,
    VAR_9, VAR_10, VAR_11);



  if (VAR_4->pos < VAR_4->filtered)
   return VAR_0;

  if (VAR_4->end_was_reached) {
   FUNC_0(VAR_4->filtered == VAR_4->size);
   return VAR_2;
  }
 }


 VAR_4->filtered = 0;

 FUNC_0(!VAR_4->end_was_reached);






 const size_t VAR_13 = VAR_11 - *VAR_10;
 const size_t VAR_14 = VAR_4->size - VAR_4->pos;
 if (VAR_13 > VAR_14 || VAR_14 == 0) {


  const size_t VAR_15 = *VAR_10;





  FUNC_4(VAR_9 + *VAR_10, VAR_4->buffer + VAR_4->pos, VAR_14);
  *VAR_10 += VAR_14;


  {
   const lzma_ret VAR_16 = FUNC_2(VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11, VAR_12);
   FUNC_0(VAR_16 != VAR_2);
   if (VAR_16 != VAR_0)
    return VAR_16;
  }


  const size_t VAR_17 = *VAR_10 - VAR_15;
  const size_t VAR_18 = FUNC_1(
    VAR_4, VAR_9 + VAR_15, VAR_17);

  const size_t VAR_19 = VAR_17 - VAR_18;
  FUNC_0(VAR_19 <= VAR_4->allocated / 2);



  VAR_4->pos = 0;
  VAR_4->size = VAR_19;

  if (VAR_4->end_was_reached) {


   VAR_4->size = 0;

  } else if (VAR_19 > 0) {


   *VAR_10 -= VAR_19;
   FUNC_4(VAR_4->buffer, VAR_9 + *VAR_10, VAR_19);
  }
 } else if (VAR_4->pos > 0) {
  FUNC_5(VAR_4->buffer, VAR_4->buffer + VAR_4->pos, VAR_14);
  VAR_4->size -= VAR_4->pos;
  VAR_4->pos = 0;
 }

 FUNC_0(VAR_4->pos == 0);





 if (VAR_4->size > 0) {
  {
   const lzma_ret VAR_20 = FUNC_2(VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8,
     VAR_4->buffer, &VAR_4->size,
     VAR_4->allocated, VAR_12);
   FUNC_0(VAR_20 != VAR_2);
   if (VAR_20 != VAR_0)
    return VAR_20;
  }

  VAR_4->filtered = FUNC_1(
    VAR_4, VAR_4->buffer, VAR_4->size);



  if (VAR_4->end_was_reached)
   VAR_4->filtered = VAR_4->size;


  FUNC_3(VAR_4->buffer, &VAR_4->pos, VAR_4->filtered,
    VAR_9, VAR_10, VAR_11);
 }


 if (VAR_4->end_was_reached && VAR_4->pos == VAR_4->size)
  return VAR_2;

 return VAR_0;
}
