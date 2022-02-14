
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int coap_rw_buffer_t ;
struct TYPE_5__ {int tok; } ;
typedef TYPE_1__ coap_packet_t ;
typedef int coap_endpoint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int const*,int,int ,int ,int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(const coap_endpoint_t *VAR_3, coap_rw_buffer_t *VAR_4, const coap_packet_t *VAR_5, coap_packet_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
    VAR_2 = FUNC_1();
    return FUNC_0(VAR_4, VAR_6, (const uint8_t *)(&VAR_2), sizeof(uint32_t), VAR_7, VAR_8, &VAR_5->tok, VAR_1, VAR_0);
}
