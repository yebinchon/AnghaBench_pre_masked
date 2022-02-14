
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_26__ {scalar_t__ length; int s; } ;
struct TYPE_25__ {scalar_t__ length; int s; } ;
struct TYPE_22__ {int length; int * s; } ;
struct TYPE_28__ {scalar_t__ port; TYPE_6__ query; TYPE_5__ path; TYPE_2__ host; } ;
typedef TYPE_8__ coap_uri_t ;
struct TYPE_29__ {int len; int * p; } ;
typedef TYPE_9__ coap_rw_buffer_t ;
struct TYPE_27__ {size_t len; int const* p; } ;
struct TYPE_20__ {scalar_t__ len; } ;
struct TYPE_21__ {int ver; int* id; scalar_t__ tkl; int code; int t; } ;
struct TYPE_19__ {size_t numopts; TYPE_7__ payload; TYPE_4__* opts; TYPE_11__ tok; TYPE_1__ hdr; } ;
typedef TYPE_10__ coap_packet_t ;
typedef int coap_msgtype_t ;
typedef int coap_method_t ;
struct TYPE_23__ {int len; int * p; } ;
struct TYPE_24__ {TYPE_3__ buf; int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_9__*,TYPE_10__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_9__*,TYPE_10__*,int ,scalar_t__) ;
 int VAR_4 ;
 TYPE_11__ VAR_5 ;

int FUNC_4(coap_rw_buffer_t *VAR_6, coap_packet_t *VAR_7, coap_msgtype_t VAR_8, coap_method_t VAR_9, coap_uri_t *VAR_10, const uint8_t *VAR_11, size_t VAR_12)
{
    int VAR_13;
    VAR_7->hdr.ver = 0x01;
    VAR_7->hdr.t = VAR_8;
    VAR_7->hdr.tkl = 0;
    VAR_7->hdr.code = VAR_9;
    VAR_7->hdr.id[0] = (VAR_4 >> 8) & 0xFF;
    VAR_7->hdr.id[1] = VAR_4 & 0xFF;
    VAR_4++;
    FUNC_0("message_id: %d.\n", VAR_4);
    VAR_7->numopts = 0;

    if (VAR_5.len) {
        VAR_7->hdr.tkl = VAR_5.len;
        VAR_7->tok = VAR_5;
    }

    if (VAR_6->len < 2)
        return VAR_1;

    uint8_t *VAR_14 = VAR_6->p;




    if(VAR_10->host.length){


        VAR_7->opts[VAR_7->numopts].num = VAR_2;
        VAR_7->opts[VAR_7->numopts].buf.p = VAR_10->host.s;
        VAR_7->opts[VAR_7->numopts].buf.len = VAR_10->host.length;
        VAR_7->numopts++;
    }

    if (VAR_10->port != VAR_0) {
        VAR_7->opts[VAR_7->numopts].num = VAR_3;
        VAR_13 = FUNC_1(VAR_6->p, VAR_10->port);
        VAR_7->opts[VAR_7->numopts].buf.len = VAR_13;
        VAR_7->opts[VAR_7->numopts].buf.p = VAR_6->p;
        VAR_6->p += VAR_13;
        VAR_6->len -= VAR_13;
        VAR_7->numopts++;
    }

    if (VAR_10->path.length) {
        VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_10->path.s, VAR_10->path.length);
    }

    if (VAR_10->query.length) {
        VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_10->query.s, VAR_10->query.length);
    }

    VAR_7->payload.p = VAR_11;
    VAR_7->payload.len = VAR_12;
    VAR_6->p = VAR_14;
    return 0;
}
