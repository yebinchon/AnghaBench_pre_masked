
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static inline int FUNC_6(struct net_device *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;

 if (FUNC_1()) {
  FUNC_5("bpf: recursion limit reached on datapath, buggy bpf program?\n");
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 VAR_2->dev = VAR_1;

 FUNC_3();
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2();

 return VAR_3;
}
