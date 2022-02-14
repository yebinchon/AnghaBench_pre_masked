
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sspi_data {int max_token; TYPE_2__* out_buf; TYPE_1__* in_buf; } ;
struct TYPE_9__ {int cbBuffer; void* pvBuffer; void* BufferType; } ;
struct TYPE_8__ {int cbMaxToken; } ;
struct TYPE_7__ {int cBuffers; TYPE_4__* pBuffers; void* ulVersion; } ;
struct TYPE_6__ {int cBuffers; TYPE_4__* pBuffers; void* ulVersion; } ;
typedef TYPE_3__ SecPkgInfoA ;
typedef int SecBufferDesc ;
typedef TYPE_4__ SecBuffer ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_2( struct sspi_data *VAR_2, SecPkgInfoA *VAR_3 )
{
    SecBuffer *VAR_4 = FUNC_1( FUNC_0(), 0, sizeof(SecBuffer) );

    VAR_2->in_buf = FUNC_1( FUNC_0(), 0, sizeof(SecBufferDesc) );
    VAR_2->out_buf = FUNC_1( FUNC_0(), 0, sizeof(SecBufferDesc) );
    VAR_2->max_token = VAR_3->cbMaxToken;

    VAR_2->in_buf->ulVersion = VAR_1;
    VAR_2->in_buf->cBuffers = 1;
    VAR_2->in_buf->pBuffers = VAR_4;

    VAR_4->cbBuffer = VAR_3->cbMaxToken;
    VAR_4->BufferType = VAR_0;
    VAR_4->pvBuffer = FUNC_1( FUNC_0(), 0, VAR_3->cbMaxToken );

    VAR_4 = FUNC_1( FUNC_0(), 0, sizeof(SecBuffer) );

    VAR_2->out_buf->ulVersion = VAR_1;
    VAR_2->out_buf->cBuffers = 1;
    VAR_2->out_buf->pBuffers = VAR_4;

    VAR_4->cbBuffer = VAR_3->cbMaxToken;
    VAR_4->BufferType = VAR_0;
    VAR_4->pvBuffer = FUNC_1( FUNC_0(), 0, VAR_3->cbMaxToken );
}
