
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
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int **) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int **) ;
 int VAR_10 ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,char const*) ;
 int FUNC_22 (int,char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_23( enum firewall_op VAR_12 )
{
    static const WCHAR VAR_13[] =
        {'d','p','l','a','y','s','v','r','.','e','x','e',0};
    static const WCHAR VAR_14[] = {'\\',0};
    static const WCHAR VAR_15[] =
        {'d','p','l','a','y','_','c','l','i','e','n','t',0};
    static const WCHAR VAR_16[] =
        {'d','p','l','a','y','_','s','e','r','v','e','r',0};
    HRESULT VAR_17, VAR_18;
    INetFwMgr *VAR_19 = ((void*)0);
    INetFwPolicy *VAR_20 = ((void*)0);
    INetFwProfile *VAR_21 = ((void*)0);
    INetFwAuthorizedApplication *VAR_22 = ((void*)0);
    INetFwAuthorizedApplications *VAR_23 = ((void*)0);
    BSTR VAR_24, VAR_25 = FUNC_19( ((void*)0), VAR_10 );
    WCHAR VAR_26[VAR_10];

    if (!FUNC_3( ((void*)0), VAR_25, VAR_10 ))
    {
        FUNC_20( VAR_25 );
        return VAR_6;
    }

    if(!FUNC_4(VAR_26, VAR_10))
    {
        FUNC_20( VAR_25 );
        return VAR_6;
    }
    FUNC_21(VAR_26, VAR_14);
    FUNC_21(VAR_26, VAR_13);

    VAR_18 = FUNC_1( 0, VAR_5 );

    VAR_17 = FUNC_0( &VAR_4, ((void*)0), VAR_2, &VAR_9,
                           (void **)&VAR_19 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    VAR_17 = FUNC_12( VAR_19, &VAR_20 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    VAR_17 = FUNC_14( VAR_20, &VAR_21 );
    if (VAR_17 != VAR_11) goto done;

    VAR_17 = FUNC_16( VAR_21, &VAR_23 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    VAR_17 = FUNC_0( &VAR_3, ((void*)0), VAR_2,
                           &VAR_8, (void **)&VAR_22 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    VAR_17 = FUNC_7( VAR_22, VAR_25 );
    if (VAR_17 != VAR_11) goto done;

    VAR_24 = FUNC_18( VAR_15 );
    VAR_17 = FUNC_6( VAR_22, VAR_24 );
    FUNC_20( VAR_24 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    if (VAR_12 == VAR_0)
        VAR_17 = FUNC_8( VAR_23, VAR_22 );
    else if (VAR_12 == VAR_1)
        VAR_17 = FUNC_10( VAR_23, VAR_25 );
    else
        VAR_17 = VAR_7;
    if (VAR_17 != VAR_11) goto done;

    FUNC_5( VAR_22 );
    VAR_17 = FUNC_0( &VAR_3, ((void*)0), VAR_2,
                           &VAR_8, (void **)&VAR_22 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    FUNC_20( VAR_25 );
    VAR_25 = FUNC_18( VAR_26 );
    VAR_17 = FUNC_7( VAR_22, VAR_25 );
    if (VAR_17 != VAR_11) goto done;

    VAR_24 = FUNC_18( VAR_16 );
    VAR_17 = FUNC_6( VAR_22, VAR_24 );
    FUNC_20( VAR_24 );
    FUNC_22( VAR_17 == VAR_11, "got %08x\n", VAR_17 );
    if (VAR_17 != VAR_11) goto done;

    if (VAR_12 == VAR_0)
        VAR_17 = FUNC_8( VAR_23, VAR_22 );
    else if (VAR_12 == VAR_1)
        VAR_17 = FUNC_10( VAR_23, VAR_25 );
    else
        VAR_17 = VAR_7;

done:
    if (VAR_22) FUNC_5( VAR_22 );
    if (VAR_23) FUNC_9( VAR_23 );
    if (VAR_20) FUNC_13( VAR_20 );
    if (VAR_21) FUNC_15( VAR_21 );
    if (VAR_19) FUNC_11( VAR_19 );
    if (FUNC_17( VAR_18 )) FUNC_2();
    FUNC_20( VAR_25 );
    return VAR_17;
}
