
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int dummy; } ;
typedef int new_ip ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct __sk_buff*,int ,int ,int ,int) ;
 int FUNC_2 (struct __sk_buff*,int ,int ,int ,int) ;
 int FUNC_3 (struct __sk_buff*,int ,int *,int,int ) ;
 int FUNC_4 (struct __sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct __sk_buff *VAR_4, __u32 VAR_5)
{
 __u32 VAR_6 = FUNC_0(FUNC_4(VAR_4, VAR_1));

 FUNC_2(VAR_4, VAR_3, VAR_6, VAR_5, VAR_2 | sizeof(VAR_5));
 FUNC_1(VAR_4, VAR_0, VAR_6, VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_4, VAR_1, &VAR_5, sizeof(VAR_5), 0);
}
