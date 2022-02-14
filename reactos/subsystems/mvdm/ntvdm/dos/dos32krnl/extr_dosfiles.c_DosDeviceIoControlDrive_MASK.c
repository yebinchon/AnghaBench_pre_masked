
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {char CurrentDrive; void* LastErrorCode; } ;
typedef int* PWORD ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BYTE ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,char*,...) ;







 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

BOOLEAN FUNC_3(WORD VAR_4, BYTE VAR_5, DWORD VAR_6, PWORD VAR_7)
{
    CHAR VAR_8[] = "?:\\";

    if (VAR_4 == 0x00)
        VAR_8[0] = 'A' + VAR_2->CurrentDrive;
    else
        VAR_8[0] = 'A' + VAR_4 - 1;

    switch (VAR_5)
    {
        case 0x04:
            FUNC_0("UNIMPLEMENTED INT 21h, 4404h, Read from block device %s\n", VAR_8);
            VAR_2->LastErrorCode = VAR_0;
            break;
        case 0x05:
            FUNC_0("UNIMPLEMENTED INT 21h, 4405h, Write block device control string %s\n", VAR_8);
            VAR_2->LastErrorCode = VAR_0;
            break;
        case 0x08:
        {
            DWORD VAR_9 = FUNC_1(VAR_8);

            switch (VAR_9)
            {
            case 128:
            case 132:
            default:
                FUNC_0("INT 21h, 4408h, %s -> DriveType = 0x%x\n", VAR_8, VAR_9);
                *VAR_7 = 0x000f;
                return VAR_3;
            case 129:
            case 134:
                *VAR_7 = 0x0000;
                return VAR_3;
            case 133:
                *VAR_7 = 0x0001;
                return VAR_3;
            case 130:
            case 131:
                break;
            }
            VAR_2->LastErrorCode = VAR_0;
            return VAR_1;
        }
        case 0x09:
            FUNC_0("UNIMPLEMENTED INT 21h, 4409h, Determine if a logical device is local or remote %s\n", VAR_8);
            VAR_2->LastErrorCode = VAR_0;
            return VAR_1;
        default:
            FUNC_2(0);
            break;
    }

    return VAR_1;
}
