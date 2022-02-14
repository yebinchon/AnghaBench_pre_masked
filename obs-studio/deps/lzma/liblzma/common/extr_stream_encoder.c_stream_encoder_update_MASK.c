
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ lzma_ret ;
struct TYPE_15__ {scalar_t__ id; int options; } ;
typedef TYPE_3__ lzma_filter ;
struct TYPE_14__ {int coder; int (* update ) (int ,int *,TYPE_3__ const*,TYPE_3__ const*) ;} ;
struct TYPE_13__ {TYPE_3__* filters; } ;
struct TYPE_16__ {scalar_t__ sequence; int block_encoder_is_initialized; TYPE_3__* filters; TYPE_2__ block_encoder; TYPE_1__ block_options; } ;
typedef TYPE_4__ lzma_coder ;
typedef int lzma_allocator ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__ const*,TYPE_3__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,TYPE_3__ const*,TYPE_3__ const*) ;

__attribute__((used)) static lzma_ret
FUNC_5(lzma_coder *VAR_5, lzma_allocator *VAR_6,
  const lzma_filter *VAR_7,
  const lzma_filter *VAR_8)
{
 if (VAR_5->sequence <= VAR_4) {




  VAR_5->block_encoder_is_initialized = 0;
  VAR_5->block_options.filters = (lzma_filter *)(VAR_7);
  const lzma_ret VAR_9 = FUNC_0(VAR_5, VAR_6);
  VAR_5->block_options.filters = VAR_5->filters;
  if (VAR_9 != VAR_0)
   return VAR_9;

  VAR_5->block_encoder_is_initialized = 1;

 } else if (VAR_5->sequence <= VAR_3) {


  FUNC_3(VAR_5->block_encoder.update(
    VAR_5->block_encoder.coder, VAR_6,
    VAR_7, VAR_8));
 } else {


  return VAR_1;
 }


 for (size_t VAR_10 = 0; VAR_5->filters[VAR_10].id != VAR_2; ++VAR_10)
  FUNC_2(VAR_5->filters[VAR_10].options, VAR_6);

 return FUNC_1(VAR_7, VAR_5->filters, VAR_6);
}
