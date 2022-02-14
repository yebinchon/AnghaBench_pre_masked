
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quat {int z; int y; int x; } ;



__attribute__((used)) static inline void FUNC_0(struct quat *VAR_0, const struct quat *VAR_1)
{
 VAR_0->x = -VAR_1->x;
 VAR_0->y = -VAR_1->y;
 VAR_0->z = -VAR_1->z;
}
