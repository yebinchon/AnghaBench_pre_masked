
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int LatchStatusSet; size_t StatusLatch; scalar_t__ ReadStatus; int OutputLatch; } ;
typedef int * LPWORD ;
typedef int* LPBYTE ;
typedef size_t BYTE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (size_t) ;

__attribute__((used)) static BYTE FUNC_4(BYTE VAR_2)
{
    LPBYTE VAR_3 = ((void*)0);
    LPWORD VAR_4 = ((void*)0);





    if (VAR_1[VAR_2].LatchStatusSet)
    {
        VAR_1[VAR_2].LatchStatusSet = VAR_0;
        return VAR_1[VAR_2].StatusLatch;
    }


    if (VAR_1[VAR_2].ReadStatus == 0) FUNC_3(VAR_2);


    FUNC_0(VAR_1[VAR_2].ReadStatus != 0);

    VAR_3 = &VAR_1[VAR_2].ReadStatus ;
    VAR_4 = &VAR_1[VAR_2].OutputLatch;

    if (*VAR_3 & 1)
    {

        *VAR_3 &= ~1;
        return FUNC_2(*VAR_4);
    }

    if (*VAR_3 & 2)
    {

        *VAR_3 &= ~2;
        return FUNC_1(*VAR_4);
    }


    FUNC_0(VAR_0);
    return 0;
}
