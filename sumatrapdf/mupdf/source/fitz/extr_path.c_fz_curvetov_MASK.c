
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float x; float y; } ;
struct TYPE_9__ {scalar_t__ cmd_len; TYPE_1__ current; scalar_t__ packed; } ;
typedef TYPE_2__ fz_path ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,float,float) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (int *,TYPE_2__*,float,float) ;

void
FUNC_6(fz_context *VAR_3, fz_path *VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8)
{
 float VAR_9, VAR_10;

 if (VAR_4->packed)
  FUNC_2(VAR_3, VAR_1, "Cannot modify a packed path");

 VAR_9 = VAR_4->current.x;
 VAR_10 = VAR_4->current.y;

 if (VAR_4->cmd_len == 0)
 {
  FUNC_3(VAR_3, "curveto with no current point");
  return;
 }


 if (VAR_5 == VAR_7 && VAR_6 == VAR_8)
 {

  if (VAR_9 == VAR_5 && VAR_10 == VAR_6 && FUNC_0(VAR_4) != VAR_2)
   return;

  FUNC_1(VAR_3, VAR_4, VAR_7, VAR_8);
 }
 else if (VAR_9 == VAR_5 && VAR_10 == VAR_6)
 {

  FUNC_1(VAR_3, VAR_4, VAR_7, VAR_8);
 }

 FUNC_4(VAR_3, VAR_4, VAR_0);
 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_5(VAR_3, VAR_4, VAR_7, VAR_8);
}
