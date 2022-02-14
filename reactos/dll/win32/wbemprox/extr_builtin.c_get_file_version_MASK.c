
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_2__ {int dwFileVersionMS; int dwFileVersionLS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int ,int,void*) ;
 int FUNC_3 (void*,char const*,void**,int*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,char const*,int,int,int,int) ;

__attribute__((used)) static WCHAR *FUNC_7( const WCHAR *VAR_0 )
{
    static const WCHAR VAR_1[] = {'\\',0}, VAR_2[] = {'%','u','.','%','u','.','%','u','.','%','u',0};
    VS_FIXEDFILEINFO *VAR_3;
    DWORD VAR_4;
    void *VAR_5;
    WCHAR *VAR_6;

    if (!(VAR_6 = FUNC_4( (4 * 5 + FUNC_0( VAR_2 )) * sizeof(WCHAR) ))) return ((void*)0);
    if (!(VAR_4 = FUNC_1( VAR_0, ((void*)0) )) || !(VAR_5 = FUNC_4( VAR_4 )))
    {
        FUNC_5( VAR_6 );
        return ((void*)0);
    }
    if (!FUNC_2( VAR_0, 0, VAR_4, VAR_5 ) ||
        !FUNC_3( VAR_5, VAR_1, (void **)&VAR_3, &VAR_4 ))
    {
        FUNC_5( VAR_5 );
        FUNC_5( VAR_6 );
        return ((void*)0);
    }
    FUNC_6( VAR_6, VAR_2, VAR_3->dwFileVersionMS >> 16, VAR_3->dwFileVersionMS & 0xffff,
                         VAR_3->dwFileVersionLS >> 16, VAR_3->dwFileVersionLS & 0xffff );
    FUNC_5( VAR_5 );
    return VAR_6;
}
