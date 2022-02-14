
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int* data; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2)
{
 u16 VAR_3 = (VAR_2->data[VAR_2->len - 2] << 8) |
   VAR_2->data[VAR_2->len - 1];
 int VAR_4;

 VAR_4 = (FUNC_0(VAR_0, VAR_2->data, VAR_2->len - VAR_1)
   == VAR_3);

 FUNC_1(VAR_2, VAR_2->len - VAR_1);

 return VAR_4;
}
