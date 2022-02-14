
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ SIZE_T ;
typedef int * PVOID ;
typedef scalar_t__ PUCHAR ;
typedef scalar_t__* PSIZE_T ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;

__attribute__((used)) static
NTSTATUS
FUNC_6(
    ULONG VAR_5,
    PVOID VAR_6,
    SIZE_T VAR_7,
    PSIZE_T VAR_8)
{
    NTSTATUS VAR_9;

    if ((VAR_5 == 129) ||
        (VAR_5 == 130) ||
        (VAR_5 == 133) ||
        (VAR_5 == 132) ||
        (VAR_5 == 135) ||
        (VAR_5 == 131) ||
        (VAR_5 == 134))
    {

        if ((VAR_6 == ((void*)0)) || (VAR_8 == ((void*)0)))
        {
            return VAR_3;
        }


        if (VAR_7 < *VAR_8)
        {

            FUNC_4((PUCHAR)VAR_6 + VAR_7,
                                *VAR_8 - VAR_7);
        }
    }


    switch (VAR_5)
    {
        case 128:

            VAR_9 = VAR_4;
            break;

        case 129:

            VAR_9 = FUNC_3(VAR_6, *VAR_8);
            break;

        case 130:

            VAR_9 = FUNC_2(VAR_6,
                                       *VAR_8,
                                       VAR_2);
            break;

        case 133:

            VAR_9 = FUNC_1(VAR_6,
                                       *VAR_8,
                                       VAR_2);
            break;

        case 132:

            VAR_9 = FUNC_2(VAR_6,
                                       *VAR_8,
                                       VAR_0);
            break;

        case 135:

            VAR_9 = FUNC_1(VAR_6,
                                       *VAR_8,
                                       VAR_0);
            break;

        case 131:

            VAR_9 = FUNC_2(VAR_6,
                                       *VAR_8,
                                       VAR_1);
            break;

        case 134:

            VAR_9 = FUNC_1(VAR_6,
                                       *VAR_8,
                                       VAR_1);
            break;

        default:
            FUNC_0("Unhandled control code 0x%lx\n", VAR_5);
            FUNC_5();
            return VAR_3;
    }

    return VAR_9;
}
