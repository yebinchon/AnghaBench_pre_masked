
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int cValues; scalar_t__* aulPropTag; } ;
typedef TYPE_1__ SPropTagArray ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    SPropTagArray VAR_6;
    ULONG VAR_7, VAR_8;

    if (!&FUNC_1)
    {
        FUNC_2("FBadColumnSet is not available\n");
        return;
    }

    VAR_8 = FUNC_1(((void*)0));
    FUNC_0(VAR_8 != 0, "(null): Expected non-zero, got 0\n");

    VAR_6.cValues = 1;

    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    {
        BOOL VAR_9 = VAR_5;

        VAR_6.aulPropTag[0] = VAR_7;

        switch (VAR_7 & (~VAR_1 & VAR_3))
        {
        case 128:
        case 135:
        case 138:
        case 137:
        case 133:
        case 132:
        case 139:
        case 143:
        case 141:
        case 134:
        case 136:
        case 131:
        case 129:
        case 130:
        case 140:
        case 142:
            VAR_9 = VAR_0;
        }
        if (VAR_7 == (VAR_1|VAR_4))
            VAR_9 = VAR_0;

        VAR_8 = FUNC_1(&VAR_6);
        if (VAR_9)
            FUNC_0(VAR_8 != 0, "pt= %d: Expected non-zero, got 0\n", VAR_7);
        else
            FUNC_0(VAR_8 == 0,
               "pt= %d: Expected zero, got %d\n", VAR_7, VAR_8);
    }
}
