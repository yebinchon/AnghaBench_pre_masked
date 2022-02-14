
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


typedef int ut64 ;
struct TYPE_11__ {scalar_t__ cmd; } ;
struct TYPE_12__ {TYPE_1__ hdr; } ;
struct TYPE_13__ {TYPE_2__ pkt; } ;
struct TYPE_14__ {scalar_t__ size; int addr; } ;
struct TYPE_15__ {TYPE_4__ brk; } ;
struct TYPE_16__ {TYPE_5__ pkt; } ;
struct TYPE_17__ {TYPE_3__ recv; TYPE_6__ tran; } ;
typedef TYPE_7__ libqnxr_t ;
typedef enum Breakpoint { ____Placeholder_Breakpoint } Breakpoint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_7__*,int,int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ,int ) ;

int FUNC_3 (libqnxr_t *VAR_4, ut64 VAR_5, const char *VAR_6, enum Breakpoint VAR_7) {
 if (!VAR_4) return -1;

 FUNC_2 (VAR_4, VAR_2, VAR_0, VAR_3);
 VAR_4->tran.pkt.brk.addr = FUNC_0 (&VAR_5, 4);
 VAR_4->tran.pkt.brk.size = 0;
 FUNC_1 (VAR_4, sizeof (VAR_4->tran.pkt.brk), 0);

 if (VAR_4->recv.pkt.hdr.cmd == VAR_1)
  return -1;
 return 0;
}
