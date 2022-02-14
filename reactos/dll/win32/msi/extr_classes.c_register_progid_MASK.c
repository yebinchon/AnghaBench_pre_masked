
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int ProgID; TYPE_1__* CurVer; scalar_t__ IconPath; int Description; } ;
struct TYPE_5__ {scalar_t__ ProgID; } ;
typedef TYPE_2__ MSIPROGID ;
typedef scalar_t__ LPCWSTR ;
typedef int HKEY ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (int ,char const*,int *,scalar_t__) ;
 int FUNC_7 (int ,int *,int ) ;
 char const* VAR_2 ;
 char const* VAR_3 ;

__attribute__((used)) static UINT FUNC_8( const MSIPROGID* VAR_4 )
{
    static const WCHAR VAR_5[] = {'C','u','r','V','e','r',0};
    HKEY VAR_6 = 0;
    UINT VAR_7;

    VAR_7 = FUNC_2( VAR_1, VAR_4->ProgID, &VAR_6 );
    if (VAR_7 == VAR_0)
    {
        LPCWSTR VAR_8 = FUNC_5( VAR_4 );

        if (VAR_8)
            FUNC_6( VAR_6, VAR_2, ((void*)0), VAR_8 );
        else
            FUNC_3("%s has no class\n", FUNC_4( VAR_4->ProgID ) );

        if (VAR_4->Description)
            FUNC_7( VAR_6, ((void*)0), VAR_4->Description );

        if (VAR_4->IconPath)
            FUNC_6( VAR_6, VAR_3, ((void*)0), VAR_4->IconPath );


        if (VAR_4->CurVer)
            FUNC_6( VAR_6, VAR_5, ((void*)0), VAR_4->CurVer->ProgID );

        FUNC_1(VAR_6);
    }
    else
        FUNC_0("failed to create key %s\n", FUNC_4( VAR_4->ProgID ) );

    return VAR_7;
}
