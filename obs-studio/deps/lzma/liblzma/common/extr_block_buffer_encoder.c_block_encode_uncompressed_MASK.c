
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_7__ {int dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_8__ {int id; TYPE_1__* options; } ;
typedef TYPE_2__ lzma_filter ;
struct TYPE_9__ {scalar_t__ compressed_size; size_t header_size; TYPE_2__* filters; } ;
typedef TYPE_3__ lzma_block ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int*,int const*,size_t const) ;
 size_t FUNC_5 (size_t,int ) ;

__attribute__((used)) static lzma_ret
FUNC_6(lzma_block *VAR_7, const uint8_t *VAR_8, size_t VAR_9,
  uint8_t *VAR_10, size_t *VAR_11, size_t VAR_12)
{






 lzma_options_lzma VAR_13 = {
  .dict_size = VAR_2,
 };

 lzma_filter VAR_14[2];
 VAR_14[0].id = VAR_3;
 VAR_14[0].options = &VAR_13;
 VAR_14[1].id = VAR_6;



 lzma_filter *VAR_15 = VAR_7->filters;
 VAR_7->filters = VAR_14;

 if (FUNC_3(VAR_7) != VAR_4) {
  VAR_7->filters = VAR_15;
  return VAR_5;
 }






 FUNC_0(VAR_7->compressed_size == FUNC_1(VAR_9));
 if (VAR_12 - *VAR_11
   < VAR_7->header_size + VAR_7->compressed_size) {
  VAR_7->filters = VAR_15;
  return VAR_1;
 }

 if (FUNC_2(VAR_7, VAR_10 + *VAR_11) != VAR_4) {
  VAR_7->filters = VAR_15;
  return VAR_5;
 }

 VAR_7->filters = VAR_15;
 *VAR_11 += VAR_7->header_size;


 size_t VAR_16 = 0;
 uint8_t VAR_17 = 0x01;

 while (VAR_16 < VAR_9) {


  VAR_10[(*VAR_11)++] = VAR_17;
  VAR_17 = 0x02;


  const size_t VAR_18
    = FUNC_5(VAR_9 - VAR_16, VAR_0);
  VAR_10[(*VAR_11)++] = (VAR_18 - 1) >> 8;
  VAR_10[(*VAR_11)++] = (VAR_18 - 1) & 0xFF;


  FUNC_0(*VAR_11 + VAR_18 <= VAR_12);
  FUNC_4(VAR_10 + *VAR_11, VAR_8 + VAR_16, VAR_18);

  VAR_16 += VAR_18;
  *VAR_11 += VAR_18;
 }


 VAR_10[(*VAR_11)++] = 0x00;
 FUNC_0(*VAR_11 <= VAR_12);

 return VAR_4;
}
