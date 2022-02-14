
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int m; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (float) ;
 int FUNC_2 () ;
 float FUNC_3 (struct quat const*,struct quat const*) ;
 float FUNC_4 (float) ;

__attribute__((used)) static inline void FUNC_5(struct quat *VAR_0, const struct quat *VAR_1)
{
 float VAR_2 = FUNC_3(VAR_1, VAR_1);
 VAR_0->m = (VAR_2 > 0.0f)
    ? FUNC_0(VAR_1->m, FUNC_1(1.0f / FUNC_4(VAR_2)))
    : FUNC_2();
}
