
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ dccpd_opt_len; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned char*,void const*,unsigned char const) ;
 unsigned char* FUNC_2 (struct sk_buff*,unsigned char const) ;

int FUNC_3(struct sk_buff *VAR_1, const unsigned char VAR_2,
         const void *VAR_3, const unsigned char VAR_4)
{
 unsigned char *VAR_5;

 if (FUNC_0(VAR_1)->dccpd_opt_len + VAR_4 + 2 > VAR_0)
  return -1;

 FUNC_0(VAR_1)->dccpd_opt_len += VAR_4 + 2;

 VAR_5 = FUNC_2(VAR_1, VAR_4 + 2);
 *VAR_5++ = VAR_2;
 *VAR_5++ = VAR_4 + 2;

 FUNC_1(VAR_5, VAR_3, VAR_4);
 return 0;
}
