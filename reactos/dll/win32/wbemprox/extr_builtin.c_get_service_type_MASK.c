
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static const WCHAR *FUNC_1( DWORD VAR_4 )
{
    static const WCHAR VAR_5[] =
        {'F','i','l','e',' ','S','y','s','t','e','m',' ','D','r','i','v','e','r',0};
    static const WCHAR VAR_6[] =
        {'K','e','r','n','e','l',' ','D','r','i','v','e','r',0};
    static const WCHAR VAR_7[] =
        {'O','w','n',' ','P','r','o','c','e','s','s',0};
    static const WCHAR VAR_8[] =
        {'S','h','a','r','e',' ','P','r','o','c','e','s','s',0};

    if (VAR_4 & VAR_1) return VAR_6;
    else if (VAR_4 & VAR_0) return VAR_5;
    else if (VAR_4 & VAR_2) return VAR_7;
    else if (VAR_4 & VAR_3) return VAR_8;
    else FUNC_0("unhandled type 0x%08x\n", VAR_4);
    return ((void*)0);
}
