
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int name; } ;
typedef int WCHAR ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int const*,char) ;

__attribute__((used)) static WCHAR *FUNC_7( const WCHAR *VAR_0, struct file *VAR_1 )
{
    WCHAR *VAR_2;
    const WCHAR *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_6( VAR_0, '\\' );
    if (!VAR_3) VAR_3 = FUNC_6( VAR_0, '/' );
    if (!VAR_3) return FUNC_4( VAR_0 );

    VAR_4 = VAR_3 - VAR_0 + 1;
    if (!(VAR_2 = FUNC_1( FUNC_0(), 0, (VAR_4 + FUNC_5( VAR_1->name ) + 1) * sizeof(WCHAR) )))
        return ((void*)0);

    FUNC_2( VAR_2, VAR_0, VAR_4 * sizeof(WCHAR) );
    FUNC_3( VAR_2 + VAR_4, VAR_1->name );
    return VAR_2;
}
