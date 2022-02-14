
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ blockSizeID; void* blockChecksumFlag; void* contentChecksumFlag; void* blockMode; } ;
typedef TYPE_1__ LZ4F_frameInfo_t ;


 void* FUNC_0 (int *,scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

LZ4F_frameInfo_t FUNC_1(uint32_t* VAR_10)
{
    LZ4F_frameInfo_t VAR_11 = VAR_0;
    VAR_11.blockSizeID = FUNC_0(VAR_10, VAR_7 - 1, VAR_6);
    if (VAR_11.blockSizeID < VAR_7) {
        VAR_11.blockSizeID = VAR_5;
    }
    VAR_11.blockMode = FUNC_0(VAR_10, VAR_3, VAR_2);
    VAR_11.contentChecksumFlag = FUNC_0(VAR_10, VAR_9,
                                           VAR_4);
    VAR_11.blockChecksumFlag = FUNC_0(VAR_10, VAR_8,
                                         VAR_1);
    return VAR_11;
}
