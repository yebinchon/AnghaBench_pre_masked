
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ written; int data; } ;
struct TYPE_5__ {TYPE_3__ encoded; } ;
struct TYPE_6__ {scalar_t__ xml_enc; int dest; TYPE_1__ buffer; } ;
typedef TYPE_2__ mxwriter ;
typedef TYPE_3__ encoded_buffer ;
typedef int ULONG ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static HRESULT FUNC_1(mxwriter *VAR_2)
{
    encoded_buffer *VAR_3 = &VAR_2->buffer.encoded;
    ULONG VAR_4 = 0;

    if (!VAR_2->dest)
        return VAR_0;

    if (VAR_3->written == 0)
    {
        if (VAR_2->xml_enc == VAR_1)
            FUNC_0(VAR_2->dest, VAR_3->data, 0, &VAR_4);
    }
    else
    {
        FUNC_0(VAR_2->dest, VAR_3->data, VAR_3->written, &VAR_4);
        VAR_3->written = 0;
    }

    return VAR_0;
}
