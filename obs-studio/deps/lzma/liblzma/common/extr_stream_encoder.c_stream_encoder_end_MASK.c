
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* filters; int index; int index_encoder; int block_encoder; } ;
typedef TYPE_2__ lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_5__ {scalar_t__ id; TYPE_2__* options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(lzma_coder *VAR_1, lzma_allocator *VAR_2)
{
 FUNC_2(&VAR_1->block_encoder, VAR_2);
 FUNC_2(&VAR_1->index_encoder, VAR_2);
 FUNC_1(VAR_1->index, VAR_2);

 for (size_t VAR_3 = 0; VAR_1->filters[VAR_3].id != VAR_0; ++VAR_3)
  FUNC_0(VAR_1->filters[VAR_3].options, VAR_2);

 FUNC_0(VAR_1, VAR_2);
 return;
}
