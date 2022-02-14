
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int USHORT ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int* Value; } ;
typedef TYPE_1__* PSID_IDENTIFIER_AUTHORITY ;
typedef int PSID ;
typedef scalar_t__ LPTSTR ;
typedef scalar_t__ DWORD ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__,...) ;

__attribute__((used)) static VOID
FUNC_6(PSID VAR_1,
           LPTSTR VAR_2)
{
    PSID_IDENTIFIER_AUTHORITY VAR_3;
    DWORD VAR_4;
    DWORD VAR_5 = VAR_0;
    DWORD VAR_6;
    DWORD VAR_7;

    VAR_3 = FUNC_0(VAR_1);

    VAR_4 = *FUNC_2(VAR_1);

    VAR_7 = FUNC_5(VAR_2, FUNC_3("S-%lu-"), VAR_5);

    if ((VAR_3->Value[0] != 0) || (VAR_3->Value[1] != 0))
    {
        VAR_7 += FUNC_5(VAR_2 + FUNC_4(VAR_2),
                              FUNC_3("0x%02hx%02hx%02hx%02hx%02hx%02hx"),
                              (USHORT)VAR_3->Value[0],
                              (USHORT)VAR_3->Value[1],
                              (USHORT)VAR_3->Value[2],
                              (USHORT)VAR_3->Value[3],
                              (USHORT)VAR_3->Value[4],
                              (USHORT)VAR_3->Value[5]);
    }
    else
    {
        VAR_7 += FUNC_5(VAR_2 + FUNC_4(VAR_2),
                              FUNC_3("%lu"),
                              (ULONG)(VAR_3->Value[5]) +
                              (ULONG)(VAR_3->Value[4] << 8) +
                              (ULONG)(VAR_3->Value[3] << 16) +
                              (ULONG)(VAR_3->Value[2] << 24));
    }

    for (VAR_6 = 0 ; VAR_6 < VAR_4 ; VAR_6++)
    {
        VAR_7 += FUNC_5(VAR_2 + VAR_7, FUNC_3("-%lu"),
                              *FUNC_1(VAR_1, VAR_6));
    }
}
