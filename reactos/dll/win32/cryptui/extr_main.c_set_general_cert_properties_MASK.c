
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edit_cert_data {int cert; } ;
typedef int WCHAR ;
typedef int PCCERT_CONTEXT ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct edit_cert_data*) ;

__attribute__((used)) static void FUNC_6(HWND VAR_5, struct edit_cert_data *VAR_6)
{
    PCCERT_CONTEXT VAR_7 = VAR_6->cert;
    WCHAR *VAR_8;

    if ((VAR_8 = FUNC_4(VAR_7, VAR_1)))
    {
        FUNC_3(FUNC_0(VAR_5, VAR_3), VAR_4, 0,
         (LPARAM)VAR_8);
        FUNC_2(FUNC_1(), 0, VAR_8);
    }
    if ((VAR_8 = FUNC_4(VAR_7, VAR_0)))
    {
        FUNC_3(FUNC_0(VAR_5, VAR_2), VAR_4, 0,
         (LPARAM)VAR_8);
        FUNC_2(FUNC_1(), 0, VAR_8);
    }
    FUNC_5(VAR_5, VAR_6);
}
