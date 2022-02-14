
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef scalar_t__ UINT32 ;
struct TYPE_11__ {int Attributes; scalar_t__ StartCluster; } ;
struct TYPE_10__ {int FatType; } ;
typedef int * PVOID ;
typedef TYPE_1__* PFAT_VOLUME_INFO ;
typedef int PFAT_FILE_INFO ;
typedef char* PCSTR ;
typedef TYPE_2__ FAT_FILE_INFO ;
typedef int CHAR ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__*,int) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__,int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int *,scalar_t__,int *,TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,TYPE_2__*,int) ;
 int FUNC_8 (int ,int ,int) ;

ARC_STATUS FUNC_9(PFAT_VOLUME_INFO VAR_5, PCSTR VAR_6, PFAT_FILE_INFO VAR_7)
{
    UINT32 VAR_8;
    ULONG VAR_9;
    CHAR VAR_10[261];
    PVOID VAR_11;
    ULONG VAR_12 = 0;
    ULONG VAR_13;
    FAT_FILE_INFO VAR_14;

    FUNC_6("FatLookupFile() FileName = %s\n", VAR_6);

    FUNC_8(VAR_7, 0, sizeof(FAT_FILE_INFO));




    VAR_9 = FUNC_4(VAR_6);




    for (VAR_8=0; VAR_8<VAR_9; VAR_8++)
    {



        FUNC_3(VAR_10, VAR_6);




        for (; (*VAR_6 != '\\') && (*VAR_6 != '/') && (*VAR_6 != '\0'); VAR_6++)
        {
        }
        VAR_6++;




        VAR_11 = FUNC_0(VAR_5, VAR_12, &VAR_13, (VAR_8 == 0) );
        if (VAR_11 == ((void*)0))
        {
            return VAR_2;
        }




        if (FUNC_5(VAR_5->FatType))
        {
            if (!FUNC_2(VAR_5, VAR_11, VAR_13, VAR_10, &VAR_14))
            {
                return VAR_1;
            }
        }
        else
        {
            if (!FUNC_1(VAR_5, VAR_11, VAR_13, VAR_10, &VAR_14))
            {
                return VAR_1;
            }
        }





        if ((VAR_8+1) < VAR_9)
        {



            if (!(VAR_14.Attributes & VAR_0))
            {
                return VAR_3;
            }
            VAR_12 = VAR_14.StartCluster;
        }
    }

    FUNC_7(VAR_7, &VAR_14, sizeof(FAT_FILE_INFO));

    return VAR_4;
}
