
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPITEMIDLIST ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int,char*,...) ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int,int *,int ,char*) ;
 scalar_t__ FUNC_10 (int *,int,int **) ;
 int FUNC_11 (int *,char*,int,int ) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15(const char *VAR_11)
{
    char VAR_12[VAR_7];
    HRESULT VAR_13;

    if (VAR_11[0] == '1')
    {
        LPITEMIDLIST VAR_14;
        char *VAR_15;




        VAR_13 = FUNC_9(((void*)0), VAR_0, ((void*)0), VAR_8, VAR_12);
        FUNC_7(VAR_13 == FUNC_3(VAR_3),
            "SHGetFolderPath returned 0x%08x, expected 0x80070002\n", VAR_13);

        VAR_14 = ((void*)0);
        VAR_13 = FUNC_8(((void*)0), VAR_0, ((void*)0), 0, &VAR_14);
        FUNC_7(VAR_13 == VAR_4 || VAR_13 == FUNC_3(VAR_3),
            "SHGetFolderLocation returned 0x%08x\n", VAR_13);
        if (VAR_13 == VAR_9 && VAR_14) FUNC_4(VAR_10, VAR_14);

        FUNC_7(!FUNC_11(((void*)0), VAR_12, VAR_0, VAR_5),
            "SHGetSpecialFolderPath succeeded, expected failure\n");

        VAR_14 = ((void*)0);
        VAR_13 = FUNC_10(((void*)0), VAR_0, &VAR_14);
        FUNC_7(VAR_13 == VAR_4 || VAR_13 == FUNC_3(VAR_3),
            "SHGetFolderLocation returned 0x%08x\n", VAR_13);

        if (VAR_13 == VAR_9 && VAR_14) FUNC_4(VAR_10, VAR_14);


        VAR_13 = FUNC_9(((void*)0), VAR_0 | VAR_1, ((void*)0),
                               VAR_8, VAR_12);
        FUNC_7 (VAR_13 == VAR_9, "got 0x%08x\n", VAR_13);
        if (VAR_13 == VAR_9)
        {
            BOOL VAR_16;

            FUNC_14("CSIDL_FAVORITES was changed to %s\n", VAR_12);
            VAR_16 = FUNC_0(VAR_12, ((void*)0));
            FUNC_7(!VAR_16, "expected failure with ERROR_ALREADY_EXISTS\n");
            if (!VAR_16)
                FUNC_7(FUNC_2() == VAR_2,
                  "got %d, expected ERROR_ALREADY_EXISTS\n", FUNC_2());

            VAR_15 = VAR_12 + FUNC_13(VAR_12);
            FUNC_12(VAR_15, "\\desktop.ini");
            FUNC_1(VAR_12);
            *VAR_15 = 0;
            FUNC_6( VAR_12, VAR_6 );
            VAR_16 = FUNC_5(VAR_12);
            FUNC_7( VAR_16, "failed to remove %s error %u\n", VAR_12, FUNC_2() );
        }
    }
    else if (VAR_11[0] == '2')
    {


        VAR_13 = FUNC_9(((void*)0), VAR_0 | VAR_1, ((void*)0),
            VAR_8, VAR_12);
        FUNC_7(VAR_13 == VAR_9, "SHGetFolderPath failed: 0x%08x\n", VAR_13);
    }
}
