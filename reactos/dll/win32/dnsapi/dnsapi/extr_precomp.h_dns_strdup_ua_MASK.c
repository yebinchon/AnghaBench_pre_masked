
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPWSTR ;
typedef int * LPSTR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 int * FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline LPSTR FUNC_4( const char *VAR_0 )
{
    LPSTR VAR_1 = ((void*)0);
    LPWSTR VAR_2 = FUNC_2( VAR_0 );

    if (VAR_2)
    {
        VAR_1 = FUNC_3( VAR_2 );
        FUNC_1( FUNC_0(), 0, VAR_2 );
    }
    return VAR_1;
}
