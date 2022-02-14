
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int rst; } ;
struct sk_buff {int dummy; } ;
typedef int _tcph ;


 struct tcphdr* FUNC_0 (struct sk_buff const*,int,int,struct tcphdr*) ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_0, int VAR_1)
{
 struct tcphdr VAR_2, *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, sizeof(VAR_2), &VAR_2);
 if (VAR_3 == ((void*)0))
  return 0;
 return VAR_3->rst;
}
