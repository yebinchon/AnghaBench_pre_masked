
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plane {int dist; int dir; } ;


 scalar_t__ FUNC_0 (int ,int ,float) ;
 scalar_t__ FUNC_1 (int *,int *,float) ;

__attribute__((used)) static inline bool FUNC_2(const struct plane *VAR_0, const struct plane *VAR_1,
          float VAR_2)
{
 return FUNC_1(&VAR_0->dir, &VAR_1->dir, VAR_2) &&
        FUNC_0(VAR_0->dist, VAR_1->dist, VAR_2);
}
