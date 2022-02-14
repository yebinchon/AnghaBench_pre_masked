
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_fmsg {int dummy; } ;


 int FUNC_0 (struct devlink_fmsg*,int) ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*,char const*) ;

int FUNC_3(struct devlink_fmsg *VAR_0, const char *VAR_1,
          bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 return 0;
}
