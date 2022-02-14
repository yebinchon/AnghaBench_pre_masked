
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCHAR ;
typedef int LPBYTE ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;
typedef int CHAR ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int *,int *,int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;

PCHAR FUNC_7( HKEY VAR_2, PCHAR VAR_3, PCHAR VAR_4 ) {
    PCHAR VAR_5 = ((void*)0);
    DWORD VAR_6 = 0, VAR_7 = 0;
    HKEY VAR_8 = ((void*)0);

    FUNC_0(VAR_1,("Looking in %x:%s:%s\n", VAR_2, VAR_3, VAR_4 ));

    if( VAR_3 && FUNC_6(VAR_3) ) {
        if( FUNC_2( VAR_2, VAR_3, &VAR_8 ) != VAR_0 )
            goto regerror;
    } else VAR_8 = VAR_2;

    FUNC_0(VAR_1,("Got Key %x\n", VAR_8));

    if( (VAR_7 = FUNC_3( VAR_8, VAR_4, ((void*)0), ((void*)0),
                                  (LPBYTE)VAR_5, &VAR_6 )) != VAR_0 )
        goto regerror;

    FUNC_0(VAR_1,("Value %s has size %d\n", VAR_4, VAR_6));

    if( !(VAR_5 = (CHAR*) FUNC_5(VAR_6)) )
        goto regerror;

    if( (VAR_7 = FUNC_3( VAR_8, VAR_4, ((void*)0), ((void*)0),
                                  (LPBYTE)VAR_5, &VAR_6 )) != VAR_0 )
        goto regerror;

    FUNC_0(VAR_1,("Value %s is %s\n", VAR_4, VAR_5));

    goto cleanup;

regerror:
    if( VAR_5 ) { FUNC_4( VAR_5 ); VAR_5 = ((void*)0); }
cleanup:
    if( VAR_8 && VAR_8 != VAR_2 ) {
        FUNC_0(VAR_1,("Closing key %x\n", VAR_8));
        FUNC_1( VAR_8 );
    }

    FUNC_0(VAR_1,("Returning %x with error %d\n", VAR_5, VAR_7));

    return VAR_5;
}
