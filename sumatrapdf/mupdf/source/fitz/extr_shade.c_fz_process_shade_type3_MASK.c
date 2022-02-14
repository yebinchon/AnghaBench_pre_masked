
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float** coords; scalar_t__* extend; } ;
struct TYPE_9__ {TYPE_1__ l_or_r; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef TYPE_3__ fz_shade ;
struct TYPE_11__ {float x; float y; } ;
typedef TYPE_4__ fz_point ;
typedef int fz_mesh_processor ;
typedef int fz_matrix ;
typedef int fz_context ;


 float VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float,float) ;
 int FUNC_2 (int *,int ,TYPE_4__,float,int,TYPE_4__,float,int,int,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, fz_shade *VAR_2, fz_matrix VAR_3, fz_mesh_processor *VAR_4)
{
 fz_point VAR_5, VAR_6;
 float VAR_7, VAR_8;
 fz_point VAR_9;
 float VAR_10, VAR_11;
 int VAR_12;

 VAR_5 = VAR_2->u.l_or_r.coords[0][0];
 VAR_5 = VAR_2->u.l_or_r.coords[0][1];
 VAR_7 = VAR_2->u.l_or_r.coords[0][2];

 VAR_6 = VAR_2->u.l_or_r.coords[1][0];
 VAR_6 = VAR_2->u.l_or_r.coords[1][1];
 VAR_8 = VAR_2->u.l_or_r.coords[1][2];


 VAR_12 = 4 * FUNC_3(FUNC_0(VAR_3) * FUNC_1(VAR_7, VAR_8));
 if (VAR_12 < 3)
  VAR_12 = 3;
 if (VAR_12 > 1024)
  VAR_12 = 1024;

 if (VAR_2->u.l_or_r.extend[0])
 {
  if (VAR_7 < VAR_8)
   VAR_11 = VAR_7 / (VAR_7 - VAR_8);
  else
   VAR_11 = -VAR_0;

  VAR_9.x = VAR_5 + (VAR_6 - VAR_5) * VAR_11;
  VAR_9.y = VAR_5 + (VAR_6 - VAR_5) * VAR_11;
  VAR_10 = VAR_7 + (VAR_8 - VAR_7) * VAR_11;

  FUNC_2(VAR_1, VAR_3, VAR_9, VAR_10, 0, VAR_5, VAR_7, 0, VAR_12, VAR_4);
 }

 FUNC_2(VAR_1, VAR_3, VAR_5, VAR_7, 0, VAR_6, VAR_8, 1, VAR_12, VAR_4);

 if (VAR_2->u.l_or_r.extend[1])
 {
  if (VAR_7 > VAR_8)
   VAR_11 = VAR_8 / (VAR_8 - VAR_7);
  else
   VAR_11 = -VAR_0;

  VAR_9.x = VAR_6 + (VAR_5 - VAR_6) * VAR_11;
  VAR_9.y = VAR_6 + (VAR_5 - VAR_6) * VAR_11;
  VAR_10 = VAR_8 + (VAR_7 - VAR_8) * VAR_11;

  FUNC_2(VAR_1, VAR_3, VAR_6, VAR_8, 1, VAR_9, VAR_10, 1, VAR_12, VAR_4);
 }
}
