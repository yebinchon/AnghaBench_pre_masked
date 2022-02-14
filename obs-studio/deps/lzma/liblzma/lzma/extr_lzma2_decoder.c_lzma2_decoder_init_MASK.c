
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_6__ {scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_1__ lzma_options_lzma ;
typedef int lzma_lz_options ;
struct TYPE_7__ {TYPE_4__* coder; int * end; int * code; } ;
typedef TYPE_2__ lzma_lz_decoder ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_8__ {int need_properties; int need_dictionary_reset; int lzma; int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *,TYPE_1__ const*,int *) ;

__attribute__((used)) static lzma_ret
FUNC_2(lzma_lz_decoder *VAR_5, lzma_allocator *VAR_6,
  const void *VAR_7, lzma_lz_options *VAR_8)
{
 if (VAR_5->coder == ((void*)0)) {
  VAR_5->coder = FUNC_0(sizeof(lzma_coder), VAR_6);
  if (VAR_5->coder == ((void*)0))
   return VAR_1;

  VAR_5->code = &VAR_3;
  VAR_5->end = &VAR_4;

  VAR_5->coder->lzma = VAR_0;
 }

 const lzma_options_lzma *VAR_9 = VAR_7;

 VAR_5->coder->sequence = VAR_2;
 VAR_5->coder->need_properties = 1;
 VAR_5->coder->need_dictionary_reset = VAR_9->preset_dict == ((void*)0)
   || VAR_9->preset_dict_size == 0;

 return FUNC_1(&VAR_5->coder->lzma,
   VAR_6, VAR_9, VAR_8);
}
