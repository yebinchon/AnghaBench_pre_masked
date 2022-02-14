
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sspi_data {scalar_t__ max_token; TYPE_2__* out_buf; int ctxt; int * in_buf; int cred; } ;
typedef int ULONG ;
typedef int TimeStamp ;
struct TYPE_5__ {TYPE_1__* pBuffers; } ;
struct TYPE_4__ {scalar_t__ cbBuffer; scalar_t__ BufferType; } ;
typedef scalar_t__ SECURITY_STATUS ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *,int *,int ,int ,int ,int *,int ,int *,TYPE_2__*,int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_4( struct sspi_data *VAR_6, BOOL VAR_7 )
{
    SECURITY_STATUS VAR_8;
    TimeStamp VAR_9;
    ULONG VAR_10;

    FUNC_3( "running client for the %s time\n", VAR_7 ? "first" : "second" );

    VAR_6->out_buf->pBuffers[0].cbBuffer = VAR_6->max_token;
    VAR_6->out_buf->pBuffers[0].BufferType = VAR_0;

    VAR_8 = FUNC_1( VAR_7 ? &VAR_6->cred : ((void*)0), VAR_7 ? ((void*)0) : &VAR_6->ctxt,
                                      ((void*)0), 0, 0, VAR_1, VAR_7 ? ((void*)0) : VAR_6->in_buf,
                                      0, &VAR_6->ctxt, VAR_6->out_buf, &VAR_10, &VAR_9 );
    if (VAR_8 == VAR_3 || VAR_8 == VAR_4)
    {
        FUNC_0( &VAR_6->ctxt, VAR_6->out_buf );
        if (VAR_8 == VAR_3)
            VAR_8 = VAR_5;
        else if (VAR_8 == VAR_4)
            VAR_8 = VAR_2;
    }
    FUNC_2( VAR_6->out_buf->pBuffers[0].BufferType == VAR_0,
        "buffer type changed from SECBUFFER_TOKEN to %u\n", VAR_6->out_buf->pBuffers[0].BufferType );
    FUNC_2( VAR_6->out_buf->pBuffers[0].cbBuffer < VAR_6->max_token,
        "InitializeSecurityContext didn't change buffer size\n" );
    return VAR_8;
}
