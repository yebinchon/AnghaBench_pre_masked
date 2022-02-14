
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_6__ {TYPE_4__* coder; int * memconfig; int * get_check; int * end; int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_7__ {int flags; int sequence; scalar_t__ memlimit; int next; } ;


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
 int VAR_10 ;
 TYPE_4__* FUNC_0 (int,int *) ;
 int FUNC_1 (int (*) (TYPE_1__*,int *,scalar_t__,int),TYPE_1__*,int *) ;

__attribute__((used)) static lzma_ret
FUNC_2(lzma_next_coder *VAR_11, lzma_allocator *VAR_12,
  uint64_t VAR_13, uint32_t VAR_14)
{
 FUNC_1(&FUNC_2, VAR_11, VAR_12);

 if (VAR_13 == 0)
  return VAR_4;

 if (VAR_14 & ~VAR_5)
  return VAR_3;

 if (VAR_11->coder == ((void*)0)) {
  VAR_11->coder = FUNC_0(sizeof(lzma_coder), VAR_12);
  if (VAR_11->coder == ((void*)0))
   return VAR_0;

  VAR_11->code = &VAR_7;
  VAR_11->end = &VAR_8;
  VAR_11->get_check = &VAR_9;
  VAR_11->memconfig = &VAR_10;
  VAR_11->coder->next = VAR_1;
 }

 VAR_11->coder->memlimit = VAR_13;
 VAR_11->coder->flags = VAR_14;
 VAR_11->coder->sequence = VAR_6;

 return VAR_2;
}
