
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int* data; int len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct sk_buff *VAR_2)
{
 u16 VAR_3 = (VAR_2->data[12] << 8) | VAR_2->data[13];

 return VAR_3 == VAR_0 &&
        VAR_2->len > 14 &&
        VAR_2->data[14] == VAR_1;
}
