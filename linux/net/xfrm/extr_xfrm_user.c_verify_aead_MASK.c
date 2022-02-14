
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo_aead {char* alg_name; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct xfrm_algo_aead*) ;
 struct xfrm_algo_aead* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct nlattr **VAR_2)
{
 struct nlattr *VAR_3 = VAR_2[VAR_1];
 struct xfrm_algo_aead *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_3);
 if (FUNC_2(VAR_3) < (int)FUNC_0(VAR_4))
  return -VAR_0;

 VAR_4->alg_name[sizeof(VAR_4->alg_name) - 1] = '\0';
 return 0;
}
