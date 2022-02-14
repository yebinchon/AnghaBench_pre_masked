
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef char WCHAR ;
typedef int TypelibW ;
typedef int REFGUID ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static WCHAR *FUNC_4( REFGUID VAR_0, WORD VAR_1, WORD VAR_2, WCHAR *VAR_3 )
{
    static const WCHAR VAR_4[] = {'T','y','p','e','l','i','b','\\',0};
    static const WCHAR VAR_5[] = {'\\','%','x','.','%','x',0};

    FUNC_1( VAR_3, VAR_4, sizeof(VAR_4) );
    FUNC_0( VAR_0, VAR_3 + FUNC_3(VAR_3), 40 );
    FUNC_2( VAR_3 + FUNC_3(VAR_3), VAR_5, VAR_1, VAR_2 );
    return VAR_3;
}
