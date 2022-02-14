
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
typedef int coap_rw_buffer_t ;
struct TYPE_18__ {scalar_t__ code; int * id; } ;
struct TYPE_19__ {int tok; TYPE_3__ hdr; } ;
typedef TYPE_4__ coap_packet_t ;
struct TYPE_16__ {scalar_t__ len; int p; } ;
struct TYPE_20__ {TYPE_1__ buf; } ;
typedef TYPE_5__ coap_option_t ;
struct TYPE_21__ {int (* handler ) (TYPE_6__ const*,int *,TYPE_4__ const*,TYPE_4__*,int ,int ) ;scalar_t__ method; int * user_entry; TYPE_2__* path; } ;
typedef TYPE_6__ coap_endpoint_t ;
struct TYPE_17__ {int count; int * elems; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_4__ const*,int ,int*) ;
 int FUNC_1 (int *,TYPE_4__*,int *,int ,int ,int ,int *,int ,int ) ;
 TYPE_6__* VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__ const*,int *,TYPE_4__ const*,TYPE_4__*,int ,int ) ;

int FUNC_5(coap_rw_buffer_t *VAR_4, const coap_packet_t *VAR_5, coap_packet_t *VAR_6)
{
    const coap_option_t *VAR_7;
    int VAR_8;
    uint8_t VAR_9;
    const coap_endpoint_t *VAR_10 = VAR_3;

    while(((void*)0) != VAR_10->handler)
    {
        if (VAR_10->method != VAR_5->hdr.code)
            goto next;
        if (((void*)0) != (VAR_7 = FUNC_0(VAR_5, VAR_1, &VAR_9)))
        {

            if ((VAR_9 != VAR_10->path->count ) && (VAR_9 != VAR_10->path->count + 1))
                goto next;
            for (VAR_8=0;VAR_8<VAR_10->path->count;VAR_8++)
            {
                if (VAR_7[VAR_8].buf.len != FUNC_3(VAR_10->path->elems[VAR_8]))
                    goto next;
                if (0 != FUNC_2(VAR_10->path->elems[VAR_8], VAR_7[VAR_8].buf.p, VAR_7[VAR_8].buf.len))
                    goto next;
            }

            if (VAR_9==VAR_10->path->count+1 && VAR_10->user_entry == ((void*)0))
                goto next;
            return VAR_10->handler(VAR_10, VAR_4, VAR_5, VAR_6, VAR_5->hdr.id[0], VAR_5->hdr.id[1]);
        }
next:
        VAR_10++;
    }

    FUNC_1(VAR_4, VAR_6, ((void*)0), 0, VAR_5->hdr.id[0], VAR_5->hdr.id[1], &VAR_5->tok, VAR_2, VAR_0);

    return 0;
}
