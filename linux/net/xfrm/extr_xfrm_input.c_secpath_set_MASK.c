
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sec_path {scalar_t__ len; scalar_t__ olen; int ovec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct sec_path* FUNC_1 (struct sk_buff*,int ) ;
 struct sec_path* FUNC_2 (struct sk_buff*,int ) ;

struct sec_path *FUNC_3(struct sk_buff *VAR_1)
{
 struct sec_path *VAR_2, *VAR_3 = FUNC_2(VAR_1, VAR_0);

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 if (VAR_3)
  return VAR_2;


 FUNC_0(VAR_2->ovec, 0, sizeof(VAR_2->ovec));
 VAR_2->olen = 0;
 VAR_2->len = 0;

 return VAR_2;
}
