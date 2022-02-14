
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union frame_map {scalar_t__ raw; TYPE_5__* v2; TYPE_3__* v1; } ;
typedef int uint8_t ;
struct ring {scalar_t__ type; int version; unsigned int rd_num; TYPE_1__* rd; } ;
struct pollfd {int fd; int events; scalar_t__ revents; } ;
typedef int pfd ;
struct TYPE_9__ {int tp_snaplen; int tp_mac; } ;
struct TYPE_10__ {TYPE_4__ tp_h; } ;
struct TYPE_7__ {int tp_snaplen; int tp_mac; } ;
struct TYPE_8__ {TYPE_2__ tp_h; } ;
struct TYPE_6__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int,...) ;
 int FUNC_5 (struct pollfd*,int ,int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (struct pollfd*,int,int) ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_12(int VAR_8, struct ring *VAR_9)
{
 struct pollfd VAR_10;
 int VAR_11[2];
 union frame_map VAR_12;
 unsigned int VAR_13 = 0;

 FUNC_2(VAR_9->type != VAR_1);

 FUNC_7(VAR_11, VAR_4);

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.fd = VAR_8;
 VAR_10.events = VAR_3 | VAR_2;
 VAR_10.revents = 0;

 FUNC_8(VAR_11, VAR_0);

 while (VAR_7 < VAR_0 * 2) {
  while (FUNC_0(VAR_9->rd[VAR_13].iov_base,
            VAR_9->version)) {
   VAR_12.raw = VAR_9->rd[VAR_13].iov_base;

   switch (VAR_9->version) {
   case 129:
    FUNC_11((uint8_t *) VAR_12.raw + VAR_12.v1->tp_h.tp_mac,
          VAR_12.v1->tp_h.tp_snaplen);
    VAR_6 += VAR_12.v1->tp_h.tp_snaplen;
    break;

   case 128:
    FUNC_11((uint8_t *) VAR_12.raw + VAR_12.v2->tp_h.tp_mac,
          VAR_12.v2->tp_h.tp_snaplen);
    VAR_6 += VAR_12.v2->tp_h.tp_snaplen;
    break;
   }

   FUNC_10();
   VAR_7++;

   FUNC_1(VAR_12.raw, VAR_9->version);

   VAR_13 = (VAR_13 + 1) % VAR_9->rd_num;
  }

  FUNC_9(&VAR_10, 1, 1);
 }

 FUNC_6(VAR_11);

 if (VAR_7 != 2 * VAR_0) {
  FUNC_4(VAR_5, "walk_v%d_rx: received %u out of %u pkts\n",
   VAR_9->version, VAR_7, VAR_0);
  FUNC_3(1);
 }

 FUNC_4(VAR_5, " %u pkts (%u bytes)", VAR_0, VAR_6 >> 1);
}
