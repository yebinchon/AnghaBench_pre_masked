
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ checks; int prealloc; scalar_t__ index_list_size; scalar_t__ record_count; scalar_t__ total_size; scalar_t__ uncompressed_size; int streams; } ;
typedef TYPE_1__ lzma_index ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int *) ;

__attribute__((used)) static lzma_index *
FUNC_2(lzma_allocator *VAR_1)
{
 lzma_index *VAR_2 = FUNC_1(sizeof(lzma_index), VAR_1);
 if (VAR_2 != ((void*)0)) {
  FUNC_0(&VAR_2->streams);
  VAR_2->uncompressed_size = 0;
  VAR_2->total_size = 0;
  VAR_2->record_count = 0;
  VAR_2->index_list_size = 0;
  VAR_2->prealloc = VAR_0;
  VAR_2->checks = 0;
 }

 return VAR_2;
}
