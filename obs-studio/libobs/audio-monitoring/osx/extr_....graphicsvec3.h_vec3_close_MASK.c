
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec3 {float x; float y; float z; } ;


 int FUNC_0 (struct vec3*,struct vec3 const*,struct vec3 const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct vec3 *VAR_0, const struct vec3 *VAR_1,
         float VAR_2)
{
 struct vec3 VAR_3;
 FUNC_0(&VAR_3, VAR_0, VAR_1);
 return VAR_3.x < VAR_2 && VAR_3.y < VAR_2 && VAR_3.z < VAR_2;
}
