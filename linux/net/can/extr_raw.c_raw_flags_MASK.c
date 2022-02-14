
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_can {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int *FUNC_1(struct sk_buff *VAR_0)
{
 FUNC_0(sizeof(struct sockaddr_can) +
          sizeof(unsigned int));


 return (unsigned int *)(&((struct sockaddr_can *)VAR_0->cb)[1]);
}
