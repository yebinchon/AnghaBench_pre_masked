
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_9__ {TYPE_8__* coder; int * update; int * end; int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_coder ;
struct TYPE_10__ {scalar_t__ version; int filters; scalar_t__ check; } ;
typedef TYPE_2__ lzma_block ;
typedef int lzma_allocator ;
struct TYPE_11__ {int next; int check; scalar_t__ pos; scalar_t__ uncompressed_size; scalar_t__ compressed_size; TYPE_2__* block; int sequence; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_8__* FUNC_0 (int,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int (*) (TYPE_1__*,int *,TYPE_2__*),TYPE_1__*,int *) ;
 int FUNC_4 (int *,int *,int ) ;

extern lzma_ret
FUNC_5(lzma_next_coder *VAR_10, lzma_allocator *VAR_11,
  lzma_block *VAR_12)
{
 FUNC_3(&FUNC_5, VAR_10, VAR_11);

 if (VAR_12 == ((void*)0))
  return VAR_4;



 if (VAR_12->version != 0)
  return VAR_3;



 if ((unsigned int)(VAR_12->check) > VAR_0)
  return VAR_4;

 if (!FUNC_2(VAR_12->check))
  return VAR_5;


 if (VAR_10->coder == ((void*)0)) {
  VAR_10->coder = FUNC_0(sizeof(lzma_coder), VAR_11);
  if (VAR_10->coder == ((void*)0))
   return VAR_1;

  VAR_10->code = &VAR_7;
  VAR_10->end = &VAR_8;
  VAR_10->update = &VAR_9;
  VAR_10->coder->next = VAR_2;
 }


 VAR_10->coder->sequence = VAR_6;
 VAR_10->coder->block = VAR_12;
 VAR_10->coder->compressed_size = 0;
 VAR_10->coder->uncompressed_size = 0;
 VAR_10->coder->pos = 0;


 FUNC_1(&VAR_10->coder->check, VAR_12->check);


 return FUNC_4(&VAR_10->coder->next, VAR_11,
   VAR_12->filters);
}
