
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int check; int version; } ;
typedef TYPE_3__ lzma_stream_flags ;
typedef int lzma_ret ;
struct TYPE_14__ {TYPE_5__* coder; int (* update ) (TYPE_5__*,int *,int const*,int *) ;int * end; int * code; } ;
typedef TYPE_4__ lzma_next_coder ;
typedef int lzma_filter ;
typedef int lzma_coder ;
typedef int lzma_check ;
typedef int lzma_allocator ;
struct TYPE_12__ {int check; scalar_t__ version; } ;
struct TYPE_15__ {int buffer_size; scalar_t__ buffer_pos; int buffer; int * index; TYPE_2__ block_options; int sequence; void* index_encoder; void* block_encoder; TYPE_1__* filters; } ;
struct TYPE_11__ {int id; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int (*) (TYPE_4__*,int *,int const*,int ),TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_5__*,int *,int const*,int *) ;

extern lzma_ret
FUNC_7(lzma_next_coder *VAR_8, lzma_allocator *VAR_9,
  const lzma_filter *VAR_10, lzma_check VAR_11)
{
 FUNC_3(&FUNC_7, VAR_8, VAR_9);

 if (VAR_10 == ((void*)0))
  return VAR_2;

 if (VAR_8->coder == ((void*)0)) {
  VAR_8->coder = FUNC_0(sizeof(lzma_coder), VAR_9);
  if (VAR_8->coder == ((void*)0))
   return VAR_0;

  VAR_8->code = &VAR_6;
  VAR_8->end = &VAR_7;
  VAR_8->update = &FUNC_6;

  VAR_8->coder->filters[0].id = VAR_4;
  VAR_8->coder->block_encoder = VAR_1;
  VAR_8->coder->index_encoder = VAR_1;
  VAR_8->coder->index = ((void*)0);
 }


 VAR_8->coder->sequence = VAR_5;
 VAR_8->coder->block_options.version = 0;
 VAR_8->coder->block_options.check = VAR_11;


 FUNC_1(VAR_8->coder->index, VAR_9);
 VAR_8->coder->index = FUNC_2(VAR_9);
 if (VAR_8->coder->index == ((void*)0))
  return VAR_0;


 lzma_stream_flags VAR_12 = {
  .version = 0,
  .check = VAR_11,
 };
 FUNC_5(FUNC_4(
   &VAR_12, VAR_8->coder->buffer));

 VAR_8->coder->buffer_pos = 0;
 VAR_8->coder->buffer_size = VAR_3;




 return FUNC_6(
   VAR_8->coder, VAR_9, VAR_10, ((void*)0));
}
