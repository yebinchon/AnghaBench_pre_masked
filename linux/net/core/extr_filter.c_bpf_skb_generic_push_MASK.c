
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, u32 VAR_1, u32 VAR_2)
{



 FUNC_2(VAR_0, VAR_2);
 FUNC_0(VAR_0->data, VAR_0->data + VAR_2, VAR_1);
 FUNC_1(VAR_0->data + VAR_1, 0, VAR_2);






 return 0;
}
