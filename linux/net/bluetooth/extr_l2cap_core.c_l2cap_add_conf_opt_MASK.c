
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct l2cap_conf_opt {size_t type; size_t len; scalar_t__ val; } ;


 int FUNC_0 (char*,size_t,size_t,unsigned long) ;
 size_t VAR_0 ;
 int FUNC_1 (scalar_t__,void*,size_t) ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void **VAR_1, u8 VAR_2, u8 VAR_3, unsigned long VAR_4, size_t VAR_5)
{
 struct l2cap_conf_opt *VAR_6 = *VAR_1;

 FUNC_0("type 0x%2.2x len %u val 0x%lx", VAR_2, VAR_3, VAR_4);

 if (VAR_5 < VAR_0 + VAR_3)
  return;

 VAR_6->type = VAR_2;
 VAR_6->len = VAR_3;

 switch (VAR_3) {
 case 1:
  *((u8 *) VAR_6->val) = VAR_4;
  break;

 case 2:
  FUNC_2(VAR_4, VAR_6->val);
  break;

 case 4:
  FUNC_3(VAR_4, VAR_6->val);
  break;

 default:
  FUNC_1(VAR_6->val, (void *) VAR_4, VAR_3);
  break;
 }

 *VAR_1 += VAR_0 + VAR_3;
}
