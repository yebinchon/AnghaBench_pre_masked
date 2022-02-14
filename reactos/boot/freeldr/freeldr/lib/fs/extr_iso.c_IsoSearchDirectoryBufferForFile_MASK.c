
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {scalar_t__ RecordLength; int FileIdLength; int* FileId; int FileFlags; int DataLengthL; int ExtentLocationL; } ;
struct TYPE_4__ {int Directory; scalar_t__ FilePointer; int FileSize; int FileStart; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PISO_FILE_INFO ;
typedef TYPE_2__* PDIR_RECORD ;
typedef char* PCHAR ;
typedef char CHAR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static BOOLEAN FUNC_5(PVOID VAR_3, ULONG VAR_4, PCHAR VAR_5, PISO_FILE_INFO VAR_6)
{
    PDIR_RECORD VAR_7;
    ULONG VAR_8;
    ULONG VAR_9;
    CHAR VAR_10[32];

    FUNC_2("IsoSearchDirectoryBufferForFile() DirectoryBuffer = 0x%x DirectoryLength = %d FileName = %s\n", VAR_3, VAR_4, VAR_5);

    FUNC_1(VAR_10, 32 * sizeof(UCHAR));

    VAR_8 = 0;
    VAR_7 = (PDIR_RECORD)VAR_3;
    while (VAR_2)
    {
        VAR_8 = VAR_8 + VAR_7->RecordLength;
        VAR_7 = (PDIR_RECORD)((ULONG_PTR)VAR_3 + VAR_8);

        if (VAR_7->RecordLength == 0)
        {
            VAR_8 = FUNC_0(VAR_8, VAR_1);
            VAR_7 = (PDIR_RECORD)((ULONG_PTR)VAR_3 + VAR_8);
        }

        if (VAR_8 >= VAR_4)
            return VAR_0;

        if (VAR_7->FileIdLength == 1 && VAR_7->FileId[0] == 0)
        {
            FUNC_2("Name '.'\n");
        }
        else if (VAR_7->FileIdLength == 1 && VAR_7->FileId[0] == 1)
        {
            FUNC_2("Name '..'\n");
        }
        else
        {
            for (VAR_9 = 0; VAR_9 < VAR_7->FileIdLength && VAR_7->FileId[VAR_9] != ';'; VAR_9++)
                VAR_10[VAR_9] = VAR_7->FileId[VAR_9];
            VAR_10[VAR_9] = 0;
            FUNC_2("Name '%s'\n", VAR_10);

            if (FUNC_4(VAR_5) == FUNC_4(VAR_10) && FUNC_3(VAR_5, VAR_10) == 0)
            {
                VAR_6->FileStart = VAR_7->ExtentLocationL;
                VAR_6->FileSize = VAR_7->DataLengthL;
                VAR_6->FilePointer = 0;
                VAR_6->Directory = !!(VAR_7->FileFlags & 0x02);

                return VAR_2;
            }

        }

        FUNC_1(VAR_10, 32 * sizeof(UCHAR));
    }

    return VAR_0;
}
