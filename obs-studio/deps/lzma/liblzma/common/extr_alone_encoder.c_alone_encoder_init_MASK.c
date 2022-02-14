
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_12__ {scalar_t__ dict_size; } ;
typedef TYPE_1__ lzma_options_lzma ;
struct TYPE_13__ {TYPE_9__* coder; int * end; int * code; } ;
typedef TYPE_2__ lzma_next_coder ;
struct TYPE_14__ {void* options; int * init; } ;
typedef TYPE_3__ lzma_filter_info ;
typedef int lzma_coder ;
typedef int lzma_allocator ;
struct TYPE_15__ {int next; scalar_t__ header; scalar_t__ header_pos; int sequence; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_9__* FUNC_0 (int,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_2 (int (*) (TYPE_2__*,int *,TYPE_1__ const*),TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *,TYPE_3__ const*) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static lzma_ret
FUNC_6(lzma_next_coder *VAR_9, lzma_allocator *VAR_10,
  const lzma_options_lzma *VAR_11)
{
 FUNC_2(&FUNC_6, VAR_9, VAR_10);

 if (VAR_9->coder == ((void*)0)) {
  VAR_9->coder = FUNC_0(sizeof(lzma_coder), VAR_10);
  if (VAR_9->coder == ((void*)0))
   return VAR_1;

  VAR_9->code = &VAR_6;
  VAR_9->end = &VAR_7;
  VAR_9->coder->next = VAR_2;
 }


 VAR_9->coder->sequence = VAR_4;
 VAR_9->coder->header_pos = 0;



 if (FUNC_1(VAR_11, VAR_9->coder->header))
  return VAR_3;


 if (VAR_11->dict_size < VAR_0)
  return VAR_3;





 uint32_t VAR_12 = VAR_11->dict_size - 1;
 VAR_12 |= VAR_12 >> 2;
 VAR_12 |= VAR_12 >> 3;
 VAR_12 |= VAR_12 >> 4;
 VAR_12 |= VAR_12 >> 8;
 VAR_12 |= VAR_12 >> 16;
 if (VAR_12 != VAR_5)
  ++VAR_12;

 FUNC_5(VAR_9->coder->header + 1, VAR_12);


 FUNC_4(VAR_9->coder->header + 1 + 4, 0xFF, 8);


 const lzma_filter_info VAR_13[2] = {
  {
   .init = &VAR_8,
   .options = (void *)(VAR_11),
  }, {
   .init = ((void*)0),
  }
 };

 return FUNC_3(&VAR_9->coder->next, VAR_10, VAR_13);
}
