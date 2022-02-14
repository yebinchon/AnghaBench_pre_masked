
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct l2cap_conf_opt {int len; int type; scalar_t__ val; } ;


 int FUNC_0 (char*,int,int,unsigned long) ;
 int VAR_0 ;
 unsigned long FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(void **VAR_1, int *VAR_2, int *VAR_3,
         unsigned long *VAR_4)
{
 struct l2cap_conf_opt *VAR_5 = *VAR_1;
 int VAR_6;

 VAR_6 = VAR_0 + VAR_5->len;
 *VAR_1 += VAR_6;

 *VAR_2 = VAR_5->type;
 *VAR_3 = VAR_5->len;

 switch (VAR_5->len) {
 case 1:
  *VAR_4 = *((u8 *) VAR_5->val);
  break;

 case 2:
  *VAR_4 = FUNC_1(VAR_5->val);
  break;

 case 4:
  *VAR_4 = FUNC_2(VAR_5->val);
  break;

 default:
  *VAR_4 = (unsigned long) VAR_5->val;
  break;
 }

 FUNC_0("type 0x%2.2x len %u val 0x%lx", *VAR_2, VAR_5->len, *VAR_4);
 return VAR_6;
}
