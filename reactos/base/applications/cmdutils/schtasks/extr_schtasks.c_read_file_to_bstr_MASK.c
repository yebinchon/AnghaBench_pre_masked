
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int * BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 () ;
 unsigned char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,unsigned char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,int ,char const*,int,int *,int) ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,unsigned char*,int ,int*,int *) ;
 int * FUNC_9 (int const*,int) ;

__attribute__((used)) static BSTR FUNC_10(const WCHAR *VAR_7)
{
    LARGE_INTEGER VAR_8;
    DWORD VAR_9, VAR_10;
    unsigned char *VAR_11;
    HANDLE VAR_12;
    BOOL VAR_13 = VAR_1;
    BSTR VAR_14;

    VAR_12 = FUNC_1(VAR_7, VAR_4, VAR_3, ((void*)0),
                       VAR_6, VAR_2, ((void*)0));
    if (VAR_12 == VAR_5) {
        FUNC_2("Could not open file\n");
        return ((void*)0);
    }

    if (!FUNC_3(VAR_12, &VAR_8) || !VAR_8.QuadPart) {
        FUNC_2("Empty file\n");
        FUNC_0(VAR_12);
        return ((void*)0);
    }

    VAR_11 = FUNC_5(FUNC_4(), 0, VAR_8.QuadPart);
    if (VAR_11)
        VAR_13 = FUNC_8(VAR_12, VAR_11, VAR_8.QuadPart, &VAR_9, ((void*)0));
    FUNC_0(VAR_12);
    if (!VAR_13) {
        FUNC_2("Read filed\n");
        FUNC_6(FUNC_4(), 0, VAR_11);
        return ((void*)0);
    }

    if (VAR_9 > 2 && VAR_11[0] == 0xff && VAR_11[1] == 0xfe) {
        VAR_14 = FUNC_9((const WCHAR *)(VAR_11 + 2), (VAR_9 - 2) / sizeof(WCHAR));
    }else {
        VAR_10 = FUNC_7(VAR_0, 0, (const char *)VAR_11, VAR_9, ((void*)0), 0);
        VAR_14 = FUNC_9(((void*)0), VAR_10);
        if (VAR_14)
            FUNC_7(VAR_0, 0, (const char *)VAR_11, VAR_9, VAR_14, VAR_10);
    }
    FUNC_6(FUNC_4(), 0, VAR_11);

    return VAR_14;
}
