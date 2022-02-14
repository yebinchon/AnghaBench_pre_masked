
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG_PTR ;
typedef int HWND ;
typedef scalar_t__ HENHMETAFILE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static HENHMETAFILE FUNC_3( HWND VAR_4, HENHMETAFILE VAR_5, DWORD VAR_6 )
{
    if ((VAR_6 & VAR_3) != VAR_2) return 0;
    if (VAR_5 && FUNC_0(VAR_5) != VAR_1) {
        FUNC_2("hEnhMetaFile != 0, but it's not an enhanced metafile\n");
        return 0;
    }
    return (HENHMETAFILE)FUNC_1( VAR_4, VAR_0, (LONG_PTR)VAR_5 );
}
