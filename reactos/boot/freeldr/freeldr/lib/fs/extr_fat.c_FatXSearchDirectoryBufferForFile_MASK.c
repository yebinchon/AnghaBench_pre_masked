
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int Attributes; int FileSize; int CurrentCluster; int StartCluster; scalar_t__ FilePointer; } ;
struct TYPE_8__ {int FileNameSize; int Attr; int Size; int StartCluster; int Time; int Date; int CreateTime; int CreateDate; int LastAccessTime; int LastAccessDate; int FileName; } ;
typedef int SIZE_T ;
typedef TYPE_1__* PVOID ;
typedef int PFAT_VOLUME_INFO ;
typedef TYPE_2__* PFAT_FILE_INFO ;
typedef TYPE_1__* PFATX_DIRENTRY ;
typedef int PCHAR ;
typedef TYPE_1__ FATX_DIRENTRY ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOLEAN FUNC_4(PFAT_VOLUME_INFO VAR_2, PVOID VAR_3, ULONG VAR_4, PCHAR VAR_5, PFAT_FILE_INFO VAR_6)
{
    ULONG VAR_7;
    ULONG VAR_8;
    SIZE_T VAR_9;
    FATX_DIRENTRY VAR_10;
    PFATX_DIRENTRY VAR_11 = &VAR_10;

    VAR_7 = VAR_4 / sizeof(FATX_DIRENTRY);

    FUNC_1("FatXSearchDirectoryBufferForFile() DirectoryBuffer = 0x%x EntryCount = %d FileName = %s\n", VAR_3, VAR_7, VAR_5);

    VAR_9 = FUNC_3(VAR_5);

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_3 = ((PFATX_DIRENTRY)VAR_3)+1)
    {
        VAR_10 = *(PFATX_DIRENTRY) VAR_3;
        FUNC_0(&VAR_10);
        if (0xff == VAR_11->FileNameSize)
        {
            break;
        }
        if (0xe5 == VAR_11->FileNameSize)
        {
            continue;
        }
        if (VAR_9 == VAR_11->FileNameSize &&
            0 == FUNC_2(VAR_5, VAR_11->FileName, VAR_9))
        {



            VAR_6->Attributes = VAR_11->Attr;
            VAR_6->FileSize = VAR_11->Size;
            VAR_6->FilePointer = 0;
            VAR_6->CurrentCluster = VAR_11->StartCluster;
            VAR_6->StartCluster = VAR_11->StartCluster;

            FUNC_1("FATX Directory Entry:\n");
            FUNC_1("FileNameSize = %d\n", VAR_11->FileNameSize);
            FUNC_1("Attr = 0x%x\n", VAR_11->Attr);
            FUNC_1("StartCluster = 0x%x\n", VAR_11->StartCluster);
            FUNC_1("Size = %d\n", VAR_11->Size);
            FUNC_1("Time = %d\n", VAR_11->Time);
            FUNC_1("Date = %d\n", VAR_11->Date);
            FUNC_1("CreateTime = %d\n", VAR_11->CreateTime);
            FUNC_1("CreateDate = %d\n", VAR_11->CreateDate);
            FUNC_1("LastAccessTime = %d\n", VAR_11->LastAccessTime);
            FUNC_1("LastAccessDate = %d\n", VAR_11->LastAccessDate);

            return VAR_1;
        }
    }

    return VAR_0;
}
