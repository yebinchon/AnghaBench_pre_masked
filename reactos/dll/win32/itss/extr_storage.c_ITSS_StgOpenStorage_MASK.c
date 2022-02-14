
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmFile {int dummy; } ;
typedef char WCHAR ;
typedef int SNB ;
typedef int IStorage ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (struct chmFile*,char const*,int **) ;
 int FUNC_1 (char*,int ) ;
 struct chmFile* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

HRESULT FUNC_4(
    const WCHAR* VAR_1,
    IStorage* VAR_2,
    DWORD VAR_3,
    SNB VAR_4,
    DWORD VAR_5,
    IStorage** VAR_6)
{
    struct chmFile *VAR_7;
    static const WCHAR VAR_8[] = { '/', 0 };

    FUNC_1("%s\n", FUNC_3(VAR_1) );

    VAR_7 = FUNC_2( VAR_1 );
    if( !VAR_7 )
        return VAR_0;

    return FUNC_0( VAR_7, VAR_8, VAR_6 );
}
