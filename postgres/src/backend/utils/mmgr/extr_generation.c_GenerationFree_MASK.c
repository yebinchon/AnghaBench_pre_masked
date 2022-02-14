
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ nfree; scalar_t__ nchunks; scalar_t__ blksize; int node; } ;
struct TYPE_12__ {scalar_t__ requested_size; scalar_t__ size; int * context; TYPE_4__* block; } ;
struct TYPE_11__ {TYPE_4__* block; } ;
struct TYPE_10__ {int mem_allocated; int name; } ;
typedef TYPE_1__* MemoryContext ;
typedef TYPE_2__ GenerationContext ;
typedef TYPE_3__ GenerationChunk ;
typedef TYPE_4__ GenerationBlock ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (void*,scalar_t__) ;
 int FUNC_7 (void*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(MemoryContext VAR_2, void *VAR_3)
{
 GenerationContext *VAR_4 = (GenerationContext *) VAR_2;
 GenerationChunk *VAR_5 = FUNC_1(VAR_3);
 GenerationBlock *VAR_6;


 FUNC_2(VAR_5, VAR_0);

 VAR_6 = VAR_5->block;
 VAR_5->context = ((void*)0);






 VAR_6->nfree += 1;

 FUNC_0(VAR_6->nchunks > 0);
 FUNC_0(VAR_6->nfree <= VAR_6->nchunks);


 if (VAR_6->nfree < VAR_6->nchunks)
  return;





 FUNC_3(&VAR_6->node);


 if (VAR_4->block == VAR_6)
  VAR_4->block = ((void*)0);

 VAR_2->mem_allocated -= VAR_6->blksize;
 FUNC_5(VAR_6);
}
