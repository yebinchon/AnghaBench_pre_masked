
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int LPCSTR ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int HGLOBAL ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (scalar_t__,int ,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(IStream **VAR_8, LPCSTR VAR_9)
{
    HANDLE VAR_10;
    HGLOBAL VAR_11;
    LPVOID VAR_12;
    HRESULT VAR_13;
    DWORD VAR_14, VAR_15;

    VAR_10 = FUNC_1(VAR_9, VAR_2, VAR_1, ((void*)0),
                        VAR_5, VAR_0, ((void*)0));
    FUNC_8(VAR_10 != VAR_4, "Expected a valid file handle\n");
    VAR_14 = FUNC_3(VAR_10, ((void*)0));

    VAR_11 = FUNC_4(VAR_3, VAR_14);
    VAR_12 = FUNC_5(VAR_11);

    FUNC_7(VAR_10, VAR_12, VAR_14, &VAR_15, ((void*)0));
    FUNC_8(VAR_14 == VAR_15, "Expected to read the whole file, read %d\n", VAR_15);

    VAR_13 = FUNC_2(VAR_11, VAR_7, VAR_8);
    FUNC_8(VAR_13 == VAR_6, "Expected S_OK, got %08x\n", VAR_13);
    FUNC_8(*VAR_8 != ((void*)0), "Expected non-NULL stream\n");

    FUNC_0(VAR_10);
    FUNC_6(VAR_11);
}
