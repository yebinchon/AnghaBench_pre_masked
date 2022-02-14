
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sspi_data {TYPE_1__* out_buf; TYPE_1__* in_buf; } ;
struct TYPE_2__ {unsigned int cBuffers; struct TYPE_2__* pBuffers; struct TYPE_2__* pvBuffer; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( struct sspi_data *VAR_0 )
{
    unsigned int VAR_1;

    if (VAR_0->in_buf)
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->in_buf->cBuffers; ++VAR_1)
            FUNC_1( FUNC_0(), 0, VAR_0->in_buf->pBuffers[VAR_1].pvBuffer );
        FUNC_1( FUNC_0(), 0, VAR_0->in_buf->pBuffers );
        FUNC_1( FUNC_0(), 0, VAR_0->in_buf );
    }
    if (VAR_0->out_buf)
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->out_buf->cBuffers; ++VAR_1)
            FUNC_1( FUNC_0(), 0, VAR_0->out_buf->pBuffers[VAR_1].pvBuffer );
        FUNC_1( FUNC_0(), 0, VAR_0->out_buf->pBuffers );
        FUNC_1( FUNC_0(), 0, VAR_0->out_buf );
    }
}
