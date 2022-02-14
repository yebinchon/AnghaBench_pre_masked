
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int segment; int offset; } ;
struct TYPE_6__ {scalar_t__ BufferSize; TYPE_1__ Buffer; } ;
typedef TYPE_2__ t_PXENV_TFTP_READ ;
typedef int readData ;
typedef int VOID ;
typedef int ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
typedef int ARC_STATUS ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static ARC_STATUS FUNC_3(ULONG VAR_11, VOID* VAR_12, ULONG VAR_13, ULONG* VAR_14)
{
    t_PXENV_TFTP_READ VAR_15;
    ULONG VAR_16;

    *VAR_14 = 0;

    if (VAR_8 == VAR_3 || VAR_11 != VAR_8)
        return VAR_0;

    FUNC_2(&VAR_15, sizeof(VAR_15));
    VAR_15.Buffer.segment = ((ULONG_PTR)VAR_9 & 0xf0000) / 16;
    VAR_15.Buffer.offset = (ULONG_PTR)VAR_9 & 0xffff;


    while (VAR_13 > 0)
    {
        if (VAR_13 < VAR_6 - VAR_7)
            VAR_16 = VAR_13;
        else
            VAR_16 = VAR_6 - VAR_7;
        if (VAR_5)
            FUNC_1(VAR_12, VAR_5 + VAR_7, VAR_16);
        else
            FUNC_1(VAR_12, VAR_9 + VAR_7 - VAR_10, VAR_16);
        VAR_7 += VAR_16;
        VAR_12 = (UCHAR*)VAR_12 + VAR_16;
        *VAR_14 += VAR_16;
        VAR_13 -= VAR_16;
        if (VAR_13 == 0)
            break;

        if (!FUNC_0(VAR_4, &VAR_15))
            return VAR_1;
        if (VAR_5)
            FUNC_1(VAR_5 + VAR_6, VAR_9, VAR_15.BufferSize);
        VAR_10 = VAR_6;
        VAR_6 += VAR_15.BufferSize;
    }

    return VAR_2;
}
