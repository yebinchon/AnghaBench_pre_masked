
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* coder; int (* end ) (TYPE_3__*,int *) ;} ;
struct TYPE_7__ {TYPE_3__* buffer; TYPE_3__* hash; } ;
struct TYPE_9__ {TYPE_2__ lz; TYPE_1__ mf; int next; } ;
typedef TYPE_3__ lzma_coder ;
typedef int lzma_allocator ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_3(lzma_coder *VAR_0, lzma_allocator *VAR_1)
{
 FUNC_1(&VAR_0->next, VAR_1);

 FUNC_0(VAR_0->mf.hash, VAR_1);
 FUNC_0(VAR_0->mf.buffer, VAR_1);

 if (VAR_0->lz.end != ((void*)0))
  VAR_0->lz.end(VAR_0->lz.coder, VAR_1);
 else
  FUNC_0(VAR_0->lz.coder, VAR_1);

 FUNC_0(VAR_0, VAR_1);
 return;
}
