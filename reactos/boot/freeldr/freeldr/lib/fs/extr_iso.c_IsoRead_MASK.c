
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_6__ {scalar_t__ LowPart; scalar_t__ HighPart; } ;
struct TYPE_5__ {int FilePointer; int FileSize; int FileStart; } ;
typedef int * PVOID ;
typedef TYPE_1__* PISO_FILE_INFO ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (scalar_t__,int *,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;

ARC_STATUS FUNC_7(ULONG VAR_4, VOID* VAR_5, ULONG VAR_6, ULONG* VAR_7)
{
    ARC_STATUS VAR_8;
    PISO_FILE_INFO VAR_9 = FUNC_3(VAR_4);
    UCHAR VAR_10[VAR_2];
    LARGE_INTEGER VAR_11;
    ULONG VAR_12;
    ULONG VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;
    ULONG VAR_16;
    ULONG VAR_17;

    FUNC_5("IsoRead() Buffer = %p, N = %lu\n", VAR_5, VAR_6);

    VAR_12 = FUNC_2(VAR_4);
    *VAR_7 = 0;





    if (VAR_9->FilePointer >= VAR_9->FileSize)
    {
        return VAR_1;
    }





    if (VAR_9->FilePointer + VAR_6 > VAR_9->FileSize)
    {
        VAR_6 = VAR_9->FileSize - VAR_9->FilePointer;
    }
    if (VAR_9->FilePointer % VAR_2)
    {



        VAR_13 = VAR_9->FileStart + (VAR_9->FilePointer / VAR_2);
        VAR_14 = VAR_9->FilePointer % VAR_2;
        VAR_15 = FUNC_6(VAR_6, VAR_2 - VAR_14);




        VAR_11.HighPart = 0;
        VAR_11.LowPart = VAR_13 * VAR_2;
        VAR_8 = FUNC_1(VAR_12, &VAR_11, VAR_3);
        if (VAR_8 != VAR_1)
        {
            return VAR_8;
        }
        VAR_8 = FUNC_0(VAR_12, VAR_10, VAR_2, &VAR_17);
        if (VAR_8 != VAR_1 || VAR_17 != VAR_2)
        {
            return VAR_0;
        }
        FUNC_4(VAR_5, VAR_10 + VAR_14, VAR_15);
        *VAR_7 += VAR_15;
        VAR_6 -= VAR_15;
        VAR_9->FilePointer += VAR_15;
        VAR_5 = (PVOID)((ULONG_PTR)VAR_5 + VAR_15);
    }




    if (VAR_6 > 0)
    {



        VAR_16 = (VAR_6 / VAR_2);

        VAR_13 = VAR_9->FileStart + (VAR_9->FilePointer / VAR_2);




        VAR_11.HighPart = 0;
        VAR_11.LowPart = VAR_13 * VAR_2;
        VAR_8 = FUNC_1(VAR_12, &VAR_11, VAR_3);
        if (VAR_8 != VAR_1)
        {
            return VAR_8;
        }
        VAR_8 = FUNC_0(VAR_12, VAR_5, VAR_16 * VAR_2, &VAR_17);
        if (VAR_8 != VAR_1 || VAR_17 != VAR_16 * VAR_2)
        {
            return VAR_0;
        }

        *VAR_7 += VAR_16 * VAR_2;
        VAR_6 -= VAR_16 * VAR_2;
        VAR_9->FilePointer += VAR_16 * VAR_2;
        VAR_5 = (PVOID)((ULONG_PTR)VAR_5 + VAR_16 * VAR_2);
    }




    if (VAR_6 > 0)
    {
        VAR_13 = VAR_9->FileStart + (VAR_9->FilePointer / VAR_2);




        VAR_11.HighPart = 0;
        VAR_11.LowPart = VAR_13 * VAR_2;
        VAR_8 = FUNC_1(VAR_12, &VAR_11, VAR_3);
        if (VAR_8 != VAR_1)
        {
            return VAR_8;
        }
        VAR_8 = FUNC_0(VAR_12, VAR_10, VAR_2, &VAR_17);
        if (VAR_8 != VAR_1 || VAR_17 != VAR_2)
        {
            return VAR_0;
        }
        FUNC_4(VAR_5, VAR_10, VAR_6);
        *VAR_7 += VAR_6;
        VAR_9->FilePointer += VAR_6;
    }

    FUNC_5("IsoRead() done\n");

    return VAR_1;
}
