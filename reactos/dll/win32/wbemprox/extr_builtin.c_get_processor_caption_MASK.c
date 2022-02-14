
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (int,unsigned int*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char const*,char const*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3( WCHAR *VAR_1 )
{
    static const WCHAR VAR_2[] =
        {'%','s',' ','F','a','m','i','l','y',' ','%','u',' ',
         'M','o','d','e','l',' ','%','u',' ','S','t','e','p','p','i','n','g',' ','%','u',0};
    static const WCHAR VAR_3[] = {'x','8','6',0};
    static const WCHAR VAR_4[] = {'I','n','t','e','l','6','4',0};
    const WCHAR *VAR_5 = (FUNC_1() == VAR_0) ? VAR_3 : VAR_4;
    unsigned int VAR_6[4] = {0, 0, 0, 0};

    FUNC_0( 1, VAR_6 );
    FUNC_2( VAR_1, VAR_2, VAR_5, (VAR_6[0] & (15 << 8)) >> 8, (VAR_6[0] & (15 << 4)) >> 4, VAR_6[0] & 15 );
}
