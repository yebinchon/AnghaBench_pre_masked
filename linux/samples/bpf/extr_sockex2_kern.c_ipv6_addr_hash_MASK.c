
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int dummy; } ;
typedef int __u64 ;
typedef int __u32 ;


 int FUNC_0 (struct __sk_buff*,int) ;

__attribute__((used)) static inline __u32 FUNC_1(struct __sk_buff *VAR_0, __u64 VAR_1)
{
 __u64 VAR_2 = FUNC_0(VAR_0, VAR_1);
 __u64 VAR_3 = FUNC_0(VAR_0, VAR_1 + 4);
 __u64 VAR_4 = FUNC_0(VAR_0, VAR_1 + 8);
 __u64 VAR_5 = FUNC_0(VAR_0, VAR_1 + 12);

 return (__u32)(VAR_2 ^ VAR_3 ^ VAR_4 ^ VAR_5);
}
