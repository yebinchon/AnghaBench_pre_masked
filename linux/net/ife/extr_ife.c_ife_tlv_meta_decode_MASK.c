
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct meta_tlvhdr {int type; int len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void *FUNC_3(void *VAR_1, const void *VAR_2, u16 *VAR_3,
     u16 *VAR_4, u16 *VAR_5)
{
 struct meta_tlvhdr *VAR_6;

 if (!FUNC_0(VAR_1, VAR_2))
  return ((void*)0);

 VAR_6 = (struct meta_tlvhdr *)VAR_1;
 *VAR_4 = FUNC_2(VAR_6->len) - VAR_0;
 *VAR_3 = FUNC_2(VAR_6->type);

 if (VAR_5)
  *VAR_5 = FUNC_1(*VAR_4);

 return VAR_1 + sizeof(struct meta_tlvhdr);
}
