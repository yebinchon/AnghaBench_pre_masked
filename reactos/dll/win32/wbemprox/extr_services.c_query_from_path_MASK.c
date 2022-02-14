
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int class_len; int filter_len; int class; int filter; } ;
typedef char WCHAR ;
typedef int UINT ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static WCHAR *FUNC_5( const struct path *VAR_0 )
{
    static const WCHAR VAR_1[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','%','s',' ',
         'W','H','E','R','E',' ','%','s',0};
    static const WCHAR VAR_2[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',0};
    WCHAR *VAR_3;
    UINT VAR_4;

    if (VAR_0->filter)
    {
        VAR_4 = VAR_0->class_len + VAR_0->filter_len + FUNC_0(VAR_1);
        if (!(VAR_3 = FUNC_1( VAR_4 * sizeof(WCHAR) ))) return ((void*)0);
        FUNC_2( VAR_3, VAR_1, VAR_0->class, VAR_0->filter );
    }
    else
    {
        VAR_4 = VAR_0->class_len + FUNC_0(VAR_2);
        if (!(VAR_3 = FUNC_1( VAR_4 * sizeof(WCHAR) ))) return ((void*)0);
        FUNC_4( VAR_3, VAR_2 );
        FUNC_3( VAR_3, VAR_0->class );
    }
    return VAR_3;
}
