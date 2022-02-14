
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
typedef int PNTFS_VOLUME_INFO ;
typedef int PNTFS_MFT_RECORD ;
typedef int * PNTFS_ATTR_CONTEXT ;
typedef char* PCSTR ;
typedef int CHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN FUNC_6(PNTFS_VOLUME_INFO VAR_4, PCSTR VAR_5, PNTFS_MFT_RECORD VAR_6, PNTFS_ATTR_CONTEXT *VAR_7)
{
    ULONG VAR_8;
    CHAR VAR_9[261];
    ULONGLONG VAR_10;
    UCHAR VAR_11;

    FUNC_5("NtfsLookupFile() FileName = %s\n", VAR_5);

    VAR_10 = VAR_2;
    VAR_8 = FUNC_1(VAR_5);
    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
    {
        FUNC_0(VAR_9, VAR_5);

        for (; (*VAR_5 != '\\') && (*VAR_5 != '/') && (*VAR_5 != '\0'); VAR_5++)
            ;
        VAR_5++;

        FUNC_5("- Lookup: %s\n", VAR_9);
        if (!FUNC_3(VAR_4, VAR_10, VAR_9, &VAR_10))
        {
            FUNC_5("- Failed\n");
            return VAR_0;
        }
        FUNC_5("- Lookup: %x\n", VAR_10);
    }

    if (!FUNC_4(VAR_4, VAR_10, VAR_6))
    {
        FUNC_5("NtfsLookupFile: Can't read MFT record\n");
        return VAR_0;
    }

    *VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_1, L"");
    if (*VAR_7 == ((void*)0))
    {
        FUNC_5("NtfsLookupFile: Can't find data attribute\n");
        return VAR_0;
    }

    return VAR_3;
}
