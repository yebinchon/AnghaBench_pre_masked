
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int temp_path ;
typedef int info2 ;
typedef int info1 ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {char* pFrom; int fFlags; int * lpszProgressTitle; int * hNameMappings; int * pTo; int wFunc; int * hwnd; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int i64Size; int i64NumItems; } ;
typedef TYPE_1__ SHQUERYRBINFO ;
typedef TYPE_2__ SHFILEOPSTRUCTA ;
typedef char* HRESULT ;
typedef scalar_t__ HANDLE ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*,int ,char*) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_4 (scalar_t__,char*,int,scalar_t__*,int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (TYPE_2__*) ;
 char* FUNC_7 (char*,TYPE_1__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(void)
{
    SHQUERYRBINFO VAR_10={sizeof(VAR_10),0xdeadbeef,0xdeadbeef};
    SHQUERYRBINFO VAR_11={sizeof(VAR_11),0xdeadbeef,0xdeadbeef};
    UINT VAR_12;
    HRESULT VAR_13;
    HANDLE VAR_14;
    SHFILEOPSTRUCTA VAR_15;
    CHAR VAR_16[VAR_8-14], VAR_17[VAR_8+1];
    if(!&FUNC_7)
    {
        FUNC_8("SHQueryRecycleBinA does not exist\n");
        return;
    }
    if(!&FUNC_6)
    {
        FUNC_8("SHFileOperationA does not exist\n");
        return;
    }
    FUNC_5(FUNC_3(sizeof(VAR_16), VAR_16), "GetTempPath failed\n");
    FUNC_5(FUNC_2(VAR_16, "trash", 0, VAR_17), "GetTempFileName failed\n");
    VAR_17[FUNC_9(VAR_17) + 1] = '\0';
    VAR_13 = FUNC_7(VAR_17,&VAR_10);
    FUNC_5(VAR_13 == VAR_9, "SHQueryRecycleBinA failed with error 0x%x\n", VAR_13);
    FUNC_5(VAR_10!=0xdeadbeef,"i64Size not set\n");
    FUNC_5(VAR_10!=0xdeadbeef,"i64NumItems not set\n");

    VAR_14 = FUNC_1(VAR_17,VAR_6,0,((void*)0),VAR_0,0,((void*)0));
    FUNC_5(VAR_14 != VAR_7, "Failure to open file %s\n",VAR_17);
    FUNC_4(VAR_14,VAR_17,FUNC_9(VAR_17),&VAR_12,((void*)0));
    FUNC_0(VAR_14);
    VAR_15.hwnd = ((void*)0);
    VAR_15.wFunc = VAR_5;
    VAR_15.pFrom = VAR_17;
    VAR_15.pTo = ((void*)0);
    VAR_15.fFlags = VAR_2 | VAR_3 | VAR_4 | VAR_1;
    VAR_15.hNameMappings = ((void*)0);
    VAR_15.lpszProgressTitle = ((void*)0);
    FUNC_5(!FUNC_6(&VAR_15), "Deletion was not successful\n");
    VAR_13 = FUNC_7(VAR_17,&VAR_11);
    FUNC_5(VAR_13 == VAR_9, "SHQueryRecycleBinA failed with error 0x%x\n", VAR_13);
    FUNC_5(VAR_11==VAR_10,"Expected recycle bin to have 0x%s bytes\n",FUNC_10(VAR_10));
    FUNC_5(VAR_11==VAR_10+1,"Expected recycle bin to have 0x%s items\n",FUNC_10(VAR_10+1));
}
