
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gs_vb_data {int dummy; } ;
typedef int gs_texture_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float*,float,int) ;
 int FUNC_1 (struct gs_vb_data*,float,float,float,float,float,float) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct gs_vb_data *VAR_2, gs_texture_t *VAR_3,
         float VAR_4, float VAR_5, uint32_t VAR_6)
{
 float VAR_7, VAR_8;
 float VAR_9, VAR_10;
 float VAR_11 = (float)FUNC_3(VAR_3);
 float VAR_12 = (float)FUNC_2(VAR_3);

 FUNC_0(&VAR_7, &VAR_8, VAR_11, (VAR_6 & VAR_0) != 0);
 FUNC_0(&VAR_9, &VAR_10, VAR_12, (VAR_6 & VAR_1) != 0);
 FUNC_1(VAR_2, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);
}
