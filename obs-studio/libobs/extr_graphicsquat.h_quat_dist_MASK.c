
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int dummy; } ;


 float FUNC_0 (struct quat*,struct quat*) ;
 int FUNC_1 (struct quat*,struct quat const*,struct quat const*) ;
 float FUNC_2 (float) ;

__attribute__((used)) static inline float FUNC_3(const struct quat *VAR_0, const struct quat *VAR_1)
{
 struct quat VAR_2;
 float VAR_3;

 FUNC_1(&VAR_2, VAR_0, VAR_1);
 VAR_3 = FUNC_0(&VAR_2, &VAR_2);
 return (VAR_3 > 0.0f) ? FUNC_2(VAR_3) : 0.0f;
}
