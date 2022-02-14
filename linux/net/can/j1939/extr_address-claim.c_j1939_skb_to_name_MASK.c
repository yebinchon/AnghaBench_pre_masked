
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
typedef int name_t ;
typedef int __le64 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline name_t FUNC_1(const struct sk_buff *VAR_0)
{
 return FUNC_0((__le64 *)VAR_0->data);
}
