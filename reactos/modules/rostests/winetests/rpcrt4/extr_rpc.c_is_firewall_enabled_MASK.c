
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int INetFwProfile ;
typedef int INetFwPolicy ;
typedef int INetFwMgr ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_11(void)
{
    HRESULT VAR_7, VAR_8;
    INetFwMgr *VAR_9 = ((void*)0);
    INetFwPolicy *VAR_10 = ((void*)0);
    INetFwProfile *VAR_11 = ((void*)0);
    VARIANT_BOOL VAR_12 = VAR_5;

    VAR_8 = FUNC_1( 0, VAR_2 );

    VAR_7 = FUNC_0( &VAR_1, ((void*)0), VAR_0, &VAR_3,
                           (void **)&VAR_9 );
    FUNC_10( VAR_7 == VAR_4, "got %08x\n", VAR_7 );
    if (VAR_7 != VAR_4) goto done;

    VAR_7 = FUNC_4( VAR_9, &VAR_10 );
    FUNC_10( VAR_7 == VAR_4, "got %08x\n", VAR_7 );
    if (VAR_7 != VAR_4) goto done;

    VAR_7 = FUNC_6( VAR_10, &VAR_11 );
    if (VAR_7 != VAR_4) goto done;

    VAR_7 = FUNC_8( VAR_11, &VAR_12 );
    FUNC_10( VAR_7 == VAR_4, "got %08x\n", VAR_7 );

done:
    if (VAR_10) FUNC_5( VAR_10 );
    if (VAR_11) FUNC_7( VAR_11 );
    if (VAR_9) FUNC_3( VAR_9 );
    if (FUNC_9( VAR_8 )) FUNC_2();
    return (VAR_12 == VAR_6);
}
