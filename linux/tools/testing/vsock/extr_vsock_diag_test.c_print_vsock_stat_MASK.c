
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vdiag_ino; int vdiag_shutdown; int vdiag_state; int vdiag_type; int vdiag_dst_port; int vdiag_dst_cid; int vdiag_src_port; int vdiag_src_cid; } ;
struct vsock_stat {TYPE_1__ msg; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(FILE *VAR_0, struct vsock_stat *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->msg.vdiag_src_cid, VAR_1->msg.vdiag_src_port);
 FUNC_0(VAR_0, " ");
 FUNC_1(VAR_0, VAR_1->msg.vdiag_dst_cid, VAR_1->msg.vdiag_dst_port);
 FUNC_0(VAR_0, " %s %s %s %u\n",
  FUNC_4(VAR_1->msg.vdiag_type),
  FUNC_3(VAR_1->msg.vdiag_state),
  FUNC_2(VAR_1->msg.vdiag_shutdown),
  VAR_1->msg.vdiag_ino);
}
