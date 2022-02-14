
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_9__ {scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_10__ {scalar_t__ before_size; scalar_t__ dict_size; } ;
typedef TYPE_2__ lzma_lz_options ;
struct TYPE_11__ {TYPE_6__* coder; int * options_update; int * end; int * code; } ;
typedef TYPE_3__ lzma_lz_encoder ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_12__ {int need_properties; int need_state_reset; int need_dictionary_reset; TYPE_1__ opt_cur; int * lzma; int sequence; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* FUNC_0 (int,int *) ;
 int FUNC_1 (int **,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static lzma_ret
FUNC_3(lzma_lz_encoder *VAR_8, lzma_allocator *VAR_9,
  const void *VAR_10, lzma_lz_options *VAR_11)
{
 if (VAR_10 == ((void*)0))
  return VAR_3;

 if (VAR_8->coder == ((void*)0)) {
  VAR_8->coder = FUNC_0(sizeof(lzma_coder), VAR_9);
  if (VAR_8->coder == ((void*)0))
   return VAR_1;

  VAR_8->code = &VAR_5;
  VAR_8->end = &VAR_6;
  VAR_8->options_update = &VAR_7;

  VAR_8->coder->lzma = ((void*)0);
 }

 VAR_8->coder->opt_cur = *(const lzma_options_lzma *)(VAR_10);

 VAR_8->coder->sequence = VAR_4;
 VAR_8->coder->need_properties = 1;
 VAR_8->coder->need_state_reset = 0;
 VAR_8->coder->need_dictionary_reset
   = VAR_8->coder->opt_cur.preset_dict == ((void*)0)
   || VAR_8->coder->opt_cur.preset_dict_size == 0;


 FUNC_2(FUNC_1(&VAR_8->coder->lzma, VAR_9,
   &VAR_8->coder->opt_cur, VAR_11));






 if (VAR_11->before_size + VAR_11->dict_size < VAR_0)
  VAR_11->before_size
    = VAR_0 - VAR_11->dict_size;

 return VAR_2;
}
