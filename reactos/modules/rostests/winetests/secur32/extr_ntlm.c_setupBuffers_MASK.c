
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int cbBuffer; int * pvBuffer; void* BufferType; } ;
struct TYPE_11__ {int cbMaxToken; } ;
struct TYPE_10__ {int max_token; TYPE_2__* out_buf; TYPE_1__* in_buf; } ;
struct TYPE_9__ {int cBuffers; TYPE_5__* pBuffers; void* ulVersion; } ;
struct TYPE_8__ {int cBuffers; TYPE_5__* pBuffers; void* ulVersion; } ;
typedef TYPE_3__ SspiData ;
typedef TYPE_4__ SecPkgInfoA ;
typedef int SecBufferDesc ;
typedef int SecBuffer ;
typedef int SECURITY_STATUS ;
typedef TYPE_5__* PSecBuffer ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_3(SspiData *VAR_4, SecPkgInfoA *VAR_5)
{

    VAR_4->in_buf = FUNC_1(FUNC_0(), 0, sizeof(SecBufferDesc));
    VAR_4->out_buf = FUNC_1(FUNC_0(), 0, sizeof(SecBufferDesc));
    VAR_4->max_token = VAR_5->cbMaxToken;

    if(VAR_4->in_buf != ((void*)0))
    {
        PSecBuffer VAR_6 = FUNC_1(FUNC_0(), 0,
                sizeof(SecBuffer));
        if(VAR_6 == ((void*)0)){
            FUNC_2("in_buf: sec_buffer == NULL\n");
            return VAR_2;
        }

        VAR_4->in_buf->ulVersion = VAR_1;
        VAR_4->in_buf->cBuffers = 1;
        VAR_4->in_buf->pBuffers = VAR_6;

        VAR_6->cbBuffer = VAR_5->cbMaxToken;
        VAR_6->BufferType = VAR_0;
        if((VAR_6->pvBuffer = FUNC_1(FUNC_0(), 0,
                        VAR_5->cbMaxToken)) == ((void*)0))
        {
            FUNC_2("in_buf: sec_buffer->pvBuffer == NULL\n");
            return VAR_2;
        }
    }
    else
    {
        FUNC_2("HeapAlloc in_buf returned NULL\n");
        return VAR_2;
    }

    if(VAR_4->out_buf != ((void*)0))
    {
        PSecBuffer VAR_7 = FUNC_1(FUNC_0(), 0,
                sizeof(SecBuffer));

        if(VAR_7 == ((void*)0)){
            FUNC_2("out_buf: sec_buffer == NULL\n");
            return VAR_2;
        }

        VAR_4->out_buf->ulVersion = VAR_1;
        VAR_4->out_buf->cBuffers = 1;
        VAR_4->out_buf->pBuffers = VAR_7;

        VAR_7->cbBuffer = VAR_5->cbMaxToken;
        VAR_7->BufferType = VAR_0;
        if((VAR_7->pvBuffer = FUNC_1(FUNC_0(), 0,
                        VAR_5->cbMaxToken)) == ((void*)0)){
            FUNC_2("out_buf: sec_buffer->pvBuffer == NULL\n");
            return VAR_2;
        }
    }
    else
    {
        FUNC_2("HeapAlloc out_buf returned NULL\n");
        return VAR_2;
    }

    return VAR_3;
}
