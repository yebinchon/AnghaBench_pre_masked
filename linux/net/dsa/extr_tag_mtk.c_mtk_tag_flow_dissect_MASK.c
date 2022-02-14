
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
typedef int __be16 ;



__attribute__((used)) static int FUNC_0(const struct sk_buff *VAR_0, __be16 *VAR_1,
    int *VAR_2)
{
 *VAR_2 = 4;
 *VAR_1 = ((__be16 *)VAR_0->data)[1];

 return 0;
}
