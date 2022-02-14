
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* filters; } ;
typedef TYPE_2__ lzma_block ;
typedef int lzma_allocator ;
struct TYPE_4__ {int * options; int id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(lzma_block *VAR_2, lzma_allocator *VAR_3)
{



 for (size_t VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  FUNC_0(VAR_2->filters[VAR_4].options, VAR_3);
  VAR_2->filters[VAR_4].id = VAR_1;
  VAR_2->filters[VAR_4].options = ((void*)0);
 }

 return;
}
