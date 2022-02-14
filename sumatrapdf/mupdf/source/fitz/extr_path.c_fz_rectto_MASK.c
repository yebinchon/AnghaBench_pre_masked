
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cmd_len; int coord_len; int begin; int current; scalar_t__ packed; } ;
typedef TYPE_1__ fz_path ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,float,float) ;

void
FUNC_4(fz_context *VAR_3, fz_path *VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8)
{
 if (VAR_4->packed)
  FUNC_1(VAR_3, VAR_0, "Cannot modify a packed path");

 if (VAR_4->cmd_len > 0 && FUNC_0(VAR_4) == VAR_1)
 {

  VAR_4->coord_len -= 2;
  VAR_4->cmd_len--;
 }

 FUNC_2(VAR_3, VAR_4, VAR_2);
 FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_3, VAR_4, VAR_7, VAR_8);

 VAR_4->current = VAR_4->begin;
}
