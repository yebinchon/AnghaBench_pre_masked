
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static inline char *FUNC_4( const char *VAR_0 )
{
    char *VAR_1;

    if (!VAR_0) return ((void*)0);
    VAR_1 = FUNC_1(FUNC_0(), 0, (FUNC_3( VAR_0 ) + 1) * sizeof(char) );
    if (VAR_1) FUNC_2( VAR_1, VAR_0 );
    return VAR_1;
}
