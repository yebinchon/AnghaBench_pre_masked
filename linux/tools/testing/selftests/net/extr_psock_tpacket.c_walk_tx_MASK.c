
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union frame_map {TYPE_5__* v2; void* raw; TYPE_3__* v1; } ;
typedef int uint8_t ;
struct tpacket3_hdr {size_t tp_snaplen; size_t tp_len; int tp_next_offset; } ;
struct sockaddr_ll {int sll_ifindex; int sll_halen; int sll_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {int tp_frame_nr; } ;
struct ring {int version; int rd_num; scalar_t__ type; TYPE_1__ req3; } ;
struct pollfd {int fd; int events; scalar_t__ revents; } ;
typedef int pfd ;
typedef int packet ;
typedef int ll ;
struct TYPE_9__ {size_t tp_snaplen; size_t tp_len; } ;
struct TYPE_10__ {TYPE_4__ tp_h; } ;
struct TYPE_7__ {size_t tp_snaplen; size_t tp_len; } ;
struct TYPE_8__ {TYPE_2__ tp_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,size_t*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int,unsigned int,...) ;
 void* FUNC_8 (struct ring*,unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*,size_t) ;
 int FUNC_12 (struct pollfd*,int ,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct pollfd*,int,int) ;
 int FUNC_16 (int,char*,int,int ,int *,int *) ;
 int FUNC_17 (int,int *,int ,int ,int *,int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 () ;
 int VAR_11 ;
 int FUNC_20 (char*,int) ;
 size_t VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_21(int VAR_14, struct ring *VAR_15)
{
 struct pollfd VAR_16;
 int VAR_17, VAR_18;
 size_t VAR_19;
 union frame_map VAR_20;
 char VAR_21[1024];
 unsigned int VAR_22 = 0, VAR_23 = 0;
 struct sockaddr_ll VAR_24 = {
  .sll_family = VAR_4,
  .sll_halen = VAR_0,
 };
 int VAR_25;





 if (VAR_15->version <= 129)
  VAR_25 = VAR_15->rd_num;
 else
  VAR_25 = VAR_15->req3.tp_frame_nr;

 FUNC_3(VAR_15->type != VAR_3);
 FUNC_3(VAR_25 < VAR_2);

 VAR_17 = FUNC_18(VAR_4, VAR_7, FUNC_9(VAR_1));
 if (VAR_17 == -1) {
  FUNC_14("socket");
  FUNC_6(1);
 }

 FUNC_13(VAR_17);

 VAR_24.sll_ifindex = FUNC_10("lo");
 VAR_18 = FUNC_2(VAR_17, (struct sockaddr *) &VAR_24, sizeof(VAR_24));
 if (VAR_18 == -1) {
  FUNC_14("bind");
  FUNC_6(1);
 }

 FUNC_12(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.fd = VAR_14;
 VAR_16.events = VAR_6 | VAR_5;
 VAR_16.revents = 0;

 VAR_13 = VAR_2;
 FUNC_5(VAR_21, &VAR_19);

 while (VAR_13 > 0) {
  void *VAR_26 = FUNC_8(VAR_15, VAR_22);

  while (FUNC_0(VAR_26, VAR_15->version) &&
         VAR_13 > 0) {
   VAR_20.raw = VAR_26;

   switch (VAR_15->version) {
   case 130:
    VAR_20.v1->tp_h.tp_snaplen = VAR_19;
    VAR_20.v1->tp_h.tp_len = VAR_19;

    FUNC_11(*((uint8_t *) VAR_20.raw + VAR_10 -
           sizeof(struct sockaddr_ll)), VAR_21,
           VAR_19);
    VAR_12 += VAR_20.v1->tp_h.tp_snaplen;
    break;

   case 129:
    VAR_20.v2->tp_h.tp_snaplen = VAR_19;
    VAR_20.v2->tp_h.tp_len = VAR_19;

    FUNC_11(*((uint8_t *) VAR_20.raw + VAR_8 -
           sizeof(struct sockaddr_ll)), VAR_21,
           VAR_19);
    VAR_12 += VAR_20.v2->tp_h.tp_snaplen;
    break;
   case 128: {
    struct tpacket3_hdr *VAR_27 = VAR_26;

    VAR_27->tp_snaplen = VAR_19;
    VAR_27->tp_len = VAR_19;
    VAR_27->tp_next_offset = 0;

    FUNC_11(*((uint8_t *)VAR_27 + VAR_9 -
           sizeof(struct sockaddr_ll)), VAR_21,
           VAR_19);
    VAR_12 += VAR_27->tp_snaplen;
    break;
   }
   }

   FUNC_19();
   VAR_13--;

   FUNC_1(VAR_26, VAR_15->version);

   VAR_22 = (VAR_22 + 1) % VAR_25;
  }

  FUNC_15(&VAR_16, 1, 1);
 }

 FUNC_3(VAR_13 != 0);

 VAR_18 = FUNC_17(VAR_14, ((void*)0), 0, 0, ((void*)0), 0);
 if (VAR_18 == -1) {
  FUNC_14("sendto");
  FUNC_6(1);
 }

 while ((VAR_18 = FUNC_16(VAR_17, VAR_21, sizeof(VAR_21),
          0, ((void*)0), ((void*)0))) > 0 &&
        VAR_13 < VAR_2) {
  VAR_23 += VAR_18;
  FUNC_20(VAR_21, VAR_18);

  FUNC_19();
  VAR_13++;
 }

 FUNC_4(VAR_17);

 if (VAR_13 != VAR_2) {
  FUNC_7(VAR_11, "walk_v%d_rx: received %u out of %u pkts\n",
   VAR_15->version, VAR_13, VAR_2);
  FUNC_6(1);
 }

 FUNC_7(VAR_11, " %u pkts (%u bytes)", VAR_2, VAR_23);
}
