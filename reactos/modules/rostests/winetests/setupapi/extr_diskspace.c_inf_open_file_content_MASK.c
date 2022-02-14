
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HINF ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int,int,int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char const*,int ,int ,int *) ;
 int FUNC_3 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static HINF FUNC_6(const char * VAR_7, const char *VAR_8, UINT *VAR_9)
{
    DWORD VAR_10;
    HANDLE VAR_11 = FUNC_1(VAR_7, VAR_3|VAR_4,
                                VAR_1|VAR_2, ((void*)0), VAR_0, 0, 0);
    if (VAR_11 == VAR_6) return 0;
    if (!FUNC_3( VAR_11, VAR_8, FUNC_4(VAR_8), &VAR_10, ((void*)0) )) FUNC_5( "write error\n" );
    FUNC_0( VAR_11 );
    return FUNC_2( VAR_7, 0, VAR_5, VAR_9 );
}
