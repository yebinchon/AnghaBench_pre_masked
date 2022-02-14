
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_16__ {int data; } ;
struct TYPE_15__ {scalar_t__ cmd; } ;
struct TYPE_17__ {TYPE_5__ okdata; TYPE_4__ hdr; } ;
struct TYPE_18__ {TYPE_6__ pkt; } ;
struct TYPE_12__ {int size; int addr; } ;
struct TYPE_13__ {TYPE_1__ memrd; } ;
struct TYPE_14__ {TYPE_2__ pkt; } ;
struct TYPE_19__ {TYPE_7__ recv; TYPE_3__ tran; } ;
typedef TYPE_8__ libqnxr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_8__*,int,int ) ;
 int FUNC_4 (TYPE_8__*,int ,int ,int ) ;

int FUNC_5 (libqnxr_t *VAR_4, ut64 VAR_5, ut8 *VAR_6, ut64 VAR_7) {
 int VAR_8, VAR_9, VAR_10;
 ut64 VAR_11;

 if (!VAR_4 || !VAR_6) return -1;

 VAR_9 = VAR_8 = VAR_10 = 0;

 do {
  FUNC_4 (VAR_4, VAR_2, 0, VAR_3);
  VAR_11 = VAR_5 + VAR_9;
  VAR_4->tran.pkt.memrd.addr = FUNC_1 (&VAR_11, 8);
  VAR_10 = ((VAR_7 - VAR_9) > VAR_0) ?
      VAR_0 :
      (VAR_7 - VAR_9);

  VAR_4->tran.pkt.memrd.size = FUNC_0 (&VAR_10, 2);
  VAR_8 = FUNC_3 (VAR_4, sizeof (VAR_4->tran.pkt.memrd), 0) -
     sizeof (VAR_4->recv.pkt.hdr);
  if (VAR_8 <= 0) break;
  if (VAR_4->recv.pkt.hdr.cmd == VAR_1) {
   FUNC_2 (VAR_6 + VAR_9, VAR_4->recv.pkt.okdata.data, VAR_8);
   VAR_9 += VAR_8;
  } else
   break;
 } while (VAR_9 != VAR_7);

 return VAR_9;
}
