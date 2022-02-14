
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum firewall_op { ____Placeholder_firewall_op } firewall_op ;
typedef char WCHAR ;
typedef int INetFwProfile ;
typedef int INetFwPolicy ;
typedef int INetFwMgr ;
typedef int INetFwAuthorizedApplications ;
typedef int INetFwAuthorizedApplication ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int **) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int **) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int **) ;
 int VAR_10 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int,char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_21( enum firewall_op VAR_12 )
{
    static const WCHAR VAR_13[] = {'r','p','c','r','t','4','_','t','e','s','t',0};
    HRESULT VAR_14, VAR_15;
    INetFwMgr *VAR_16 = ((void*)0);
    INetFwPolicy *VAR_17 = ((void*)0);
    INetFwProfile *VAR_18 = ((void*)0);
    INetFwAuthorizedApplication *VAR_19 = ((void*)0);
    INetFwAuthorizedApplications *VAR_20 = ((void*)0);
    BSTR VAR_21, VAR_22 = FUNC_18( ((void*)0), VAR_10 );

    if (!FUNC_3( ((void*)0), VAR_22, VAR_10 ))
    {
        FUNC_19( VAR_22 );
        return VAR_6;
    }
    VAR_15 = FUNC_1( 0, VAR_5 );

    VAR_14 = FUNC_0( &VAR_4, ((void*)0), VAR_2, &VAR_9,
                           (void **)&VAR_16 );
    FUNC_20( VAR_14 == VAR_11, "got %08x\n", VAR_14 );
    if (VAR_14 != VAR_11) goto done;

    VAR_14 = FUNC_11( VAR_16, &VAR_17 );
    FUNC_20( VAR_14 == VAR_11, "got %08x\n", VAR_14 );
    if (VAR_14 != VAR_11) goto done;

    VAR_14 = FUNC_13( VAR_17, &VAR_18 );
    if (VAR_14 != VAR_11) goto done;

    VAR_14 = FUNC_15( VAR_18, &VAR_20 );
    FUNC_20( VAR_14 == VAR_11, "got %08x\n", VAR_14 );
    if (VAR_14 != VAR_11) goto done;

    VAR_14 = FUNC_0( &VAR_3, ((void*)0), VAR_2,
                           &VAR_8, (void **)&VAR_19 );
    FUNC_20( VAR_14 == VAR_11, "got %08x\n", VAR_14 );
    if (VAR_14 != VAR_11) goto done;

    VAR_14 = FUNC_6( VAR_19, VAR_22 );
    if (VAR_14 != VAR_11) goto done;

    VAR_21 = FUNC_17( VAR_13 );
    VAR_14 = FUNC_5( VAR_19, VAR_21 );
    FUNC_19( VAR_21 );
    FUNC_20( VAR_14 == VAR_11, "got %08x\n", VAR_14 );
    if (VAR_14 != VAR_11) goto done;

    if (VAR_12 == VAR_0)
        VAR_14 = FUNC_7( VAR_20, VAR_19 );
    else if (VAR_12 == VAR_1)
        VAR_14 = FUNC_9( VAR_20, VAR_22 );
    else
        VAR_14 = VAR_7;

done:
    if (VAR_19) FUNC_4( VAR_19 );
    if (VAR_20) FUNC_8( VAR_20 );
    if (VAR_17) FUNC_12( VAR_17 );
    if (VAR_18) FUNC_14( VAR_18 );
    if (VAR_16) FUNC_10( VAR_16 );
    if (FUNC_16( VAR_15 )) FUNC_2();
    FUNC_19( VAR_22 );
    return VAR_14;
}
