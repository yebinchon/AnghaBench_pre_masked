
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct __sk_buff*) ;

int FUNC_2(struct __sk_buff *VAR_2)
{
 if (VAR_2->protocol == FUNC_0(VAR_0))
  return FUNC_1(VAR_2);

 return VAR_1;
}
