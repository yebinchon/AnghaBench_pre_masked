
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
struct TYPE_16__ {int status; } ;
struct TYPE_15__ {int cmd; } ;
struct TYPE_17__ {TYPE_5__ okstatus; TYPE_4__ hdr; } ;
struct TYPE_18__ {TYPE_6__ pkt; } ;
struct TYPE_12__ {int data; int addr; } ;
struct TYPE_13__ {TYPE_1__ memwr; } ;
struct TYPE_14__ {TYPE_2__ pkt; } ;
struct TYPE_19__ {TYPE_7__ recv; TYPE_3__ tran; } ;
typedef TYPE_8__ libqnxr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (TYPE_8__*,int,int ) ;
 int FUNC_4 (TYPE_8__*,int ,int ,int ) ;
 int FUNC_5 (int ,int const*) ;

int FUNC_6 (libqnxr_t *VAR_3, ut64 VAR_4, const ut8 *VAR_5, ut64 VAR_6) {
 ut64 VAR_7;

 if (!VAR_3 || !VAR_5) return -1;

 FUNC_4 (VAR_3, VAR_0, 0, VAR_2);
 VAR_7 = VAR_4;
 VAR_3->tran.pkt.memwr.addr = FUNC_1 (&VAR_7, 8);
 FUNC_2 (VAR_3->tran.pkt.memwr.data, VAR_5, VAR_6);
 FUNC_3 (VAR_3, FUNC_5 (VAR_1, VAR_5) + VAR_6, 0);

 switch (VAR_3->recv.pkt.hdr.cmd) {
 case 129:
  return VAR_6;
 case 128:
  return FUNC_0 (&VAR_3->recv.pkt.okstatus.status, 4);
 }

 return 0;
}
