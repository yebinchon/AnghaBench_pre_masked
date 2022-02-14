
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*) ;
 int FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;



 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
