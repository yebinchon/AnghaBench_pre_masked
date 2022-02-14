
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_6__ {scalar_t__ channel; int mid; scalar_t__ subcmd; scalar_t__ cmd; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
struct TYPE_7__ {TYPE_3__ pkt; } ;
struct TYPE_9__ {TYPE_2__ tran; int mid; } ;
typedef TYPE_4__ libqnxr_t ;


 scalar_t__ VAR_0 ;

void FUNC_0 (libqnxr_t *VAR_1, ut32 VAR_2, ut32 VAR_3, ut32 VAR_4) {
 VAR_1->tran.pkt.hdr.cmd = VAR_2;
 VAR_1->tran.pkt.hdr.subcmd = VAR_3;
 VAR_1->tran.pkt.hdr.mid = ((VAR_4 == VAR_0) ? VAR_1->mid++ : 0);
 VAR_1->tran.pkt.hdr.channel = VAR_4;
}
