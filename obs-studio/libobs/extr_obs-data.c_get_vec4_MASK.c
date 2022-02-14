
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {float x; float y; float z; float w; } ;
typedef int obs_data_t ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(obs_data_t *VAR_0, struct vec4 *VAR_1)
{
 if (!VAR_0)
  return;

 VAR_1->x = (float)FUNC_0(VAR_0, "x");
 VAR_1->y = (float)FUNC_0(VAR_0, "y");
 VAR_1->z = (float)FUNC_0(VAR_0, "z");
 VAR_1->w = (float)FUNC_0(VAR_0, "w");
 FUNC_1(VAR_0);
}
