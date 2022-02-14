
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_6__ {int preset_dict_size; int preset_dict; int dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_7__ {int preset_dict_size; int preset_dict; int dict_size; } ;
typedef TYPE_2__ lzma_lz_options ;
struct TYPE_8__ {int * set_uncompressed; int * reset; int * code; int * coder; } ;
typedef TYPE_3__ lzma_lz_decoder ;
typedef int lzma_coder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

extern lzma_ret
FUNC_1(lzma_lz_decoder *VAR_5, lzma_allocator *VAR_6,
  const void *VAR_7, lzma_lz_options *VAR_8)
{
 if (VAR_5->coder == ((void*)0)) {
  VAR_5->coder = FUNC_0(sizeof(lzma_coder), VAR_6);
  if (VAR_5->coder == ((void*)0))
   return VAR_0;

  VAR_5->code = &VAR_2;
  VAR_5->reset = &VAR_3;
  VAR_5->set_uncompressed = &VAR_4;
 }



 const lzma_options_lzma *VAR_9 = VAR_7;
 VAR_8->dict_size = VAR_9->dict_size;
 VAR_8->preset_dict = VAR_9->preset_dict;
 VAR_8->preset_dict_size = VAR_9->preset_dict_size;

 return VAR_1;
}
