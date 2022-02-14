
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef int LPVOID ;
typedef int IWineMsiRemotePackage ;
typedef int IWineMsiRemoteCustomAction ;
typedef int INT ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int GUID ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int const*,int *,int *,int *,int *,int **) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static UINT FUNC_6( const GUID *VAR_5, INT *VAR_6, MSIHANDLE *VAR_7,
                             BSTR *VAR_8, BSTR *VAR_9,
                             IWineMsiRemotePackage **VAR_10 )
{
    IClassFactory *VAR_11 = ((void*)0);
    IWineMsiRemoteCustomAction *VAR_12 = ((void*)0);
    HRESULT VAR_13;

    VAR_13 = FUNC_0( &VAR_0,
                           &VAR_3, (LPVOID *)&VAR_11 );
    if (FUNC_2(VAR_13))
    {
        FUNC_1("failed to get IClassFactory interface\n");
        return VAR_1;
    }

    VAR_13 = FUNC_3( VAR_11, ((void*)0), &VAR_4, (LPVOID *)&VAR_12 );
    if (FUNC_2(VAR_13))
    {
        FUNC_1("failed to get IWineMsiRemoteCustomAction interface\n");
        return VAR_1;
    }

    VAR_13 = FUNC_4( VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 );
    FUNC_5( VAR_12 );
    if (FUNC_2(VAR_13))
    {
        FUNC_1("GetActionInfo failed\n");
        return VAR_1;
    }

    return VAR_2;
}
