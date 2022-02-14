
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int contentSizeFlag; } ;
struct TYPE_7__ {TYPE_1__ fParams; } ;
struct TYPE_8__ {TYPE_2__ params; } ;
typedef TYPE_3__ ZSTD_CStream ;


 size_t FUNC_0 (TYPE_3__*,unsigned long long) ;

size_t FUNC_1(ZSTD_CStream *VAR_0, unsigned long long VAR_1)
{

 VAR_0->params.fParams.contentSizeFlag = (VAR_1 > 0);

 return FUNC_0(VAR_0, VAR_1);
}
