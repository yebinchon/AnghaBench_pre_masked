
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_15__ {int* p; int len; } ;
typedef TYPE_5__ coap_rw_buffer_t ;
typedef int coap_responsecode_t ;
struct TYPE_14__ {void* const* p; size_t len; } ;
struct TYPE_17__ {scalar_t__ len; } ;
struct TYPE_11__ {int ver; scalar_t__ tkl; void** id; int code; int t; } ;
struct TYPE_16__ {int numopts; TYPE_4__ payload; TYPE_3__* opts; TYPE_7__ tok; TYPE_1__ hdr; } ;
typedef TYPE_6__ coap_packet_t ;
typedef scalar_t__ coap_content_type_t ;
typedef TYPE_7__ coap_buffer_t ;
struct TYPE_12__ {int* p; int len; } ;
struct TYPE_13__ {TYPE_2__ buf; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(coap_rw_buffer_t *VAR_3, coap_packet_t *VAR_4, const uint8_t *VAR_5, size_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, const coap_buffer_t* VAR_9, coap_responsecode_t VAR_10, coap_content_type_t VAR_11)
{
    VAR_4->hdr.ver = 0x01;
    VAR_4->hdr.t = VAR_2;
    VAR_4->hdr.tkl = 0;
    VAR_4->hdr.code = VAR_10;
    VAR_4->hdr.id[0] = VAR_7;
    VAR_4->hdr.id[1] = VAR_8;
    VAR_4->numopts = 1;


    if (VAR_9) {
        VAR_4->hdr.tkl = VAR_9->len;
        VAR_4->tok = *VAR_9;
    }


    VAR_4->opts[0].num = VAR_1;
    VAR_4->opts[0].buf.p = VAR_3->p;
    if (VAR_3->len < 2)
        return VAR_0;
    VAR_3->p[0] = ((uint16_t)VAR_11 & 0xFF00) >> 8;
    VAR_3->p[1] = ((uint16_t)VAR_11 & 0x00FF);
    VAR_4->opts[0].buf.len = 2;
    VAR_4->payload.p = VAR_5;
    VAR_4->payload.len = VAR_6;
    return 0;
}
