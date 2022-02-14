
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lzma_ret ;
struct TYPE_4__ {scalar_t__ start_offset; } ;
typedef TYPE_1__ lzma_options_bcj ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int const*) ;

extern lzma_ret
FUNC_3(void **VAR_3, lzma_allocator *VAR_4,
  const uint8_t *VAR_5, size_t VAR_6)
{
 if (VAR_6 == 0)
  return VAR_1;

 if (VAR_6 != 4)
  return VAR_2;

 lzma_options_bcj *VAR_7 = FUNC_0(
   sizeof(lzma_options_bcj), VAR_4);
 if (VAR_7 == ((void*)0))
  return VAR_0;

 VAR_7->start_offset = FUNC_2(VAR_5);


 if (VAR_7->start_offset == 0)
  FUNC_1(VAR_7, VAR_4);
 else
  *VAR_3 = VAR_7;

 return VAR_1;
}
