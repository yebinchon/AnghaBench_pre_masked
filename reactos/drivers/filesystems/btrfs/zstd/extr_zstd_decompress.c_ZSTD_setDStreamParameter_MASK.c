
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_DStreamParameter_e ;
struct TYPE_3__ {scalar_t__ streamStage; unsigned int maxWindowSize; } ;
typedef TYPE_1__ ZSTD_DStream ;
typedef unsigned int U32 ;


 int FUNC_0 (int,char*,unsigned int) ;

 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

size_t FUNC_2(ZSTD_DStream* VAR_3,
                                ZSTD_DStreamParameter_e VAR_4, unsigned VAR_5)
{
    if (VAR_3->streamStage != VAR_2) return FUNC_1(VAR_1);
    switch(VAR_4)
    {
        default : return FUNC_1(VAR_0);
        case 128 :
            FUNC_0(4, "setting maxWindowSize = %u KB", VAR_5 >> 10);
            VAR_3->maxWindowSize = VAR_5 ? VAR_5 : (U32)(-1);
            break;
    }
    return 0;
}
