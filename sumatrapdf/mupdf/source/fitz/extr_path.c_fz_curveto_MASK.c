
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float x; float y; } ;
struct TYPE_11__ {scalar_t__ cmd_len; TYPE_1__ current; scalar_t__ packed; } ;
typedef TYPE_2__ fz_path ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,float,float,float,float) ;
 int FUNC_2 (int *,TYPE_2__*,float,float,float,float) ;
 int FUNC_3 (int *,TYPE_2__*,float,float) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;
 int FUNC_7 (int *,TYPE_2__*,float,float) ;

void
FUNC_8(fz_context *VAR_3, fz_path *VAR_4,
 float VAR_5, float VAR_6,
 float VAR_7, float VAR_8,
 float VAR_9, float VAR_10)
{
 float VAR_11, VAR_12;

 if (VAR_4->packed)
  FUNC_4(VAR_3, VAR_1, "Cannot modify a packed path");

 VAR_11 = VAR_4->current.x;
 VAR_12 = VAR_4->current.y;

 if (VAR_4->cmd_len == 0)
 {
  FUNC_5(VAR_3, "curveto with no current point");
  return;
 }


 if (VAR_11 == VAR_5 && VAR_12 == VAR_6)
 {
  if (VAR_7 == VAR_9 && VAR_8 == VAR_10)
  {

   if (VAR_5 == VAR_7 && VAR_6 == VAR_8 && FUNC_0(VAR_4) != VAR_2)
    return;

   FUNC_3(VAR_3, VAR_4, VAR_9, VAR_10);
  }
  else if (VAR_5 == VAR_7 && VAR_6 == VAR_8)
  {

   FUNC_3(VAR_3, VAR_4, VAR_9, VAR_10);
  }
  else
   FUNC_1(VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10);
  return;
 }
 else if (VAR_7 == VAR_9 && VAR_8 == VAR_10)
 {
  if (VAR_5 == VAR_7 && VAR_6 == VAR_8)
  {

   FUNC_3(VAR_3, VAR_4, VAR_9, VAR_10);
  }
  else
   FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9, VAR_10);
  return;
 }

 FUNC_6(VAR_3, VAR_4, VAR_0);
 FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_7(VAR_3, VAR_4, VAR_7, VAR_8);
 FUNC_7(VAR_3, VAR_4, VAR_9, VAR_10);
}
