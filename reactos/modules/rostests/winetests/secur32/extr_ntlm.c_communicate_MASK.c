
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int max_token; TYPE_4__* out_buf; TYPE_2__* in_buf; } ;
struct TYPE_11__ {int cBuffers; TYPE_3__* pBuffers; } ;
struct TYPE_10__ {int * pvBuffer; int cbBuffer; } ;
struct TYPE_9__ {int cBuffers; TYPE_1__* pBuffers; } ;
struct TYPE_8__ {int cbBuffer; int * pvBuffer; } ;
typedef TYPE_5__ SspiData ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(SspiData *VAR_0, SspiData *VAR_1)
{
    if(VAR_0->out_buf != ((void*)0) && VAR_1->in_buf != ((void*)0))
    {
        FUNC_2("Running communicate.\n");
        if((VAR_0->out_buf->cBuffers >= 1) && (VAR_1->in_buf->cBuffers >= 1))
        {
            if((VAR_0->out_buf->pBuffers[0].pvBuffer != ((void*)0)) &&
                    (VAR_1->in_buf->pBuffers[0].pvBuffer != ((void*)0)))
            {
                FUNC_1(VAR_1->in_buf->pBuffers[0].pvBuffer, 0, VAR_1->max_token);

                FUNC_0(VAR_1->in_buf->pBuffers[0].pvBuffer,
                    VAR_0->out_buf->pBuffers[0].pvBuffer,
                    VAR_0->out_buf->pBuffers[0].cbBuffer);

                VAR_1->in_buf->pBuffers[0].cbBuffer = VAR_0->out_buf->pBuffers[0].cbBuffer;

                FUNC_1(VAR_0->out_buf->pBuffers[0].pvBuffer, 0, VAR_0->max_token);
            }
        }
    }
}
