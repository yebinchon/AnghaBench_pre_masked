
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int MSIRECORD ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;


 int * FUNC_0 (int *,char const*,int ) ;

__attribute__((used)) static MSIRECORD *FUNC_1( MSIDATABASE *VAR_0, LPCWSTR VAR_1 )
{
    static const WCHAR VAR_2[] = {
        's','e','l','e','c','t',' ','*',' ',
        'f','r','o','m',' ','B','i','n','a','r','y',' ',
        'w','h','e','r','e',' ',
            '`','N','a','m','e','`',' ','=',' ','\'','%','s','\'',0
    };

    return FUNC_0( VAR_0, VAR_2, VAR_1 );
}
