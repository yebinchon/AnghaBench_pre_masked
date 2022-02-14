
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct devlink_fmsg {int dummy; } ;


 int FUNC_0 (struct devlink_fmsg*,void const*,int ) ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*,char const*) ;

int FUNC_3(struct devlink_fmsg *VAR_0, const char *VAR_1,
     const void *VAR_2, u16 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  return VAR_4;

 return 0;
}
