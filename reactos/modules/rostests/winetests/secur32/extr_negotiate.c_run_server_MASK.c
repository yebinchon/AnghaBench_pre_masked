
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sspi_data {int out_buf; int ctxt; int in_buf; int cred; } ;
typedef int ULONG ;
typedef int TimeStamp ;
typedef scalar_t__ SECURITY_STATUS ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int *,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_3( struct sspi_data *VAR_5, BOOL VAR_6 )
{
    SECURITY_STATUS VAR_7;
    TimeStamp VAR_8;
    ULONG VAR_9;

    FUNC_2( "running server for the %s time\n", VAR_6 ? "first" : "second" );

    VAR_7 = FUNC_0( &VAR_5->cred, VAR_6 ? ((void*)0) : &VAR_5->ctxt,
                                 VAR_5->in_buf, 0, VAR_0,
                                 &VAR_5->ctxt, VAR_5->out_buf, &VAR_9, &VAR_8 );
    if (VAR_7 == VAR_2 || VAR_7 == VAR_3)
    {
        FUNC_1( &VAR_5->ctxt, VAR_5->out_buf );
        if (VAR_7 == VAR_2)
            VAR_7 = VAR_4;
        else if (VAR_7 == VAR_3)
            VAR_7 = VAR_1;
    }
    return VAR_7;
}
