
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sspi_data {int max_token; TYPE_4__* out_buf; TYPE_2__* in_buf; } ;
struct TYPE_8__ {TYPE_3__* pBuffers; } ;
struct TYPE_7__ {int pvBuffer; int cbBuffer; } ;
struct TYPE_6__ {TYPE_1__* pBuffers; } ;
struct TYPE_5__ {int cbBuffer; int pvBuffer; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( struct sspi_data *VAR_0, struct sspi_data *VAR_1 )
{
    FUNC_2( "running communicate\n" );
    FUNC_1( VAR_1->in_buf->pBuffers[0].pvBuffer, 0, VAR_1->max_token );
    FUNC_0( VAR_1->in_buf->pBuffers[0].pvBuffer, VAR_0->out_buf->pBuffers[0].pvBuffer,
            VAR_0->out_buf->pBuffers[0].cbBuffer );
    VAR_1->in_buf->pBuffers[0].cbBuffer = VAR_0->out_buf->pBuffers[0].cbBuffer;
    FUNC_1( VAR_0->out_buf->pBuffers[0].pvBuffer, 0, VAR_0->max_token );
}
