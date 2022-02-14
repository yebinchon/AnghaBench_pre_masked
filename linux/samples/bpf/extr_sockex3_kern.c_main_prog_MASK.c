
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int * cb; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct __sk_buff*,int) ;
 int FUNC_1 (struct __sk_buff*,int ) ;

int FUNC_2(struct __sk_buff *VAR_1)
{
 __u32 VAR_2 = VAR_0;
 __u32 VAR_3 = FUNC_0(VAR_1, 12);

 VAR_1->cb[0] = VAR_2;
 FUNC_1(VAR_1, VAR_3);
 return 0;
}
