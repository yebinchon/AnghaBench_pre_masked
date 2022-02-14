
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sizes ;
typedef scalar_t__ const lzma_vli ;
typedef int lzma_ret ;
struct TYPE_3__ {int check; int count; int index_list_size; int uncompressed_size; int blocks_size; } ;
typedef TYPE_1__ lzma_index_hash_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (scalar_t__ const) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_index_hash_info *VAR_2, lzma_vli VAR_3,
  lzma_vli VAR_4)
{
 VAR_2->blocks_size += FUNC_2(VAR_3);
 VAR_2->uncompressed_size += VAR_4;
 VAR_2->index_list_size += FUNC_1(VAR_3)
   + FUNC_1(VAR_4);
 ++VAR_2->count;

 const lzma_vli VAR_5[2] = { VAR_3, VAR_4 };
 FUNC_0(&VAR_2->check, VAR_0,
   (const uint8_t *)(VAR_5), sizeof(VAR_5));

 return VAR_1;
}
