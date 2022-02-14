
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int info ;
typedef int WCHAR ;
struct TYPE_7__ {int cbAssemblyInfo; int cchBuf; int * pszCurrentAssemblyPathBuf; } ;
struct TYPE_6__ {int ** cache_net; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int IAssemblyCache ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ ASSEMBLY_INFO ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int const*,TYPE_2__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;

WCHAR *FUNC_7( MSIPACKAGE *VAR_2, const WCHAR *VAR_3 )
{
    HRESULT VAR_4;
    ASSEMBLY_INFO VAR_5;
    IAssemblyCache *VAR_6 = VAR_2->cache_net[VAR_0];

    if (!VAR_6) return ((void*)0);

    FUNC_4( &VAR_5, 0, sizeof(VAR_5) );
    VAR_5.cbAssemblyInfo = sizeof(VAR_5);
    VAR_4 = FUNC_1( VAR_6, 0, VAR_3, &VAR_5 );
    if (VAR_4 != VAR_1) return ((void*)0);

    if (!(VAR_5.pszCurrentAssemblyPathBuf = FUNC_5( VAR_5.cchBuf * sizeof(WCHAR) ))) return ((void*)0);

    VAR_4 = FUNC_1( VAR_6, 0, VAR_3, &VAR_5 );
    if (FUNC_0( VAR_4 ))
    {
        FUNC_6( VAR_5.pszCurrentAssemblyPathBuf );
        return ((void*)0);
    }
    FUNC_2("returning %s\n", FUNC_3(VAR_5.pszCurrentAssemblyPathBuf));
    return VAR_5.pszCurrentAssemblyPathBuf;
}
