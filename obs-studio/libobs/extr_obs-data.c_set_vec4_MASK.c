
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vec4 {int w; int z; int y; int x; } ;
typedef int (* set_obj_t ) (int *,char const*,int *) ;
typedef int obs_data_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;

__attribute__((used)) static inline void FUNC_3(obs_data_t *VAR_0, const char *VAR_1,
       const struct vec4 *VAR_2, set_obj_t VAR_3)
{
 obs_data_t *VAR_4 = FUNC_0();
 FUNC_2(VAR_4, "x", VAR_2->x);
 FUNC_2(VAR_4, "y", VAR_2->y);
 FUNC_2(VAR_4, "z", VAR_2->z);
 FUNC_2(VAR_4, "w", VAR_2->w);
 VAR_3(VAR_0, VAR_1, VAR_4);
 FUNC_1(VAR_4);
}
