
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int coap_rw_buffer_t ;
struct TYPE_6__ {int * p; int len; } ;
struct TYPE_7__ {int tok; TYPE_1__ content; } ;
typedef TYPE_2__ coap_packet_t ;
typedef int coap_endpoint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int const*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const coap_endpoint_t *VAR_4, coap_rw_buffer_t *VAR_5, const coap_packet_t *VAR_6, coap_packet_t *VAR_7, uint8_t VAR_8, uint8_t VAR_9)
{
    VAR_7->content.p = (uint8_t *)FUNC_2(1,VAR_3);
    if(VAR_7->content.p == ((void*)0)){
        FUNC_0("not enough memory\n");
        return VAR_1;
    }
    VAR_7->content.len = VAR_3;
    FUNC_1(VAR_7->content.p, VAR_7->content.len);
    return FUNC_3(VAR_5, VAR_7, (const uint8_t *)VAR_7->content.p, FUNC_4(VAR_7->content.p), VAR_8, VAR_9, &VAR_6->tok, VAR_2, VAR_0);
}
