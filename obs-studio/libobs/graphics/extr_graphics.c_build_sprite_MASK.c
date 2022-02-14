
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vec2 {int dummy; } ;
struct gs_vb_data {scalar_t__ points; TYPE_1__* tvarray; } ;
struct TYPE_2__ {struct vec2* array; } ;


 int FUNC_0 (struct vec2*,float,float) ;
 int FUNC_1 (scalar_t__,float,float,float) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gs_vb_data *VAR_0, float VAR_1, float VAR_2,
    float VAR_3, float VAR_4, float VAR_5, float VAR_6)
{
 struct vec2 *VAR_7 = VAR_0->tvarray[0].array;

 FUNC_2(VAR_0->points);
 FUNC_1(VAR_0->points + 1, VAR_1, 0.0f, 0.0f);
 FUNC_1(VAR_0->points + 2, 0.0f, VAR_2, 0.0f);
 FUNC_1(VAR_0->points + 3, VAR_1, VAR_2, 0.0f);
 FUNC_0(VAR_7, VAR_3, VAR_5);
 FUNC_0(VAR_7 + 1, VAR_4, VAR_5);
 FUNC_0(VAR_7 + 2, VAR_3, VAR_6);
 FUNC_0(VAR_7 + 3, VAR_4, VAR_6);
}
