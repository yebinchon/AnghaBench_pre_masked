
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct j1939_sk_buff_cb {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline
struct j1939_sk_buff_cb *FUNC_1(const struct sk_buff *VAR_0)
{
 FUNC_0(sizeof(struct j1939_sk_buff_cb) > sizeof(VAR_0->cb));

 return (struct j1939_sk_buff_cb *)VAR_0->cb;
}
