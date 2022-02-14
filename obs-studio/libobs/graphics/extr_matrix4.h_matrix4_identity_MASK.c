
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float x; float y; float z; float w; } ;
struct matrix4 {TYPE_1__ t; TYPE_1__ z; TYPE_1__ y; TYPE_1__ x; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(struct matrix4 *VAR_0)
{
 FUNC_0(&VAR_0->x);
 FUNC_0(&VAR_0->y);
 FUNC_0(&VAR_0->z);
 FUNC_0(&VAR_0->t);
 VAR_0->x.x = 1.0f;
 VAR_0->y.y = 1.0f;
 VAR_0->z.z = 1.0f;
 VAR_0->t.w = 1.0f;
}
