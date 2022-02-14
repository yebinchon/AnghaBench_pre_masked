
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_5__ {size_t cBuffers; struct TYPE_5__* pBuffers; struct TYPE_5__* pvBuffer; } ;
struct TYPE_4__ {TYPE_3__* out_buf; TYPE_3__* in_buf; } ;
typedef TYPE_1__ SspiData ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(SspiData *VAR_0)
{
    ULONG VAR_1;

    if(VAR_0->in_buf != ((void*)0))
    {
        for(VAR_1 = 0; VAR_1 < VAR_0->in_buf->cBuffers; ++VAR_1)
        {
            FUNC_1(FUNC_0(), 0, VAR_0->in_buf->pBuffers[VAR_1].pvBuffer);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->in_buf->pBuffers);
        FUNC_1(FUNC_0(), 0, VAR_0->in_buf);
    }

    if(VAR_0->out_buf != ((void*)0))
    {
        for(VAR_1 = 0; VAR_1 < VAR_0->out_buf->cBuffers; ++VAR_1)
        {
            FUNC_1(FUNC_0(), 0, VAR_0->out_buf->pBuffers[VAR_1].pvBuffer);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->out_buf->pBuffers);
        FUNC_1(FUNC_0(), 0, VAR_0->out_buf);
    }
}
