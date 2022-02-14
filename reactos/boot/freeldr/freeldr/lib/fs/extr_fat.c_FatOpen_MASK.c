
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ULONG ;
typedef int TempFileInfo ;
struct TYPE_10__ {int Attributes; } ;
struct TYPE_9__ {int Volume; } ;
typedef int PFAT_VOLUME_INFO ;
typedef TYPE_1__* PFAT_FILE_INFO ;
typedef scalar_t__ OPENMODE ;
typedef TYPE_2__ FAT_FILE_INFO ;
typedef int CHAR ;
typedef int BOOLEAN ;
typedef scalar_t__ ARC_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,TYPE_2__*) ;
 int * VAR_7 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (size_t,TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_10 ;
 int FUNC_6 (char*,int *) ;

ARC_STATUS FUNC_7(CHAR* VAR_11, OPENMODE VAR_12, ULONG* VAR_13)
{
    PFAT_VOLUME_INFO VAR_14;
    FAT_FILE_INFO VAR_15;
    PFAT_FILE_INFO VAR_16;
    ULONG VAR_17;
    BOOLEAN VAR_18;
    ARC_STATUS VAR_19;

    if (VAR_12 != VAR_9 && VAR_12 != VAR_8)
        return VAR_1;

    VAR_17 = FUNC_2(*VAR_13);
    VAR_14 = VAR_7[VAR_17];

    FUNC_6("FatOpen() FileName = %s\n", VAR_11);

    FUNC_5(&VAR_15, sizeof(VAR_15));
    VAR_19 = FUNC_0(VAR_14, VAR_11, &VAR_15);
    if (VAR_19 != VAR_6)
        return VAR_3;




    VAR_18 = (VAR_15.Attributes & VAR_0) != 0;
    if (VAR_18 && VAR_12 != VAR_8)
        return VAR_2;
    else if (!VAR_18 && VAR_12 != VAR_9)
        return VAR_5;

    VAR_16 = FUNC_1(sizeof(FAT_FILE_INFO), VAR_10);
    if (!VAR_16)
        return VAR_4;

    FUNC_4(VAR_16, &VAR_15, sizeof(FAT_FILE_INFO));
    VAR_16->Volume = VAR_14;

    FUNC_3(*VAR_13, VAR_16);
    return VAR_6;
}
