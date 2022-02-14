
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_l2tp_info {int flags; scalar_t__ type; int version; scalar_t__ tid; scalar_t__ sid; } ;
struct l2tp_data {scalar_t__ type; int version; scalar_t__ tid; scalar_t__ sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_0(const struct xt_l2tp_info *VAR_6, struct l2tp_data *VAR_7)
{
 if ((VAR_6->flags & VAR_2) && (VAR_6->type != VAR_7->type))
  return 0;

 if ((VAR_6->flags & VAR_5) && (VAR_6->version != VAR_7->version))
  return 0;


 if ((VAR_6->flags & VAR_1) &&
     ((VAR_7->type == VAR_3) || (VAR_7->version == 2)) &&
     (VAR_6->tid != VAR_7->tid))
  return 0;


 if ((VAR_6->flags & VAR_0) && (VAR_7->type == VAR_4) &&
     (VAR_6->sid != VAR_7->sid))
  return 0;

 return 1;
}
