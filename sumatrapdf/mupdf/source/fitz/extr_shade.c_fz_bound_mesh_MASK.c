
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_rect ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,char*,scalar_t__) ;

__attribute__((used)) static fz_rect
FUNC_5(fz_context *VAR_8, fz_shade *VAR_9)
{
 if (VAR_9->type == VAR_1)
  return FUNC_0(VAR_8, VAR_9);
 else if (VAR_9->type == VAR_2)
  return FUNC_1(VAR_8, VAR_9);
 else if (VAR_9->type == VAR_7)
  return FUNC_2(VAR_8, VAR_9);
 else if (VAR_9->type == VAR_3 ||
  VAR_9->type == VAR_4 ||
  VAR_9->type == VAR_5 ||
  VAR_9->type == VAR_6)
  return FUNC_3(VAR_8, VAR_9);
 else
  FUNC_4(VAR_8, VAR_0, "Unexpected mesh type %d\n", VAR_9->type);
}
