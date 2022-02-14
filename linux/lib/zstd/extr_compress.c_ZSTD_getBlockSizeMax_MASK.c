
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int windowLog; } ;
struct TYPE_6__ {TYPE_1__ cParams; } ;
struct TYPE_7__ {TYPE_2__ params; } ;
typedef TYPE_3__ ZSTD_CCtx ;


 size_t FUNC_0 (int ,int) ;
 int VAR_0 ;

size_t FUNC_1(ZSTD_CCtx *VAR_1) { return FUNC_0(VAR_0, 1 << VAR_1->params.cParams.windowLog); }
