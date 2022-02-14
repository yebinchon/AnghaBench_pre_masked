
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lzma_ret ;
struct TYPE_3__ {scalar_t__ dist; int type; } ;
typedef TYPE_1__ lzma_options_delta ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int *) ;

extern lzma_ret
FUNC_1(void **VAR_4, lzma_allocator *VAR_5,
  const uint8_t *VAR_6, size_t VAR_7)
{
 if (VAR_7 != 1)
  return VAR_3;

 lzma_options_delta *VAR_8
   = FUNC_0(sizeof(lzma_options_delta), VAR_5);
 if (VAR_8 == ((void*)0))
  return VAR_1;

 VAR_8->type = VAR_0;
 VAR_8->dist = VAR_6[0] + 1;

 *VAR_4 = VAR_8;

 return VAR_2;
}
