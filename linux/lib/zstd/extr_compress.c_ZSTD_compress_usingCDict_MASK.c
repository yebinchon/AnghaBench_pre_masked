
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* refContext; } ;
typedef TYPE_6__ ZSTD_CDict ;
struct TYPE_16__ {int contentSizeFlag; } ;
struct TYPE_17__ {TYPE_4__ fParams; } ;
struct TYPE_19__ {size_t frameContentSize; TYPE_5__ params; } ;
typedef TYPE_7__ ZSTD_CCtx ;
struct TYPE_13__ {int contentSizeFlag; } ;
struct TYPE_14__ {TYPE_1__ fParams; } ;
struct TYPE_15__ {TYPE_2__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_6__ const*,size_t) ;
 size_t FUNC_2 (TYPE_7__*,void*,size_t,void const*,size_t) ;

size_t FUNC_3(ZSTD_CCtx *VAR_0, void *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4, const ZSTD_CDict *VAR_5)
{
 FUNC_0(FUNC_1(VAR_0, VAR_5, VAR_4));

 if (VAR_5->refContext->params.fParams.contentSizeFlag == 1) {
  VAR_0->params.fParams.contentSizeFlag = 1;
  VAR_0->frameContentSize = VAR_4;
 } else {
  VAR_0->params.fParams.contentSizeFlag = 0;
 }

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
