
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT32 ;
typedef int UCHAR ;
struct TYPE_16__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_15__ {int FileStart; int FileSize; } ;
struct TYPE_13__ {int ExtentLocationL; int DataLengthL; } ;
struct TYPE_14__ {TYPE_1__ RootDirRecord; } ;
typedef int PVOID ;
typedef int PVD ;
typedef TYPE_2__* PPVD ;
typedef TYPE_3__* PISO_FILE_INFO ;
typedef char* PCSTR ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef TYPE_3__ ISO_FILE_INFO ;
typedef int CHAR ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (int,TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_1 (int,TYPE_4__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,int,int,int *) ;
 int FUNC_6 (int ,int,int *,TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static ARC_STATUS FUNC_10(PCSTR VAR_6, ULONG VAR_7, PISO_FILE_INFO VAR_8)
{
    UCHAR VAR_9[VAR_3];
    PPVD VAR_10 = (PPVD)VAR_9;
    UINT32 VAR_11;
    ULONG VAR_12;
    CHAR VAR_13[261];
    PVOID VAR_14;
    ULONG VAR_15;
    ULONG VAR_16;
    ISO_FILE_INFO VAR_17;
    LARGE_INTEGER VAR_18;
    ULONG VAR_19;
    ARC_STATUS VAR_20;

    FUNC_9("IsoLookupFile() FileName = %s\n", VAR_6);

    FUNC_8(VAR_8, sizeof(ISO_FILE_INFO));
    FUNC_8(&VAR_17, sizeof(ISO_FILE_INFO));




    VAR_18.HighPart = 0;
    VAR_18.LowPart = 16 * VAR_3;
    VAR_20 = FUNC_1(VAR_7, &VAR_18, VAR_4);
    if (VAR_20 != VAR_2)
        return VAR_20;
    VAR_20 = FUNC_0(VAR_7, VAR_10, VAR_3, &VAR_19);
    if (VAR_20 != VAR_2 || VAR_19 < sizeof(PVD))
        return VAR_0;

    VAR_15 = VAR_10->RootDirRecord.ExtentLocationL;
    VAR_16 = VAR_10->RootDirRecord.DataLengthL;




    VAR_12 = FUNC_4(VAR_6);




    for (VAR_11=0; VAR_11<VAR_12; VAR_11++)
    {



        FUNC_3(VAR_13, VAR_6);




        for (; (*VAR_6 != '\\') && (*VAR_6 != '/') && (*VAR_6 != '\0'); VAR_6++)
        {
        }
        VAR_6++;




        VAR_20 = FUNC_5(VAR_7, VAR_15, VAR_16, &VAR_14);
        if (VAR_20 != VAR_2)
            return VAR_20;




        if (!FUNC_6(VAR_14, VAR_16, VAR_13, &VAR_17))
        {
            FUNC_2(VAR_14, VAR_5);
            return VAR_1;
        }

        FUNC_2(VAR_14, VAR_5);





        if ((VAR_11+1) < VAR_12)
        {
            VAR_15 = VAR_17.FileStart;
            VAR_16 = VAR_17.FileSize;
        }

    }

    FUNC_7(VAR_8, &VAR_17, sizeof(ISO_FILE_INFO));

    return VAR_2;
}
