
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct arpt_mangle* targinfo; } ;
struct arpt_mangle {int flags; scalar_t__ target; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(const struct xt_tgchk_param *VAR_5)
{
 const struct arpt_mangle *VAR_6 = VAR_5->targinfo;

 if (VAR_6->flags & ~VAR_0 ||
     !(VAR_6->flags & VAR_0))
  return -VAR_1;

 if (VAR_6->target != VAR_3 && VAR_6->target != VAR_2 &&
    VAR_6->target != VAR_4)
  return -VAR_1;
 return 0;
}
