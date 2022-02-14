
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lzma_ret ;
struct TYPE_9__ {int dist; } ;
typedef TYPE_1__ lzma_options_delta ;
struct TYPE_10__ {TYPE_8__* coder; int * end; } ;
typedef TYPE_2__ lzma_next_coder ;
struct TYPE_11__ {TYPE_1__* options; } ;
typedef TYPE_3__ lzma_filter_info ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_12__ {int next; int history; scalar_t__ pos; int distance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_8__* FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,TYPE_3__ const*) ;
 int FUNC_3 (int ,int ) ;

extern lzma_ret
FUNC_4(lzma_next_coder *VAR_6, lzma_allocator *VAR_7,
  const lzma_filter_info *VAR_8)
{

 if (VAR_6->coder == ((void*)0)) {
  VAR_6->coder = FUNC_0(sizeof(lzma_coder), VAR_7);
  if (VAR_6->coder == ((void*)0))
   return VAR_1;


  VAR_6->end = &VAR_5;
  VAR_6->coder->next = VAR_2;
 }


 if (FUNC_1(VAR_8[0].options) == VAR_4)
  return VAR_3;


 const lzma_options_delta *VAR_9 = VAR_8[0].options;
 VAR_6->coder->distance = VAR_9->dist;


 VAR_6->coder->pos = 0;
 FUNC_3(VAR_6->coder->history, VAR_0);


 return FUNC_2(&VAR_6->coder->next,
   VAR_7, VAR_8 + 1);
}
