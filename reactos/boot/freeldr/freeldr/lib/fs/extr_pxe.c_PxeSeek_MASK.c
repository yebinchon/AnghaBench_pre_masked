
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int segment; int offset; } ;
struct TYPE_8__ {scalar_t__ BufferSize; TYPE_1__ Buffer; } ;
typedef TYPE_2__ t_PXENV_TFTP_READ ;
typedef int readData ;
typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_9__ {scalar_t__ HighPart; scalar_t__ LowPart; } ;
typedef scalar_t__ SEEKMODE ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef scalar_t__ ARC_STATUS ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static ARC_STATUS FUNC_5(ULONG VAR_15, LARGE_INTEGER* VAR_16, SEEKMODE VAR_17)
{
    t_PXENV_TFTP_READ VAR_18;

    if (VAR_11 == VAR_4 || VAR_15 != VAR_11)
        return VAR_0;

    if (VAR_16->HighPart != 0 || VAR_17 != VAR_7)
        return VAR_1;

    if (!VAR_8 && VAR_16->LowPart < VAR_10)
    {

        if (FUNC_1(VAR_15) != VAR_3)
            return VAR_2;
        if (FUNC_2(VAR_12, VAR_5, &VAR_15) != VAR_3)
            return VAR_2;
    }

    FUNC_4(&VAR_18, sizeof(VAR_18));
    VAR_18.Buffer.segment = ((ULONG_PTR)VAR_13 & 0xf0000) / 16;
    VAR_18.Buffer.offset = (ULONG_PTR)VAR_13 & 0xffff;


    while (VAR_16->LowPart > VAR_9)
    {
        if (!FUNC_0(VAR_6, &VAR_18))
            return VAR_2;
        if (VAR_8)
        {
            FUNC_3(VAR_8 + VAR_9, VAR_13, VAR_18.BufferSize);
        }
        VAR_14 = VAR_9;
        VAR_9 += VAR_18.BufferSize;
    }

    VAR_10 = VAR_16->LowPart;
    return VAR_3;
}
