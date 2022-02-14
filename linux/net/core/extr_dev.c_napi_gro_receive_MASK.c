
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
typedef int gro_result_t ;


 int FUNC_0 (struct napi_struct*,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct napi_struct*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;

gro_result_t FUNC_6(struct napi_struct *VAR_0, struct sk_buff *VAR_1)
{
 gro_result_t VAR_2;

 FUNC_3(VAR_1, VAR_0);
 FUNC_4(VAR_1);

 FUNC_2(VAR_1);

 VAR_2 = FUNC_1(FUNC_0(VAR_0, VAR_1), VAR_1);
 FUNC_5(VAR_2);

 return VAR_2;
}
