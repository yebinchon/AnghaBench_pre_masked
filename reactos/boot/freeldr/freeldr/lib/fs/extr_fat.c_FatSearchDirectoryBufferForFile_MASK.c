
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_14__ {int Attributes; int FileSize; int CurrentCluster; int StartCluster; scalar_t__ FilePointer; } ;
struct TYPE_13__ {int SequenceNumber; int* Name0_4; int* Name5_10; int* Name11_12; } ;
struct TYPE_12__ {char* FileName; int Attr; int Size; int ClusterHigh; int ClusterLow; int ReservedNT; int TimeInTenths; int CreateTime; int CreateDate; int LastAccessDate; int Time; int Date; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_2__* PLFN_DIRENTRY ;
typedef int PFAT_VOLUME_INFO ;
typedef TYPE_3__* PFAT_FILE_INFO ;
typedef TYPE_1__* PDIRENTRY ;
typedef scalar_t__* PCHAR ;
typedef TYPE_2__ LFN_DIRENTRY ;
typedef TYPE_1__ DIRENTRY ;
typedef scalar_t__ CHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;

BOOLEAN FUNC_7(PFAT_VOLUME_INFO VAR_4, PVOID VAR_5, ULONG VAR_6, PCHAR VAR_7, PFAT_FILE_INFO VAR_8)
{
    ULONG VAR_9;
    ULONG VAR_10;
    CHAR VAR_11[265];
    CHAR VAR_12[20];
    ULONG VAR_13;
    DIRENTRY VAR_14;
    LFN_DIRENTRY VAR_15;
    PDIRENTRY VAR_16 = &VAR_14;
    PLFN_DIRENTRY VAR_17 = &VAR_15;

    VAR_9 = VAR_6 / sizeof(DIRENTRY);

    FUNC_3("FatSearchDirectoryBufferForFile() DirectoryBuffer = 0x%x EntryCount = %d FileName = %s\n", VAR_5, VAR_9, VAR_7);

    FUNC_5(VAR_12, 0, 13 * sizeof(CHAR));
    FUNC_5(VAR_11, 0, 261 * sizeof(CHAR));

    for (VAR_10=0; VAR_10<VAR_9; VAR_10++, VAR_5 = ((PDIRENTRY)VAR_5)+1)
    {
        VAR_15 = *((PLFN_DIRENTRY) VAR_5);
        FUNC_2(VAR_17);
        VAR_14 = *((PDIRENTRY) VAR_5);
        FUNC_1(VAR_16);
        if (VAR_16->FileName[0] == '\0')
        {
            return VAR_2;
        }




        if (VAR_16->FileName[0] == '\xE5')
        {
            FUNC_5(VAR_12, 0, 13 * sizeof(CHAR));
            FUNC_5(VAR_11, 0, 261 * sizeof(CHAR));
            continue;
        }





        if (VAR_16->Attr == VAR_0)
        {



            if (VAR_17->SequenceNumber & 0x80)
            {
                continue;
            }





            VAR_17->SequenceNumber &= 0x3F;
            VAR_17->SequenceNumber--;




            if (VAR_17->Name0_4[0] != 0xFFFF)
            {
                VAR_11[0 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name0_4[0];
            }
            if (VAR_17->Name0_4[1] != 0xFFFF)
            {
                VAR_11[1 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name0_4[1];
            }
            if (VAR_17->Name0_4[2] != 0xFFFF)
            {
                VAR_11[2 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name0_4[2];
            }
            if (VAR_17->Name0_4[3] != 0xFFFF)
            {
                VAR_11[3 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name0_4[3];
            }
            if (VAR_17->Name0_4[4] != 0xFFFF)
            {
                VAR_11[4 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name0_4[4];
            }
            if (VAR_17->Name5_10[0] != 0xFFFF)
            {
                VAR_11[5 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name5_10[0];
            }
            if (VAR_17->Name5_10[1] != 0xFFFF)
            {
                VAR_11[6 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name5_10[1];
            }
            if (VAR_17->Name5_10[2] != 0xFFFF)
            {
                VAR_11[7 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name5_10[2];
            }
            if (VAR_17->Name5_10[3] != 0xFFFF)
            {
                VAR_11[8 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name5_10[3];
            }
            if (VAR_17->Name5_10[4] != 0xFFFF)
            {
                VAR_11[9 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name5_10[4];
            }
            if (VAR_17->Name5_10[5] != 0xFFFF)
            {
                VAR_11[10 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name5_10[5];
            }
            if (VAR_17->Name11_12[0] != 0xFFFF)
            {
                VAR_11[11 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name11_12[0];
            }
            if (VAR_17->Name11_12[1] != 0xFFFF)
            {
                VAR_11[12 + (VAR_17->SequenceNumber * 13)] = (UCHAR)VAR_17->Name11_12[1];
            }




            continue;
        }





        if (VAR_16->Attr & VAR_1)
        {
            FUNC_5(VAR_12, 0, 13 * sizeof(UCHAR));
            FUNC_5(VAR_11, 0, 261 * sizeof(UCHAR));
            continue;
        }
        FUNC_0(VAR_12, VAR_16);







        if (((FUNC_6(VAR_7) == FUNC_6(VAR_11)) && (FUNC_4(VAR_7, VAR_11) == 0)) ||
            ((FUNC_6(VAR_7) == FUNC_6(VAR_12)) && (FUNC_4(VAR_7, VAR_12) == 0))) {



            VAR_8->Attributes = VAR_16->Attr;
            VAR_8->FileSize = VAR_16->Size;
            VAR_8->FilePointer = 0;
            VAR_13 = ((ULONG)VAR_16->ClusterHigh << 16) + VAR_16->ClusterLow;
            VAR_8->CurrentCluster = VAR_13;
            VAR_8->StartCluster = VAR_13;

            FUNC_3("MSDOS Directory Entry:\n");
            FUNC_3("FileName[11] = %c%c%c%c%c%c%c%c%c%c%c\n", VAR_16->FileName[0], VAR_16->FileName[1], VAR_16->FileName[2], VAR_16->FileName[3], VAR_16->FileName[4], VAR_16->FileName[5], VAR_16->FileName[6], VAR_16->FileName[7], VAR_16->FileName[8], VAR_16->FileName[9], VAR_16->FileName[10]);
            FUNC_3("Attr = 0x%x\n", VAR_16->Attr);
            FUNC_3("ReservedNT = 0x%x\n", VAR_16->ReservedNT);
            FUNC_3("TimeInTenths = %d\n", VAR_16->TimeInTenths);
            FUNC_3("CreateTime = %d\n", VAR_16->CreateTime);
            FUNC_3("CreateDate = %d\n", VAR_16->CreateDate);
            FUNC_3("LastAccessDate = %d\n", VAR_16->LastAccessDate);
            FUNC_3("ClusterHigh = 0x%x\n", VAR_16->ClusterHigh);
            FUNC_3("Time = %d\n", VAR_16->Time);
            FUNC_3("Date = %d\n", VAR_16->Date);
            FUNC_3("ClusterLow = 0x%x\n", VAR_16->ClusterLow);
            FUNC_3("Size = %d\n", VAR_16->Size);
            FUNC_3("StartCluster = 0x%x\n", VAR_13);

            return VAR_3;
        }




        FUNC_5(VAR_12, 0, 13 * sizeof(UCHAR));
        FUNC_5(VAR_11, 0, 261 * sizeof(UCHAR));
        continue;
    }

    return VAR_2;
}
