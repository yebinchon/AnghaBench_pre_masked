
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int readed; } ;
struct TYPE_4__ {int size; TYPE_2__ bsc; void* buf; } ;
typedef TYPE_1__ ScriptBSC ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BSCallback ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (void*,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,void*,int,int *) ;

__attribute__((used)) static HRESULT FUNC_4(BSCallback *VAR_2, IStream *VAR_3)
{
    ScriptBSC *VAR_4 = FUNC_2(VAR_2);
    DWORD VAR_5;
    HRESULT VAR_6;

    if(!VAR_4->buf) {
        VAR_4->buf = FUNC_0(128);
        if(!VAR_4->buf)
            return VAR_0;
        VAR_4->size = 128;
    }

    do {
        if(VAR_4->bsc.readed >= VAR_4->size) {
            void *VAR_7;
            VAR_7 = FUNC_1(VAR_4->buf, VAR_4->size << 1);
            if(!VAR_7)
                return VAR_0;
            VAR_4->size <<= 1;
            VAR_4->buf = VAR_7;
        }

        VAR_6 = FUNC_3(&VAR_4->bsc, VAR_3, VAR_4->buf+VAR_4->bsc.readed, VAR_4->size-VAR_4->bsc.readed, &VAR_5);
    }while(VAR_6 == VAR_1);

    return VAR_1;
}
