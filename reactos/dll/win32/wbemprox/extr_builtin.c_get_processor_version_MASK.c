
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (int,unsigned int*) ;
 int FUNC_1 (char*,char const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2( WCHAR *VAR_0 )
{
    static const WCHAR VAR_1[] =
        {'M','o','d','e','l',' ','%','u',',',' ','S','t','e','p','p','i','n','g',' ','%','u',0};
    unsigned int VAR_2[4] = {0, 0, 0, 0};

    FUNC_0( 1, VAR_2 );
    FUNC_1( VAR_0, VAR_1, (VAR_2[0] & (15 << 4)) >> 4, VAR_2[0] & 15 );
}
