
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {int Entry; int Handle; } ;
struct TYPE_4__ {scalar_t__ PageCount; int PageList; } ;
typedef int * PUSHORT ;
typedef TYPE_1__* PEMS_HANDLE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static UCHAR FUNC_5(USHORT VAR_6, PUSHORT VAR_7)
{
    ULONG VAR_8, VAR_9 = 0;
    PEMS_HANDLE VAR_10;

    if (VAR_6 == 0) return VAR_4;

    VAR_10 = FUNC_0(VAR_7);
    if (!VAR_10) return VAR_2;

    while (VAR_10->PageCount < VAR_6)
    {
        ULONG VAR_11;
        ULONG VAR_12 = FUNC_3(&VAR_0, VAR_9, &VAR_11);

        if (VAR_12 == 0)
        {

            FUNC_1(*VAR_7);
            return VAR_1;
        }
        else if ((VAR_10->PageCount + VAR_12) > VAR_6)
        {

            VAR_12 = VAR_6 - VAR_10->PageCount;
        }

        VAR_9 = VAR_11 + VAR_12;
        VAR_10->PageCount += VAR_12;
        FUNC_4(&VAR_0, VAR_11, VAR_12);

        for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
        {
            VAR_5[VAR_11 + VAR_8].Handle = *VAR_7;
            FUNC_2(&VAR_10->PageList, &VAR_5[VAR_11 + VAR_8].Entry);
        }
    }

    return VAR_3;
}
