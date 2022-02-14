
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static DWORD FUNC_5( const char *VAR_7 )
{
    char VAR_8[VAR_4];
    HANDLE VAR_9;
    DWORD VAR_10;

    FUNC_4( VAR_8, VAR_6 );
    FUNC_3( VAR_8, "\\");
    FUNC_3( VAR_8, VAR_7 );

    VAR_9 = FUNC_1( VAR_8, VAR_1, VAR_0, ((void*)0), VAR_5, 0, ((void*)0) );
    if (VAR_9 == VAR_3)
        return VAR_2;

    VAR_10 = FUNC_2( VAR_9, ((void*)0) );
    FUNC_0( VAR_9 );
    return VAR_10;
}
