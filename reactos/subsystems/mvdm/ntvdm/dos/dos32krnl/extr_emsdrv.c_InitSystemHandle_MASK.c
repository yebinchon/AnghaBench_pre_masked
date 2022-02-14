
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {size_t Handle; int Entry; } ;
struct TYPE_4__ {scalar_t__ PageCount; int PageList; scalar_t__ Allocated; } ;
typedef TYPE_1__* PEMS_HANDLE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (size_t) ;
 TYPE_1__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static UCHAR FUNC_5(USHORT VAR_7)
{




    ULONG VAR_8, VAR_9 = 0;
    PEMS_HANDLE VAR_10 = &VAR_4[VAR_3];


    FUNC_0(!VAR_10->Allocated);


    VAR_10->Allocated = VAR_6;

    while (VAR_10->PageCount < VAR_7)
    {
        ULONG VAR_11;
        ULONG VAR_12 = FUNC_3(&VAR_0, VAR_9, &VAR_11);

        if (VAR_12 == 0)
        {

            FUNC_1(VAR_3);





            return VAR_1;
        }
        else if ((VAR_10->PageCount + VAR_12) > VAR_7)
        {

            VAR_12 = VAR_7 - VAR_10->PageCount;
        }

        VAR_9 = VAR_11 + VAR_12;
        VAR_10->PageCount += VAR_12;
        FUNC_4(&VAR_0, VAR_11, VAR_12);

        for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
        {
            VAR_5[VAR_11 + VAR_8].Handle = VAR_3;
            FUNC_2(&VAR_10->PageList, &VAR_5[VAR_11 + VAR_8].Entry);
        }
    }

    return VAR_2;
}
