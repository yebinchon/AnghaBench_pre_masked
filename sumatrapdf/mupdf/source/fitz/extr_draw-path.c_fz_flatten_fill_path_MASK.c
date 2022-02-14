
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_rasterizer ;
typedef int fz_path ;
typedef void* fz_matrix ;
typedef int fz_irect ;
typedef int fz_context ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_7__ {float flatness; TYPE_2__ b; TYPE_1__ c; void* ctm; int * rast; } ;
typedef TYPE_3__ flatten_arg ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int const) ;
 int FUNC_6 (int *,int const*,int *,TYPE_3__*) ;
 int FUNC_7 (int *,int *,void*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_8(fz_context *VAR_1, fz_rasterizer *VAR_2, const fz_path *VAR_3, fz_matrix VAR_4, float VAR_5, const fz_irect *VAR_6, fz_irect *VAR_7)
{
 flatten_arg VAR_8;

 if (FUNC_5(VAR_1, VAR_2, *VAR_6))
 {
  VAR_8.rast = VAR_2;
  VAR_8.ctm = VAR_4;
  VAR_8.flatness = VAR_5;
  VAR_8.b.x = VAR_8.b.y = VAR_8.c.x = VAR_8.c.y = 0;

  FUNC_6(VAR_1, VAR_3, &VAR_0, &VAR_8);
  if (VAR_8.c.x != VAR_8.b.x || VAR_8.c.y != VAR_8.b.y)
   FUNC_7(VAR_1, VAR_2, VAR_4, VAR_8.c.x, VAR_8.c.y, VAR_8.b.x, VAR_8.b.y);

  FUNC_1(VAR_1, VAR_2);

  FUNC_4(VAR_1, VAR_2);
 }

 VAR_8.rast = VAR_2;
 VAR_8.ctm = VAR_4;
 VAR_8.flatness = VAR_5;
 VAR_8.b.x = VAR_8.b.y = VAR_8.c.x = VAR_8.c.y = 0;

 FUNC_6(VAR_1, VAR_3, &VAR_0, &VAR_8);
 if (VAR_8.c.x != VAR_8.b.x || VAR_8.c.y != VAR_8.b.y)
  FUNC_7(VAR_1, VAR_2, VAR_4, VAR_8.c.x, VAR_8.c.y, VAR_8.b.x, VAR_8.b.y);

 FUNC_1(VAR_1, VAR_2);

 if (!VAR_7)
  return 0;

 *VAR_7 = FUNC_0(VAR_1, VAR_2);
 return FUNC_3(FUNC_2(*VAR_7, *VAR_6));
}
