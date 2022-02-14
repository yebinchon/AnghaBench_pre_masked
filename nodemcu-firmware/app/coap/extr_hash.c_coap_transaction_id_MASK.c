
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int port ;
typedef int ip ;
typedef int coap_tid_t ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ coap_packet_t ;
typedef int* coap_key_t ;


 int FUNC_0 (unsigned char const*,int,int*) ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(const uint32_t VAR_0, const uint32_t VAR_1, const coap_packet_t *VAR_2, coap_tid_t *VAR_3) {
  coap_key_t VAR_4;
  FUNC_1(VAR_4, 0, sizeof(coap_key_t));


  FUNC_0((const unsigned char *)&(VAR_1), sizeof(VAR_1), VAR_4);
  FUNC_0((const unsigned char *)&(VAR_0), sizeof(VAR_0), VAR_4);
  FUNC_0((const unsigned char *)(VAR_2->hdr.id), sizeof(VAR_2->hdr.id), VAR_4);
  *VAR_3 = ((VAR_4[0] << 8) | VAR_4[1]) ^ ((VAR_4[2] << 8) | VAR_4[3]);
}
