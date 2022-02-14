
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUriBuilder ;
typedef int IUri ;
typedef int HRESULT ;
typedef int BOOL ;


 int FUNC_0 (int *,int ,int ,int **) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

IUri *FUNC_8(IUri *VAR_2)
{
    IUriBuilder *VAR_3;
    IUri *VAR_4;
    BOOL VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_6(VAR_2, VAR_1, &VAR_5);
    if(FUNC_7(VAR_6) && !VAR_5) {
        FUNC_5(VAR_2);
        return VAR_2;
    }

    VAR_6 = FUNC_0(VAR_2, 0, 0, &VAR_3);
    if(FUNC_1(VAR_6))
        return ((void*)0);

    VAR_6 = FUNC_4(VAR_3, VAR_0);
    if(FUNC_7(VAR_6))
        VAR_6 = FUNC_2(VAR_3, 0, 0, &VAR_4);
    FUNC_3(VAR_3);
    if(FUNC_1(VAR_6))
        return ((void*)0);

    return VAR_4;
}
