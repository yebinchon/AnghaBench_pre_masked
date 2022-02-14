
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cookie {int len; int data; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct tc_cookie*) ;
 struct tc_cookie* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*,int ) ;

__attribute__((used)) static struct tc_cookie *FUNC_4(struct nlattr **VAR_2)
{
 struct tc_cookie *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->data = FUNC_3(VAR_2[VAR_1], VAR_0);
 if (!VAR_3->data) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 VAR_3->len = FUNC_2(VAR_2[VAR_1]);

 return VAR_3;
}
