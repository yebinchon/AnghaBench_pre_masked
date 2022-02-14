
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ dest; } ;
struct __sk_buff {scalar_t__ data_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct __sk_buff*) ;

__attribute__((used)) static inline int FUNC_2(struct __sk_buff *VAR_2, struct tcphdr *VAR_3)
{
 void *VAR_4 = (void *)(long)VAR_2->data_end;


 if ((void *)(VAR_3 + 1) > VAR_4)
  return VAR_1;

 if (VAR_3->dest == FUNC_0(9000))
  return FUNC_1(VAR_2);

 return VAR_0;
}
