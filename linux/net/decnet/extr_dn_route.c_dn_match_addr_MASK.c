
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(__le16 VAR_0, __le16 VAR_1)
{
 __u16 VAR_2 = FUNC_0(VAR_0) ^ FUNC_0(VAR_1);
 int VAR_3 = 16;
 while(VAR_2) {
  VAR_2 >>= 1;
  VAR_3--;
 }
 return VAR_3;
}
