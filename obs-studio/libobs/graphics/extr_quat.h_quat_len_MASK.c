
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int dummy; } ;


 float FUNC_0 (struct quat const*,struct quat const*) ;
 float FUNC_1 (float) ;

__attribute__((used)) static inline float FUNC_2(const struct quat *VAR_0)
{
 float VAR_1 = FUNC_0(VAR_0, VAR_0);
 return (VAR_1 > 0.0f) ? FUNC_1(VAR_1) : 0.0f;
}
