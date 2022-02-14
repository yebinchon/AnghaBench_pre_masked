
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int,char*,int ,int *,int *) ;

__attribute__((used)) static inline char *FUNC_3( LPCWSTR VAR_1 )
{
    LPSTR VAR_2 = ((void*)0);
    if (VAR_1)
    {
        DWORD VAR_3 = FUNC_2( VAR_0, 0, VAR_1, -1, ((void*)0), 0, ((void*)0), ((void*)0) );
        if ((VAR_2 = FUNC_1(FUNC_0(), 0, VAR_3 )))
            FUNC_2( VAR_0, 0, VAR_1, -1, VAR_2, VAR_3, ((void*)0), ((void*)0) );
    }
    return VAR_2;
}
