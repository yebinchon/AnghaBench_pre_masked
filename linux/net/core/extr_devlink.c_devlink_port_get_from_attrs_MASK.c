
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct devlink_port {int dummy; } ;
struct devlink {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct devlink_port* FUNC_0 (int ) ;
 struct devlink_port* FUNC_1 (struct devlink*,int ) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static struct devlink_port *FUNC_3(struct devlink *VAR_3,
       struct nlattr **VAR_4)
{
 if (VAR_4[VAR_0]) {
  u32 VAR_5 = FUNC_2(VAR_4[VAR_0]);
  struct devlink_port *VAR_6;

  VAR_6 = FUNC_1(VAR_3, VAR_5);
  if (!VAR_6)
   return FUNC_0(-VAR_2);
  return VAR_6;
 }
 return FUNC_0(-VAR_1);
}
