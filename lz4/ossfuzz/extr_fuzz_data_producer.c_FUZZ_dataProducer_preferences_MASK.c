
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* favorDecSpeed; void* autoFlush; scalar_t__ compressionLevel; int frameInfo; } ;
typedef TYPE_1__ LZ4F_preferences_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

LZ4F_preferences_t FUNC_2(FUZZ_dataProducer_t* VAR_2)
{
    LZ4F_preferences_t VAR_3 = VAR_0;
    VAR_3.frameInfo = FUNC_0(VAR_2);
    VAR_3.compressionLevel = FUNC_1(VAR_2, 0, VAR_1 + 3) - 3;
    VAR_3.autoFlush = FUNC_1(VAR_2, 0, 1);
    VAR_3.favorDecSpeed = FUNC_1(VAR_2, 0, 1);
    return VAR_3;
}
