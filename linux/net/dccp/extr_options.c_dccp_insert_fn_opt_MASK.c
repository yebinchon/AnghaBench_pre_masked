
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int*,int*,int) ;
 int* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct sk_buff *VAR_2, u8 VAR_3, u8 VAR_4,
         u8 *VAR_5, u8 VAR_6, bool VAR_7)
{
 u8 VAR_8, *VAR_9;


 if (VAR_6 > (VAR_1 - 2)) {
  FUNC_1("length %u for feature %u too large\n", VAR_6, VAR_4);
  return -1;
 }

 if (FUNC_4(VAR_5 == ((void*)0) || VAR_6 == 0))
  VAR_6 = VAR_7 = 0;
 VAR_8 = 3 + VAR_7 + VAR_6;

 if (FUNC_0(VAR_2)->dccpd_opt_len + VAR_8 > VAR_0) {
  FUNC_1("packet too small for feature %d option!\n", VAR_4);
  return -1;
 }
 FUNC_0(VAR_2)->dccpd_opt_len += VAR_8;

 VAR_9 = FUNC_3(VAR_2, VAR_8);
 *VAR_9++ = VAR_3;
 *VAR_9++ = VAR_8;
 *VAR_9++ = VAR_4;

 if (VAR_7)
  *VAR_9++ = *VAR_5;
 if (VAR_6)
  FUNC_2(VAR_9, VAR_5, VAR_6);
 return 0;
}
