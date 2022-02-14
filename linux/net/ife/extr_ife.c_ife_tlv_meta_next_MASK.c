
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct meta_tlvhdr {int len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void *FUNC_2(void *VAR_0)
{
 struct meta_tlvhdr *VAR_1 = (struct meta_tlvhdr *) VAR_0;
 u16 VAR_2 = FUNC_1(VAR_1->len);

 VAR_2 = FUNC_0(VAR_2);

 return VAR_0 + VAR_2;
}
