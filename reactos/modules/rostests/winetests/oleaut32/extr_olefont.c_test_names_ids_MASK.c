
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPVOID ;
typedef int * LPOLESTR ;
typedef int LCID ;
typedef int IFontDisp ;
typedef int HRESULT ;
typedef int DISPID ;


 int FUNC_0 (int *,int *,int **,int,int ,int*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (int *,int *,int **) ;

__attribute__((used)) static void FUNC_4(WCHAR* VAR_2, const char* VAR_3,
                    WCHAR* VAR_4, const char* VAR_5,
                    LCID VAR_6, DISPID VAR_7, DISPID VAR_8,
                    HRESULT VAR_9, int VAR_10)
{
    LPVOID VAR_11 = ((void*)0);
    IFontDisp *VAR_12 = ((void*)0);
    HRESULT VAR_13;
    DISPID VAR_14[2] = {0xdeadbeef, 0xdeadbeef};
    LPOLESTR VAR_15[2] = {VAR_2, VAR_4};

    FUNC_3(((void*)0), &VAR_0, &VAR_11);
    VAR_12 = VAR_11;

    VAR_13 = FUNC_0(VAR_12, &VAR_1, VAR_15, VAR_10,
                                   VAR_6, VAR_14);


    FUNC_2(VAR_13 == VAR_9,
        "GetIDsOfNames: \"%s\", \"%s\" returns 0x%08x, expected 0x%08x.\n",
        VAR_3, VAR_5, VAR_13, VAR_9);


    FUNC_2(VAR_14[0]==VAR_7,
        "GetIDsOfNames: \"%s\" gets DISPID 0x%08x, expected 0x%08x.\n",
        VAR_3, VAR_14[0], VAR_7);


    if (VAR_10 == 2)
    {
        FUNC_2(VAR_14[1]==VAR_8,
            "GetIDsOfNames: ..., \"%s\" gets DISPID 0x%08x, expected 0x%08x.\n",
            VAR_5, VAR_14[1], VAR_8);
    }

   FUNC_1(VAR_12);
}
