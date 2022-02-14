
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int TempFileInfo ;
typedef int PISO_FILE_INFO ;
typedef scalar_t__ OPENMODE ;
typedef int ISO_FILE_INFO ;
typedef int CHAR ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *,int) ;
 int VAR_5 ;
 int FUNC_6 (char*,int *) ;

ARC_STATUS FUNC_7(CHAR* VAR_6, OPENMODE VAR_7, ULONG* VAR_8)
{
    ISO_FILE_INFO VAR_9;
    PISO_FILE_INFO VAR_10;
    ULONG VAR_11;
    ARC_STATUS VAR_12;

    if (VAR_7 != VAR_4)
        return VAR_0;

    VAR_11 = FUNC_1(*VAR_8);

    FUNC_6("IsoOpen() FileName = %s\n", VAR_6);

    FUNC_5(&VAR_9, sizeof(VAR_9));
    VAR_12 = FUNC_3(VAR_6, VAR_11, &VAR_9);
    if (VAR_12 != VAR_3)
        return VAR_1;

    VAR_10 = FUNC_0(sizeof(ISO_FILE_INFO), VAR_5);
    if (!VAR_10)
        return VAR_2;

    FUNC_4(VAR_10, &VAR_9, sizeof(ISO_FILE_INFO));

    FUNC_2(*VAR_8, VAR_10);
    return VAR_3;
}
