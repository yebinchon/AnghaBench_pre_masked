
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ noForwardProgress; int streamStage; } ;
typedef TYPE_1__ ZSTD_DStream ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,void const*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;

size_t FUNC_3(ZSTD_DStream* VAR_2, const void* VAR_3, size_t VAR_4)
{
    FUNC_1(4, "ZSTD_initDStream_usingDict");
    VAR_2->streamStage = VAR_1;
    VAR_2->noForwardProgress = 0;
    FUNC_0( FUNC_2(VAR_2, VAR_3, VAR_4) );
    return VAR_0;
}
