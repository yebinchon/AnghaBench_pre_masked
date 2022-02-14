
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int dummy; } ;
typedef int new_port ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct __sk_buff*,int ,int ,int ,int) ;
 int FUNC_1 (struct __sk_buff*,int ,int *,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct __sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct __sk_buff *VAR_2, __u16 VAR_3)
{
 __u16 VAR_4 = FUNC_2(FUNC_3(VAR_2, VAR_1));

 FUNC_0(VAR_2, VAR_0, VAR_4, VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_2, VAR_1, &VAR_3, sizeof(VAR_3), 0);
}
