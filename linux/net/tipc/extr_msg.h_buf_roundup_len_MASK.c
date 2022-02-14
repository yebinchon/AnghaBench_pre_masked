
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;



__attribute__((used)) static inline int FUNC_0(struct sk_buff *VAR_0)
{
 return (VAR_0->len / 1024 + 1) * 1024;
}
