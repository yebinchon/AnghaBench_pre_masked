
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {int dummy; } ;
struct gcov_info {int dummy; } ;
typedef enum gcov_action { ____Placeholder_gcov_action } gcov_action ;




 int FUNC_0 (struct gcov_node*,struct gcov_info*) ;
 int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (struct gcov_info*) ;
 struct gcov_node* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct gcov_node*,struct gcov_info*) ;

void FUNC_8(enum gcov_action VAR_1, struct gcov_info *VAR_2)
{
 struct gcov_node *VAR_3;

 FUNC_4(&VAR_0);
 VAR_3 = FUNC_3(FUNC_2(VAR_2));
 switch (VAR_1) {
 case 129:
  if (VAR_3)
   FUNC_0(VAR_3, VAR_2);
  else
   FUNC_1(VAR_2);
  break;
 case 128:
  if (VAR_3)
   FUNC_7(VAR_3, VAR_2);
  else {
   FUNC_6("could not remove '%s' (not found)\n",
    FUNC_2(VAR_2));
  }
  break;
 }
 FUNC_5(&VAR_0);
}
