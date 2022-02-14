
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ msgh_id; int msgh_local_port; scalar_t__ msgh_size; int msgh_remote_port; int msgh_bits; } ;
struct TYPE_5__ {int RetCode; int NDR; TYPE_2__ Head; } ;
typedef TYPE_1__ mig_reply_error_t ;
typedef scalar_t__ mach_msg_size_t ;
typedef TYPE_2__ mach_msg_header_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(mig_reply_error_t *VAR_2, mach_msg_header_t *VAR_3, int VAR_4) {
 mach_msg_header_t *VAR_5 = &VAR_2->Head;
 VAR_5->msgh_bits = FUNC_0 (FUNC_1(VAR_3->msgh_bits), 0);
 VAR_5->msgh_remote_port = VAR_3->msgh_remote_port;
 VAR_5->msgh_size = (mach_msg_size_t) sizeof (mig_reply_error_t);
 VAR_5->msgh_local_port = VAR_0;
 VAR_5->msgh_id = VAR_3->msgh_id + 100;
 VAR_2->NDR = VAR_1;
 VAR_2->RetCode = VAR_4;
}
