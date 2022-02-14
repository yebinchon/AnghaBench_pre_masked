
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int,int ,int **) ;
 int VAR_8 ;

__attribute__((used)) static BOOL FUNC_8(LPCSTR VAR_9)
{
    WCHAR VAR_10[VAR_2];
    IStorage *VAR_11;
    IStream *VAR_12;
    HRESULT VAR_13;
    DWORD VAR_14;
    BOOL VAR_15 = VAR_1;

    FUNC_5(VAR_0, 0, VAR_9, -1, VAR_10, VAR_2);
    VAR_13 = FUNC_7(VAR_10, VAR_3 | VAR_5 |
                          VAR_4 | VAR_6, 0, &VAR_11);
    if (FUNC_0(VAR_13))
        return VAR_1;

    VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_7 | VAR_6,
                               0, 0, &VAR_12);
    if (FUNC_0(VAR_13))
        goto done;

    VAR_13 = FUNC_4(VAR_12, "stgdata", 8, &VAR_14);
    if (FUNC_6(VAR_13))
        VAR_15 = VAR_8;

done:
    FUNC_3(VAR_12);
    FUNC_2(VAR_11);

    return VAR_15;
}
