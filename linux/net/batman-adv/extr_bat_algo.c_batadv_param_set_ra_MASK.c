
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;
struct batadv_algo_ops {int dummy; } ;


 int VAR_0 ;
 struct batadv_algo_ops* FUNC_0 (char*) ;
 int FUNC_1 (char*,struct kernel_param const*) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const struct kernel_param *VAR_2)
{
 struct batadv_algo_ops *VAR_3;
 char *VAR_4 = (char *)VAR_1;
 size_t VAR_5 = FUNC_3(VAR_4);

 if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == '\n')
  VAR_4[VAR_5 - 1] = '\0';

 VAR_3 = FUNC_0(VAR_4);
 if (!VAR_3) {
  FUNC_2("Routing algorithm '%s' is not supported\n", VAR_4);
  return -VAR_0;
 }

 return FUNC_1(VAR_4, VAR_2);
}
