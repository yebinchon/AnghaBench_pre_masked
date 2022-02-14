
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef char CHAR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (char*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (char*,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    HRESULT VAR_7;
    HANDLE VAR_8;
    CHAR VAR_9[VAR_5];
    UINT VAR_10;



    VAR_10 = FUNC_4(FUNC_0(VAR_9), VAR_9);
    FUNC_5(VAR_10 > 0 && VAR_10 < FUNC_0(VAR_9));

    if(VAR_9[VAR_10 - 1] == '\\')
        VAR_9[--VAR_10] = 0;


    VAR_7 = FUNC_8(((void*)0), 0);
    FUNC_7 (VAR_7 == VAR_1, "DelNode called with NULL pathname should return E_FAIL\n");
    VAR_7 = FUNC_8("", 0);
    FUNC_7 (VAR_7 == VAR_1, "DelNode called with empty pathname should return E_FAIL\n");


    VAR_8 = FUNC_3("DelNodeTestFile1", VAR_3, 0, ((void*)0),
        VAR_0, VAR_2, ((void*)0));
    FUNC_5(VAR_8 != VAR_4);
    FUNC_1(VAR_8);
    VAR_7 = FUNC_8(FUNC_6(VAR_9, "\\DelNodeTestFile1"), 0);
    FUNC_7 (VAR_7 == VAR_6, "DelNode failed deleting a single file\n");
    VAR_9[VAR_10] = '\0';


    FUNC_2("DelNodeTestDir", ((void*)0));
    VAR_7 = FUNC_8(FUNC_6(VAR_9, "\\DelNodeTestDir"), 0);
    FUNC_7 (VAR_7 == VAR_6, "DelNode failed deleting an empty directory\n");
    VAR_9[VAR_10] = '\0';


    FUNC_2("DelNodeTestDir", ((void*)0));
    VAR_8 = FUNC_3("DelNodeTestDir\\DelNodeTestFile1", VAR_3, 0, ((void*)0),
        VAR_0, VAR_2, ((void*)0));
    FUNC_5(VAR_8 != VAR_4);
    FUNC_1(VAR_8);
    VAR_7 = FUNC_8(FUNC_6(VAR_9, "\\DelNodeTestDir"), 0);
    FUNC_7 (VAR_7 == VAR_6, "DelNode failed deleting a directory containing one file\n");
    VAR_9[VAR_10] = '\0';


    FUNC_2("DelNodeTestDir", ((void*)0));
    VAR_8 = FUNC_3("DelNodeTestDir\\DelNodeTestFile1", VAR_3, 0, ((void*)0),
        VAR_0, VAR_2, ((void*)0));
    FUNC_5(VAR_8 != VAR_4);
    FUNC_1(VAR_8);
    VAR_8 = FUNC_3("DelNodeTestDir\\DelNodeTestFile2", VAR_3, 0, ((void*)0),
        VAR_0, VAR_2, ((void*)0));
    FUNC_5(VAR_8 != VAR_4);
    FUNC_1(VAR_8);
    VAR_8 = FUNC_3("DelNodeTestDir\\DelNodeTestFile3", VAR_3, 0, ((void*)0),
        VAR_0, VAR_2, ((void*)0));
    FUNC_5(VAR_8 != VAR_4);
    FUNC_1(VAR_8);
    VAR_7 = FUNC_8(FUNC_6(VAR_9, "\\DelNodeTestDir"), 0);
    FUNC_7 (VAR_7 == VAR_6, "DelNode failed deleting a directory containing multiple files\n");
}
