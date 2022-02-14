
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plane {float dist; int dir; } ;


 int FUNC_0 (float,float,float) ;
 float FUNC_1 (int *,int *) ;

__attribute__((used)) static inline bool FUNC_2(const struct plane *VAR_0,
      const struct plane *VAR_1, float VAR_2)
{
 float VAR_3 = FUNC_1(&VAR_0->dir, &VAR_1->dir);

 if (FUNC_0(VAR_3, 1.0f, VAR_2))
  return FUNC_0(VAR_0->dist, VAR_1->dist, VAR_2);
 else if (FUNC_0(VAR_3, -1.0f, VAR_2))
  return FUNC_0(-VAR_0->dist, VAR_1->dist, VAR_2);

 return 0;
}
