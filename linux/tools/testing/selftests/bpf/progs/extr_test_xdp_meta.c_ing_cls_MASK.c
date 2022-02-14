
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct __sk_buff*,int *) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct __sk_buff *VAR_3)
{
 __u8 *VAR_4, *VAR_5, *VAR_6;
 __u32 VAR_7 = 0;

 VAR_5 = FUNC_0(VAR_3, VAR_5);
 VAR_6 = FUNC_0(VAR_3, VAR_6);
 VAR_4 = FUNC_0(VAR_3, VAR_4);

 if (VAR_4 + VAR_0 > VAR_6 ||
     VAR_5 + FUNC_1(VAR_0, 4) > VAR_4)
  return VAR_2;

 VAR_7 |= ((__u32 *)VAR_5)[0] ^ ((__u32 *)VAR_4)[0];
 VAR_7 |= ((__u16 *)VAR_5)[2] ^ ((__u16 *)VAR_4)[2];

 return VAR_7 ? VAR_2 : VAR_1;
}
