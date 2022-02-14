
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_time_info {scalar_t__ daytime_start; scalar_t__ daytime_stop; int flags; } ;
struct xt_mtchk_param {struct xt_time_info* matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_5)
{
 const struct xt_time_info *VAR_6 = VAR_5->matchinfo;

 if (VAR_6->daytime_start > VAR_4 ||
     VAR_6->daytime_stop > VAR_4) {
  FUNC_0("invalid argument - start or stop time greater than 23:59:59\n");
  return -VAR_0;
 }

 if (VAR_6->flags & ~VAR_2) {
  FUNC_0("unknown flags 0x%x\n",
        VAR_6->flags & ~VAR_2);
  return -VAR_1;
 }

 if ((VAR_6->flags & VAR_3) &&
      VAR_6->daytime_start < VAR_6->daytime_stop)
  return -VAR_1;

 return 0;
}
