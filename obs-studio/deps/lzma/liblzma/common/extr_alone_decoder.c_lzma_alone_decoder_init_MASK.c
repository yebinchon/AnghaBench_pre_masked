
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int lzma_ret ;
struct TYPE_8__ {TYPE_6__* coder; int * memconfig; int * end; int * code; } ;
typedef TYPE_2__ lzma_next_coder ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_7__ {scalar_t__ preset_dict_size; int * preset_dict; scalar_t__ dict_size; } ;
struct TYPE_9__ {int picky; int memusage; scalar_t__ memlimit; scalar_t__ uncompressed_size; TYPE_1__ options; scalar_t__ pos; int sequence; int next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_0 (int,int *) ;
 int FUNC_1 (int (*) (TYPE_2__*,int *,scalar_t__,int),TYPE_2__*,int *) ;

extern lzma_ret
FUNC_2(lzma_next_coder *VAR_9, lzma_allocator *VAR_10,
  uint64_t VAR_11, bool VAR_12)
{
 FUNC_1(&FUNC_2, VAR_9, VAR_10);

 if (VAR_11 == 0)
  return VAR_4;

 if (VAR_9->coder == ((void*)0)) {
  VAR_9->coder = FUNC_0(sizeof(lzma_coder), VAR_10);
  if (VAR_9->coder == ((void*)0))
   return VAR_1;

  VAR_9->code = &VAR_6;
  VAR_9->end = &VAR_7;
  VAR_9->memconfig = &VAR_8;
  VAR_9->coder->next = VAR_2;
 }

 VAR_9->coder->sequence = VAR_5;
 VAR_9->coder->picky = VAR_12;
 VAR_9->coder->pos = 0;
 VAR_9->coder->options.dict_size = 0;
 VAR_9->coder->options.preset_dict = ((void*)0);
 VAR_9->coder->options.preset_dict_size = 0;
 VAR_9->coder->uncompressed_size = 0;
 VAR_9->coder->memlimit = VAR_11;
 VAR_9->coder->memusage = VAR_0;

 return VAR_3;
}
