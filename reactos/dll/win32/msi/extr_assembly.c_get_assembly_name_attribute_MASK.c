
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assembly_name {size_t index; int * attrs; } ;
typedef char WCHAR ;
typedef int UINT ;
typedef int MSIRECORD ;
typedef struct assembly_name* LPVOID ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,char const*,char const*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static UINT FUNC_6( MSIRECORD *VAR_2, LPVOID VAR_3 )
{
    static const WCHAR VAR_4[] = {'%','s','=','"','%','s','"',0};
    static const WCHAR VAR_5[] = {'n','a','m','e',0};
    struct assembly_name *VAR_6 = VAR_3;
    const WCHAR *VAR_7 = FUNC_0( VAR_2, 2 );
    const WCHAR *VAR_8 = FUNC_0( VAR_2, 3 );
    int VAR_9 = FUNC_5( VAR_4 ) + FUNC_5( VAR_7 ) + FUNC_5( VAR_8 );

    if (!(VAR_6->attrs[VAR_6->index] = FUNC_1( VAR_9 * sizeof(WCHAR) )))
        return VAR_0;

    if (!FUNC_3( VAR_7, VAR_5 )) FUNC_4( VAR_6->attrs[VAR_6->index++], VAR_8 );
    else FUNC_2( VAR_6->attrs[VAR_6->index++], VAR_4, VAR_7, VAR_8 );
    return VAR_1;
}
