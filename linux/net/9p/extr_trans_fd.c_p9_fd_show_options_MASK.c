
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {scalar_t__ rfd; scalar_t__ wfd; } ;
struct TYPE_6__ {scalar_t__ port; } ;
struct TYPE_5__ {TYPE_1__ fd; TYPE_3__ tcp; } ;
struct p9_client {TYPE_2__ trans_opts; int * trans_mod; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, struct p9_client *VAR_4)
{
 if (VAR_4->trans_mod == &VAR_2) {
  if (VAR_4->trans_opts.tcp.port != VAR_0)
   FUNC_0(VAR_3, ",port=%u", VAR_4->trans_opts.tcp.port);
 } else if (VAR_4->trans_mod == &VAR_1) {
  if (VAR_4->trans_opts.fd.rfd != ~0)
   FUNC_0(VAR_3, ",rfd=%u", VAR_4->trans_opts.fd.rfd);
  if (VAR_4->trans_opts.fd.wfd != ~0)
   FUNC_0(VAR_3, ",wfd=%u", VAR_4->trans_opts.fd.wfd);
 }
 return 0;
}
