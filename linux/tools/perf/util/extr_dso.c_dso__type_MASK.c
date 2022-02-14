
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct dso {int dummy; } ;
typedef enum dso_type { ____Placeholder_dso_type } dso_type ;


 int VAR_0 ;
 int FUNC_0 (struct dso*,struct machine*) ;
 int FUNC_1 (struct dso*) ;
 int FUNC_2 (int) ;

enum dso_type FUNC_3(struct dso *VAR_1, struct machine *VAR_2)
{
 int VAR_3;
 enum dso_type VAR_4 = VAR_0;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 >= 0) {
  VAR_4 = FUNC_2(VAR_3);
  FUNC_1(VAR_1);
 }

 return VAR_4;
}
