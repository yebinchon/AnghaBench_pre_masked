
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct rpc_xprt* private; } ;
struct rpc_xprt {int state; int * address_strings; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_3, void *VAR_4)
{
 struct rpc_xprt *VAR_5 = VAR_3->private;

 FUNC_0(VAR_3, "netid: %s\n", VAR_5->address_strings[VAR_1]);
 FUNC_0(VAR_3, "addr:  %s\n", VAR_5->address_strings[VAR_0]);
 FUNC_0(VAR_3, "port:  %s\n", VAR_5->address_strings[VAR_2]);
 FUNC_0(VAR_3, "state: 0x%lx\n", VAR_5->state);
 return 0;
}
