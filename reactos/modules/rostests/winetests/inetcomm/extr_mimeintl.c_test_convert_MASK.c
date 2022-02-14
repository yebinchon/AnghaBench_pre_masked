
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int test_string ;
typedef char WCHAR ;
typedef int ULONG ;
struct TYPE_11__ {int cbSize; int * pBlobData; } ;
struct TYPE_9__ {char* pwszVal; char* pszVal; } ;
struct TYPE_10__ {void* vt; TYPE_1__ u; } ;
typedef TYPE_2__ PROPVARIANT ;
typedef int IMimeInternational ;
typedef int HRESULT ;
typedef int BYTE ;
typedef TYPE_3__ BLOB ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int,TYPE_3__*,TYPE_3__*,int*) ;
 int FUNC_2 (int *,int,int,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    IMimeInternational *VAR_4;
    HRESULT VAR_5;
    BLOB VAR_6, VAR_7;
    ULONG VAR_8;
    PROPVARIANT VAR_9, VAR_10;
    static char VAR_11[] = "test string";
    static WCHAR VAR_12[] = {'t','e','s','t',' ','s','t','r','i','n','g',0};

    VAR_5 = FUNC_4(&VAR_4);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);

    VAR_6.pBlobData = (BYTE*)VAR_11;
    VAR_6.cbSize = sizeof(VAR_11);
    VAR_5 = FUNC_1(VAR_4, 1252, 28591, &VAR_6, &VAR_7, &VAR_8);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);
    FUNC_7(VAR_8 == sizeof(VAR_11), "got %d\n", VAR_8);
    FUNC_7(VAR_7.cbSize == sizeof(VAR_11), "got %d\n", VAR_7.cbSize);
    FUNC_0(VAR_7.pBlobData);

    VAR_6.cbSize = 2;
    VAR_5 = FUNC_1(VAR_4, 1252, 28591, &VAR_6, &VAR_7, &VAR_8);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);
    FUNC_7(VAR_8 == 2, "got %d\n", VAR_8);
    FUNC_7(VAR_7.cbSize == 2, "got %d\n", VAR_7.cbSize);
    FUNC_0(VAR_7.pBlobData);

    VAR_9.vt = VAR_3;
    VAR_9.u.pwszVal = VAR_12;
    VAR_5 = FUNC_2(VAR_4, VAR_0, 1252, &VAR_9, &VAR_10);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);
    FUNC_7(VAR_10.vt == VAR_2, "got %d\n", VAR_10.vt);
    FUNC_7(!FUNC_8(VAR_10.u.pszVal, VAR_11), "got %s\n", VAR_10.u.pszVal);
    FUNC_5(&VAR_10);


    VAR_9.vt = VAR_3;
    VAR_9.u.pwszVal = VAR_12;
    VAR_5 = FUNC_2(VAR_4, 28591, 1252, &VAR_9, &VAR_10);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);
    FUNC_7(VAR_10.vt == VAR_2, "got %d\n", VAR_10.vt);
    FUNC_7(!FUNC_8(VAR_10.u.pszVal, VAR_11), "got %s\n", VAR_10.u.pszVal);
    FUNC_5(&VAR_10);

    VAR_9.vt = VAR_2;
    VAR_9.u.pszVal = VAR_11;
    VAR_5 = FUNC_2(VAR_4, 28591, VAR_0, &VAR_9, &VAR_10);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);
    FUNC_7(VAR_10.vt == VAR_3, "got %d\n", VAR_10.vt);
    FUNC_7(!FUNC_6(VAR_10.u.pwszVal, VAR_12), "mismatched strings\n");
    FUNC_5(&VAR_10);


    VAR_9.vt = VAR_2;
    VAR_9.u.pszVal = VAR_11;
    VAR_5 = FUNC_2(VAR_4, VAR_0, VAR_0, &VAR_9, &VAR_10);
    FUNC_7(VAR_5 == VAR_1, "ret %08x\n", VAR_5);
    FUNC_7(VAR_10.vt == VAR_3, "got %d\n", VAR_10.vt);
    FUNC_7(!FUNC_6(VAR_10.u.pwszVal, VAR_12), "mismatched strings\n");
    FUNC_5(&VAR_10);

    FUNC_3(VAR_4);
}
