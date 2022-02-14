
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {float x1; float x0; float y1; float y0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_10__ {int f; int e; } ;
typedef TYPE_2__ fz_matrix ;


 float FUNC_0 (float) ;
 TYPE_2__ FUNC_1 (int ,float) ;
 int FUNC_2 (float,float) ;
 TYPE_1__ FUNC_3 (TYPE_1__,TYPE_2__) ;

fz_matrix
FUNC_4(fz_rect VAR_0, float VAR_1, float VAR_2)
{
 float VAR_3, VAR_4, VAR_5, VAR_6;
 fz_rect VAR_7;
 fz_matrix VAR_8;


 VAR_3 = VAR_0.x1 - VAR_0.x0;
 VAR_4 = VAR_0.y1 - VAR_0.y0;
 VAR_5 = FUNC_0(VAR_3 * VAR_1 / 72 + 0.5f);
 VAR_6 = FUNC_0(VAR_4 * VAR_1 / 72 + 0.5f);

 VAR_8 = FUNC_1(FUNC_2(VAR_5 / VAR_3, VAR_6 / VAR_4), VAR_2);


 VAR_7 = FUNC_3(VAR_0, VAR_8);
 VAR_8.e -= VAR_7.x0;
 VAR_8.f -= VAR_7.y0;

 return VAR_8;
}
