
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_header_t ;
typedef int LPSTR ;
typedef int LPCWSTR ;
typedef int INTERNET_STATUS_CALLBACK ;
typedef int INT ;
typedef int FTP_COMMAND ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL FUNC_3(INT VAR_0, FTP_COMMAND VAR_1, LPCWSTR VAR_2,
 INTERNET_STATUS_CALLBACK VAR_3, object_header_t *VAR_4, DWORD_PTR VAR_5)
{
    BOOL VAR_6;
    LPSTR VAR_7 = FUNC_2(VAR_2);
    VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_7, VAR_3, VAR_4, VAR_5);
    FUNC_1(VAR_7);
    return VAR_6;
}
