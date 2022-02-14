
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int* block_codes; int* block_codesp; int len_uncompressed_input; TYPE_2__* main_tree; TYPE_2__* aligned_tree; TYPE_2__* length_tree; } ;
typedef TYPE_1__ lzx_data ;
struct TYPE_7__ {int codelength; int code; } ;
typedef TYPE_2__ huff_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4(lzx_data *VAR_6, int VAR_7)
{
  uint32_t *VAR_8 = VAR_6->block_codes;
  uint32_t *VAR_9 = VAR_6->block_codesp;
  uint16_t VAR_10;
  uint32_t VAR_11;
  uint32_t VAR_12;
  uint32_t VAR_13;
  uint32_t VAR_14;
  uint16_t VAR_15;
  uint16_t VAR_16;
  uint16_t VAR_17;
  huff_entry *VAR_18;
  int VAR_19 = (VAR_6->len_uncompressed_input % VAR_1);

  VAR_6->len_uncompressed_input -= VAR_19;
  while (VAR_8 < VAR_9) {
    VAR_14 = *VAR_8++;
    if (VAR_14 & 0x80000000) {
      VAR_12 = VAR_14 & 0xFF;
      VAR_11 = (VAR_14 >> 8)& 0x1FFFF;
      VAR_10 = (VAR_14 >> 25) & 0x3F;




      if (VAR_12 < VAR_3) {
 VAR_15 = VAR_12;
 VAR_16 = 255;
      }
      else {
 VAR_15 = VAR_3;
 VAR_16 = VAR_12 - VAR_3;
      }
      VAR_17 = (VAR_10 << 3) | VAR_15;
      VAR_18 = &VAR_6->main_tree[VAR_17+VAR_2];
      FUNC_3(VAR_6, VAR_18->codelength, VAR_18->code);
      if (VAR_16 != 255) {
 VAR_18 = &VAR_6->length_tree[VAR_16];
 FUNC_3(VAR_6, VAR_18->codelength, VAR_18->code);
      }
      if ((VAR_7 == VAR_0) && (VAR_4[VAR_10] >= 3)) {

 VAR_13 = VAR_11 >> 3;
 FUNC_3(VAR_6, VAR_4[VAR_10] - 3, VAR_13);
 VAR_18 = &VAR_6->aligned_tree[VAR_11&7];
 FUNC_3(VAR_6, VAR_18->codelength, VAR_18->code);
      }
      else {
 VAR_13 = VAR_11;
 FUNC_3(VAR_6, VAR_4[VAR_10], VAR_13);
      }
      VAR_19 += VAR_12 + 2;
    }
    else {

      FUNC_0(VAR_14 < VAR_2);
      VAR_18 = &VAR_6->main_tree[VAR_14];
      FUNC_3(VAR_6, VAR_18->codelength, VAR_18->code);
      VAR_19++;
    }
    if (VAR_19 == VAR_1) {
      VAR_6->len_uncompressed_input += VAR_19;
      FUNC_2(VAR_6);
      VAR_19 = 0;
    }





    FUNC_0 (VAR_19 < VAR_1);
  }
  VAR_6->len_uncompressed_input += VAR_19;
}
