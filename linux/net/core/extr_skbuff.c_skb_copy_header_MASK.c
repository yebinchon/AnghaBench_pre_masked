
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct sk_buff const sk_buff ;
struct TYPE_2__ {int gso_type; int gso_segs; int gso_size; } ;


 int FUNC_0 (struct sk_buff const*,struct sk_buff const*) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;

void FUNC_2(struct sk_buff *VAR_0, const struct sk_buff *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0)->gso_size = FUNC_1(VAR_1)->gso_size;
 FUNC_1(VAR_0)->gso_segs = FUNC_1(VAR_1)->gso_segs;
 FUNC_1(VAR_0)->gso_type = FUNC_1(VAR_1)->gso_type;
}
