
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_3__ {scalar_t__ pos; int sequence; int * index_hash; } ;
typedef TYPE_1__ lzma_coder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static lzma_ret
FUNC_1(lzma_coder *VAR_3, lzma_allocator *VAR_4)
{

 VAR_3->index_hash = FUNC_0(VAR_3->index_hash, VAR_4);
 if (VAR_3->index_hash == ((void*)0))
  return VAR_0;


 VAR_3->sequence = VAR_2;
 VAR_3->pos = 0;

 return VAR_1;
}
