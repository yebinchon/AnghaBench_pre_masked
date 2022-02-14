
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct cbq_class {TYPE_1__* R_tab; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,int *) ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct cbq_class *VAR_2)
{
 unsigned char *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_1, VAR_0, sizeof(VAR_2->R_tab->rate), &VAR_2->R_tab->rate))
  goto nla_put_failure;
 return VAR_1->len;

nla_put_failure:
 FUNC_1(VAR_1, VAR_3);
 return -1;
}
