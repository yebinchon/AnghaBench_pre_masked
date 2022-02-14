
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int info ;
typedef int WCHAR ;
struct TYPE_4__ {int cbAssemblyInfo; scalar_t__ dwAssemblyFlags; } ;
typedef int IAssemblyCache ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;
typedef TYPE_1__ ASSEMBLY_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int const*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_3( IAssemblyCache *VAR_4, const WCHAR *VAR_5 )
{
    HRESULT VAR_6;
    ASSEMBLY_INFO VAR_7;

    if (!VAR_4) return VAR_2;

    FUNC_2( &VAR_7, 0, sizeof(VAR_7) );
    VAR_7.cbAssemblyInfo = sizeof(VAR_7);
    VAR_6 = FUNC_0( VAR_4, 0, VAR_5, &VAR_7 );
    if (VAR_6 == VAR_3 || VAR_6 == VAR_1)
    {
        return (VAR_7.dwAssemblyFlags == VAR_0);
    }
    FUNC_1("QueryAssemblyInfo returned 0x%08x\n", VAR_6);
    return VAR_2;
}
