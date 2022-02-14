
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sspi_data {int cred; int id; } ;
typedef int TimeStamp ;
typedef int SecPkgInfoA ;
typedef int SEC_CHAR ;
typedef scalar_t__ SECURITY_STATUS ;


 scalar_t__ FUNC_0 (int *,int *,int ,int *,int ,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (struct sspi_data*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_6( struct sspi_data *VAR_2, SEC_CHAR *VAR_3 )
{
    SECURITY_STATUS VAR_4;
    SecPkgInfoA *VAR_5;
    TimeStamp VAR_6;

    FUNC_5( "setting up client\n" );

    VAR_4 = FUNC_2( VAR_3, &VAR_5 );
    FUNC_3( VAR_4 == VAR_1, "QuerySecurityPackageInfo returned %08x\n", VAR_4 );

    FUNC_4( VAR_2, VAR_5 );
    FUNC_1( VAR_5 );

    VAR_4 = FUNC_0( ((void*)0), VAR_3, VAR_0, ((void*)0),
                                     VAR_2->id, ((void*)0), ((void*)0), &VAR_2->cred, &VAR_6 );
    FUNC_3( VAR_4 == VAR_1, "AcquireCredentialsHandleA returned %08x\n", VAR_4 );
    return VAR_4;
}
