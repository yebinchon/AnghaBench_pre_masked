
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_9__ {scalar_t__ (* code ) (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;int coder; } ;
typedef TYPE_1__ lzma_next_coder ;
struct TYPE_10__ {scalar_t__ compressed_size; size_t uncompressed_size; size_t header_size; int filters; } ;
typedef TYPE_2__ lzma_block ;
typedef int lzma_allocator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;

__attribute__((used)) static lzma_ret
FUNC_7(lzma_block *VAR_7, lzma_allocator *VAR_8,
  const uint8_t *VAR_9, size_t VAR_10,
  uint8_t *VAR_11, size_t *VAR_12, size_t VAR_13)
{

 VAR_7->compressed_size = FUNC_0(VAR_10);
 if (VAR_7->compressed_size == 0)
  return VAR_1;

 VAR_7->uncompressed_size = VAR_10;
 FUNC_5(FUNC_2(VAR_7));


 if (VAR_13 - *VAR_12 <= VAR_7->header_size)
  return VAR_0;

 const size_t VAR_14 = *VAR_12;
 *VAR_12 += VAR_7->header_size;



 if (VAR_13 - *VAR_12 > VAR_7->compressed_size)
  VAR_13 = *VAR_12 + VAR_7->compressed_size;



 lzma_next_coder VAR_15 = VAR_3;
 lzma_ret VAR_16 = FUNC_4(
   &VAR_15, VAR_8, VAR_7->filters);

 if (VAR_16 == VAR_4) {
  size_t VAR_17 = 0;
  VAR_16 = VAR_15.code(VAR_15.coder, VAR_8,
    VAR_9, &VAR_17, VAR_10, VAR_11, VAR_12, VAR_13,
    VAR_2);
 }


 FUNC_3(&VAR_15, VAR_8);

 if (VAR_16 == VAR_6) {

  VAR_7->compressed_size
    = *VAR_12 - (VAR_14 + VAR_7->header_size);
  VAR_16 = FUNC_1(VAR_7, VAR_11 + VAR_14);
  if (VAR_16 != VAR_4)
   VAR_16 = VAR_5;

 } else if (VAR_16 == VAR_4) {

  VAR_16 = VAR_0;
 }


 if (VAR_16 != VAR_4)
  *VAR_12 = VAR_14;

 return VAR_16;
}
