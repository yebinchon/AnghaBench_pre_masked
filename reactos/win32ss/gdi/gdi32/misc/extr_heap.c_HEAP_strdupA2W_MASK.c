
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef int* LPWSTR ;
typedef scalar_t__ LPCSTR ;


 int* FUNC_0 (int) ;
 int FUNC_1 (int*,int,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;

NTSTATUS
FUNC_3 ( LPWSTR* VAR_2, LPCSTR VAR_3 )
{
    ULONG VAR_4;
    NTSTATUS VAR_5;

    *VAR_2 = ((void*)0);
    if ( !VAR_3 )
        return VAR_1;
    VAR_4 = FUNC_2(VAR_3);

    *VAR_2 = FUNC_0 ( (VAR_4+1) * sizeof(WCHAR) );
    if ( !*VAR_2 )
        return VAR_0;
    VAR_5 = FUNC_1 ( *VAR_2, VAR_4*sizeof(WCHAR), ((void*)0), (PCHAR)VAR_3, VAR_4 );
    (*VAR_2)[VAR_4] = L'\0';
    return VAR_5;
}
