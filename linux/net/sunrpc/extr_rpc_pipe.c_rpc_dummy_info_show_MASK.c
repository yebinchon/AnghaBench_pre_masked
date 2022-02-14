
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int nodename; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0, "RPC server: %s\n", FUNC_1()->nodename);
 FUNC_0(VAR_0, "service: foo (1) version 0\n");
 FUNC_0(VAR_0, "address: 127.0.0.1\n");
 FUNC_0(VAR_0, "protocol: tcp\n");
 FUNC_0(VAR_0, "port: 0\n");
 return 0;
}
