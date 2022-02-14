
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_10__ {int DataContext; TYPE_1__* Volume; } ;
struct TYPE_9__ {scalar_t__ MftRecordSize; } ;
typedef TYPE_1__* PNTFS_VOLUME_INFO ;
typedef scalar_t__ PNTFS_MFT_RECORD ;
typedef TYPE_2__* PNTFS_FILE_HANDLE ;
typedef scalar_t__ OPENMODE ;
typedef int NTFS_FILE_HANDLE ;
typedef int CHAR ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__,int *) ;
 TYPE_1__** VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_6 (char*,int *) ;

ARC_STATUS FUNC_7(CHAR* VAR_7, OPENMODE VAR_8, ULONG* VAR_9)
{
    PNTFS_VOLUME_INFO VAR_10;
    PNTFS_FILE_HANDLE VAR_11;
    PNTFS_MFT_RECORD VAR_12;
    ULONG VAR_13;




    if (VAR_8 != VAR_5)
        return VAR_0;




    VAR_13 = FUNC_2(*VAR_9);
    VAR_10 = VAR_4[VAR_13];

    FUNC_6("NtfsOpen() FileName = %s\n", VAR_7);




    VAR_11 = FUNC_0(sizeof(NTFS_FILE_HANDLE) + VAR_10->MftRecordSize,
                                VAR_6);
    if (!VAR_11)
    {
        return VAR_2;
    }
    FUNC_5(VAR_11, sizeof(NTFS_FILE_HANDLE) + VAR_10->MftRecordSize);
    VAR_11->Volume = VAR_10;




    VAR_12 = (PNTFS_MFT_RECORD)(VAR_11 + 1);
    if (!FUNC_4(VAR_10, VAR_7, VAR_12, &VAR_11->DataContext))
    {
        FUNC_1(VAR_11, VAR_6);
        return VAR_1;
    }

    FUNC_3(*VAR_9, VAR_11);
    return VAR_3;
}
