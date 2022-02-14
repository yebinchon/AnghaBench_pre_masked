
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct selinux_state {TYPE_1__* ss; } ;
struct av_decision {int auditdeny; scalar_t__ flags; int seqno; scalar_t__ auditallow; scalar_t__ allowed; } ;
struct TYPE_2__ {int latest_granting; } ;



__attribute__((used)) static void FUNC_0(struct selinux_state *VAR_0, struct av_decision *VAR_1)
{
 VAR_1->allowed = 0;
 VAR_1->auditallow = 0;
 VAR_1->auditdeny = 0xffffffff;
 VAR_1->seqno = VAR_0->ss->latest_granting;
 VAR_1->flags = 0;
}
