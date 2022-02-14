
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_7__ {TYPE_2__* coder; int * memconfig; int * get_check; int * end; int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_8__ {int tell_no_check; int tell_unsupported_check; int tell_any_check; int concatenated; int first_stream; int memusage; scalar_t__ memlimit; int * index_hash; int block_decoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (int,int *) ;
 int FUNC_1 (int (*) (TYPE_1__*,int *,scalar_t__,int),TYPE_1__*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_2__*,int *) ;

extern lzma_ret
FUNC_3(lzma_next_coder *VAR_14, lzma_allocator *VAR_15,
  uint64_t VAR_16, uint32_t VAR_17)
{
 FUNC_1(&FUNC_3, VAR_14, VAR_15);

 if (VAR_16 == 0)
  return VAR_5;

 if (VAR_17 & ~VAR_6)
  return VAR_4;

 if (VAR_14->coder == ((void*)0)) {
  VAR_14->coder = FUNC_0(sizeof(lzma_coder), VAR_15);
  if (VAR_14->coder == ((void*)0))
   return VAR_2;

  VAR_14->code = &VAR_10;
  VAR_14->end = &VAR_11;
  VAR_14->get_check = &VAR_12;
  VAR_14->memconfig = &VAR_13;

  VAR_14->coder->block_decoder = VAR_3;
  VAR_14->coder->index_hash = ((void*)0);
 }

 VAR_14->coder->memlimit = VAR_16;
 VAR_14->coder->memusage = VAR_1;
 VAR_14->coder->tell_no_check = (VAR_17 & VAR_8) != 0;
 VAR_14->coder->tell_unsupported_check
   = (VAR_17 & VAR_9) != 0;
 VAR_14->coder->tell_any_check = (VAR_17 & VAR_7) != 0;
 VAR_14->coder->concatenated = (VAR_17 & VAR_0) != 0;
 VAR_14->coder->first_stream = 1;

 return FUNC_2(VAR_14->coder, VAR_15);
}
