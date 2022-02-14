
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_2__ {int dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

extern lzma_ret
FUNC_2(const void *VAR_3, uint8_t *VAR_4)
{
 const lzma_options_lzma *const VAR_5 = VAR_3;
 uint32_t VAR_6 = FUNC_1(VAR_5->dict_size, VAR_0);



 --VAR_6;
 VAR_6 |= VAR_6 >> 2;
 VAR_6 |= VAR_6 >> 3;
 VAR_6 |= VAR_6 >> 4;
 VAR_6 |= VAR_6 >> 8;
 VAR_6 |= VAR_6 >> 16;


 if (VAR_6 == VAR_2)
  VAR_4[0] = 40;
 else
  VAR_4[0] = FUNC_0(VAR_6 + 1) - 24;

 return VAR_1;
}
