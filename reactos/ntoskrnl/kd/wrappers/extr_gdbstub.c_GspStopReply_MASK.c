
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int Eip; int Ebp; } ;
typedef TYPE_1__* PKTRAP_FRAME ;
typedef char* PCHAR ;
typedef int NTSTATUS ;
typedef int LONG ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (char*,char*,int,int ) ;
 char* VAR_2 ;
 void** VAR_3 ;
 size_t VAR_4 ;
__attribute__((used)) static void
FUNC_2(NTSTATUS VAR_5, PKTRAP_FRAME VAR_6)
{
    PCHAR VAR_7 = VAR_2;
    ULONG VAR_8;
    LONG VAR_9;

    switch (VAR_5)
    {
        case 131:
            VAR_8 = 8;
            break;
        case 129:
        case 134:
            VAR_8 = 5;
            break;
        case 130:
        case 135:
            VAR_8 = 16;
            break;
        case 132:
            VAR_8 = 4;
            break;
        case 128:
        case 133:
        case 136:
            VAR_8 = 11;
            break;
        default:
            VAR_8 = 7;
    }

    VAR_7 = VAR_2;

    *VAR_7++ = 'T';
    *VAR_7++ = VAR_3[(VAR_8 >> 4) & 0xf];
    *VAR_7++ = VAR_3[VAR_8 & 0xf];

    *VAR_7++ = VAR_3[VAR_1];
    *VAR_7++ = ':';

    VAR_9 = FUNC_0(VAR_6);
    VAR_7 = FUNC_1((PCHAR)&VAR_9, VAR_7, 4, 0);
    *VAR_7++ = ';';

    *VAR_7++ = VAR_3[VAR_0];
    *VAR_7++ = ':';
    VAR_7 = FUNC_1((PCHAR)&VAR_6->Ebp, VAR_7, 4, 0);
    *VAR_7++ = ';';

    *VAR_7++ = VAR_3[VAR_4];
    *VAR_7++ = ':';
    VAR_7 = FUNC_1((PCHAR)&VAR_6->Eip, VAR_7, 4, 0);
    *VAR_7++ = ';';

    *VAR_7 = '\0';
}
