
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int WCHAR ;
typedef int LPCSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*,int,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int const*,int,int*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,int,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (int*,int *,int const,int *,int ,int **) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(LPCSTR VAR_7)
{
    IStorage *VAR_8;
    IStream *VAR_9;
    WCHAR VAR_10[VAR_1];
    HRESULT VAR_11;
    DWORD VAR_12;
    const DWORD VAR_13 = VAR_2 | VAR_3 | VAR_4;


    static const WCHAR VAR_14[] = {0x41ca,0x4330,0x3e71,0x44b5,0x4233,0x45f5,0x422c,0x4836,0};
    static const WCHAR VAR_15[] = {'M','Y','P','R','O','P','=','2','7','1','8',' ',
        'M','y','P','r','o','p','=','4','2',0};

    FUNC_4(VAR_0, 0, VAR_7, -1, VAR_10, VAR_1);

    VAR_11 = FUNC_5(VAR_10, ((void*)0), VAR_13, ((void*)0), 0, &VAR_8);
    FUNC_6(VAR_11 == VAR_6, "Expected S_OK, got %d\n", VAR_11);
    if (!VAR_8)
        return;

    VAR_11 = FUNC_0(VAR_8, VAR_14, VAR_5 | VAR_4, 0, 0, &VAR_9);
    FUNC_6(VAR_11 == VAR_6, "Expected S_OK, got %d\n", VAR_11);

    VAR_11 = FUNC_3(VAR_9, VAR_15, sizeof(VAR_15), &VAR_12);
    FUNC_6(VAR_11 == VAR_6, "Expected S_OK, got %d\n", VAR_11);

    FUNC_2(VAR_9);
    FUNC_1(VAR_8);
}
