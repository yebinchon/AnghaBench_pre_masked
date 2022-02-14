
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int proc_net_rpc; } ;
struct proc_dir_entry {int dummy; } ;
struct net {int dummy; } ;
struct file_operations {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 struct sunrpc_net* FUNC_1 (struct net*,int ) ;
 struct proc_dir_entry* FUNC_2 (char const*,int ,int ,struct file_operations const*,void*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct proc_dir_entry *
FUNC_3(struct net *VAR_1, const char *VAR_2, void *VAR_3,
     const struct file_operations *VAR_4)
{
 struct sunrpc_net *VAR_5;

 FUNC_0("RPC:       registering /proc/net/rpc/%s\n", VAR_2);
 VAR_5 = FUNC_1(VAR_1, VAR_0);
 return FUNC_2(VAR_2, 0, VAR_5->proc_net_rpc, VAR_4, VAR_3);
}
