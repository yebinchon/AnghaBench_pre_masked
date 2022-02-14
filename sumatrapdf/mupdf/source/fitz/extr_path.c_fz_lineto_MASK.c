
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,float,float) ;
 int FUNC_5 (int *,TYPE_2__*,float,int) ;

void
FUNC_6(fz_context *VAR_6, fz_path *VAR_7, float VAR_8, float VAR_9)
{
 float VAR_10, VAR_11;

 if (VAR_7->packed)
  FUNC_1(VAR_6, VAR_1, "Cannot modify a packed path");

 VAR_10 = VAR_7->current.x;
 VAR_11 = VAR_7->current.y;

 if (VAR_7->cmd_len == 0)
 {
  FUNC_2(VAR_6, "lineto with no current point");
  return;
 }


 if (FUNC_0(VAR_7) != VAR_4 && VAR_10 == VAR_8 && VAR_11 == VAR_9)
  return;

 if (VAR_10 == VAR_8)
 {
  if (VAR_11 == VAR_9)
  {
   if (FUNC_0(VAR_7) != VAR_4)
    return;
   FUNC_3(VAR_6, VAR_7, VAR_0);
  }
  else
  {
   FUNC_3(VAR_6, VAR_7, VAR_5);
   FUNC_5(VAR_6, VAR_7, VAR_9, 0);
  }
 }
 else if (VAR_11 == VAR_9)
 {
  FUNC_3(VAR_6, VAR_7, VAR_2);
  FUNC_5(VAR_6, VAR_7, VAR_8, 1);
 }
 else
 {
  FUNC_3(VAR_6, VAR_7, VAR_3);
  FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
 }
}
