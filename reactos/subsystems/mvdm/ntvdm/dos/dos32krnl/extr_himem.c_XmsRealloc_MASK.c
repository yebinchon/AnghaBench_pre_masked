
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_4__ {scalar_t__ Address; scalar_t__ Size; scalar_t__ LockCount; } ;
typedef TYPE_1__* PXMS_HANDLE ;
typedef int PVOID ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static UCHAR FUNC_8(WORD VAR_9, WORD VAR_10)
{
    DWORD VAR_11;
    PXMS_HANDLE VAR_12 = FUNC_0(VAR_9);
    DWORD VAR_13 = 0;
    ULONG VAR_14;
    ULONG VAR_15;

    if (!FUNC_7(VAR_12))
        return VAR_5;

    if (VAR_12->LockCount)
        return VAR_6;


    VAR_11 = (VAR_12->Address - VAR_2) / VAR_4;

    if (VAR_10 < VAR_12->Size)
    {

        FUNC_3(&VAR_0, VAR_11 + VAR_10, VAR_12->Size - VAR_10);
        VAR_1 += VAR_12->Size - VAR_10;
        VAR_12->Size = VAR_10;
    }
    else if (VAR_10 > VAR_12->Size)
    {

        if (FUNC_2(&VAR_0,
                            VAR_11 + VAR_12->Size,
                            VAR_10 - VAR_12->Size))
        {

            FUNC_6(&VAR_0,
                       VAR_11 + VAR_12->Size,
                       VAR_10 - VAR_12->Size);
            VAR_1 -= VAR_10 - VAR_12->Size;
            VAR_12->Size = VAR_10;


            return VAR_8;
        }


        FUNC_3(&VAR_0, VAR_11, VAR_12->Size);


        while (VAR_13 < VAR_3)
        {
            VAR_15 = FUNC_4(&VAR_0, VAR_13, &VAR_14);
            if (VAR_15 == 0) break;

            if (VAR_15 >= VAR_10)
            {

                FUNC_6(&VAR_0, VAR_14, VAR_10);


                FUNC_5((PVOID)FUNC_1(VAR_2 + VAR_14 * VAR_4),
                              (PVOID)FUNC_1(VAR_12->Address),
                              VAR_12->Size * VAR_4);


                VAR_12->Address = VAR_2 + VAR_14 * VAR_4;
                VAR_12->Size = VAR_10;


                VAR_1 -= VAR_10 - VAR_12->Size;

                return VAR_8;
            }


            VAR_13 = VAR_14 + VAR_15;
        }


        FUNC_6(&VAR_0, VAR_11, VAR_12->Size);
        return VAR_7;
    }

    return VAR_8;
}
