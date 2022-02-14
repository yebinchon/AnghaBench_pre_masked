
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int coap_rw_buffer_t ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_6__ {int tok; TYPE_5__ payload; } ;
typedef TYPE_1__ coap_packet_t ;
typedef int coap_endpoint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int ,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(const coap_endpoint_t *VAR_6, coap_rw_buffer_t *VAR_7, const coap_packet_t *VAR_8, coap_packet_t *VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
    if (VAR_8->payload.len == 0)
        return FUNC_2(VAR_7, VAR_9, ((void*)0), 0, VAR_10, VAR_11, &VAR_8->tok, VAR_1, VAR_0);
    if (VAR_8->payload.len > 0)
    {
        char VAR_12[VAR_3];
        if (!FUNC_1(VAR_12, VAR_3, &VAR_8->payload) &&
            FUNC_3(VAR_12, FUNC_4(VAR_12))) {
            FUNC_0("\nResult(if any):\n");
            FUNC_5 (VAR_5, VAR_4, 0);
        }
        return FUNC_2(VAR_7, VAR_9, ((void*)0), 0, VAR_10, VAR_11, &VAR_8->tok, VAR_2, VAR_0);
    }
}
