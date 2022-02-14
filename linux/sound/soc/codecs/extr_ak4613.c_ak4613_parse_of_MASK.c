
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct ak4613_priv {int ic; int oc; } ;
typedef int prop ;


 int FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ak4613_priv *VAR_0,
       struct device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->of_node;
 char VAR_3[32];
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  FUNC_1(VAR_3, sizeof(VAR_3), "asahi-kasei,in%d-single-end", VAR_4 + 1);
  if (!FUNC_0(VAR_2, VAR_3, ((void*)0)))
   VAR_0->ic |= 1 << VAR_4;
 }


 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  FUNC_1(VAR_3, sizeof(VAR_3), "asahi-kasei,out%d-single-end", VAR_4 + 1);
  if (!FUNC_0(VAR_2, VAR_3, ((void*)0)))
   VAR_0->oc |= 1 << VAR_4;
 }
}
