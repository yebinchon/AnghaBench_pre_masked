
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int lzma_ret ;
struct TYPE_7__ {TYPE_4__* coder; int * memconfig; int * end; int * code; } ;
typedef TYPE_1__ lzma_next_coder ;
typedef int lzma_index ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_8__ {int * index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int *,int **,scalar_t__) ;
 TYPE_4__* FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int (*) (TYPE_1__*,int *,int **,scalar_t__),TYPE_1__*,int *) ;

__attribute__((used)) static lzma_ret
FUNC_4(lzma_next_coder *VAR_5, lzma_allocator *VAR_6,
  lzma_index **VAR_7, uint64_t VAR_8)
{
 FUNC_3(&FUNC_4, VAR_5, VAR_6);

 if (VAR_7 == ((void*)0) || VAR_8 == 0)
  return VAR_1;

 if (VAR_5->coder == ((void*)0)) {
  VAR_5->coder = FUNC_1(sizeof(lzma_coder), VAR_6);
  if (VAR_5->coder == ((void*)0))
   return VAR_0;

  VAR_5->code = &VAR_2;
  VAR_5->end = &VAR_3;
  VAR_5->memconfig = &VAR_4;
  VAR_5->coder->index = ((void*)0);
 } else {
  FUNC_2(VAR_5->coder->index, VAR_6);
 }

 return FUNC_0(VAR_5->coder, VAR_6, VAR_7, VAR_8);
}
