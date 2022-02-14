
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pkt_scr {int n; int member_2; int * member_1; TYPE_2__* member_0; } ;
typedef int coap_rw_buffer_t ;
typedef int coap_parse_iterator_t ;
struct TYPE_5__ {int numopts; TYPE_1__* opts; } ;
typedef TYPE_2__ coap_packet_t ;
struct TYPE_4__ {int num; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t,char,unsigned char*,int,int *) ;
 int FUNC_1 (int *,int ,struct pkt_scr*) ;
 int VAR_1 ;

int FUNC_2(coap_rw_buffer_t *VAR_2, coap_packet_t *VAR_3, const unsigned char *VAR_4, size_t VAR_5) {
  struct pkt_scr VAR_6 = { VAR_3, *VAR_2, 0 };
  coap_parse_iterator_t VAR_7;

  FUNC_0((unsigned char *)VAR_4, VAR_5,
         '/', (unsigned char *)"?#", 2, &VAR_7);
  FUNC_1(&VAR_7, VAR_1, &VAR_6);

  int VAR_8;
  for(VAR_8=0;VAR_8<VAR_6.n;VAR_8++){
    VAR_3->opts[VAR_3->numopts - VAR_8 - 1].num = VAR_0;
  }

  return VAR_6.n;
}
