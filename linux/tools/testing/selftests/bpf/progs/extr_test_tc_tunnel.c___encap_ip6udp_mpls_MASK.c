
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct __sk_buff*,int ,int ) ;

int FUNC_2(struct __sk_buff *VAR_4)
{
 if (VAR_4->protocol == FUNC_0(VAR_0))
  return FUNC_1(VAR_4, VAR_2, VAR_1);
 else
  return VAR_3;
}
