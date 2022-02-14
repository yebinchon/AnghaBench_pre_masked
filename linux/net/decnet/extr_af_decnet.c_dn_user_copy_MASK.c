
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {unsigned char* data; } ;
struct optdata_dn {int opt_data; scalar_t__ opt_status; int opt_optl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0, struct optdata_dn *VAR_1)
{
 unsigned char *VAR_2 = VAR_0->data;
 u16 VAR_3 = *VAR_2++;

 FUNC_0(VAR_3 > 16);
 VAR_1->opt_optl = FUNC_1(VAR_3);
 VAR_1->opt_status = 0;
 FUNC_2(VAR_1->opt_data, VAR_2, VAR_3);
 FUNC_3(VAR_0, VAR_3 + 1);
}
