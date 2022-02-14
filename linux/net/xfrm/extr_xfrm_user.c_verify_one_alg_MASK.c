
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo {char* alg_name; } ;
struct nlattr {int dummy; } ;
typedef enum xfrm_attr_type_t { ____Placeholder_xfrm_attr_type_t } xfrm_attr_type_t ;


 int VAR_0 ;



 struct xfrm_algo* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 scalar_t__ FUNC_2 (struct xfrm_algo*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_1, enum xfrm_attr_type_t VAR_2)
{
 struct nlattr *VAR_3 = VAR_1[VAR_2];
 struct xfrm_algo *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (FUNC_1(VAR_3) < (int)FUNC_2(VAR_4))
  return -VAR_0;

 switch (VAR_2) {
 case 130:
 case 128:
 case 129:
  break;

 default:
  return -VAR_0;
 }

 VAR_4->alg_name[sizeof(VAR_4->alg_name) - 1] = '\0';
 return 0;
}
