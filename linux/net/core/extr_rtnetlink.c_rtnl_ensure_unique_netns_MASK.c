
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_5[],
        struct netlink_ext_ack *VAR_6,
        bool VAR_7)
{

 if (VAR_7) {
  if (!VAR_5[VAR_3] && !VAR_5[VAR_2])
   return 0;

  FUNC_0(VAR_6, "specified netns attribute not supported");
  return -VAR_1;
 }

 if (VAR_5[VAR_4] && (VAR_5[VAR_3] || VAR_5[VAR_2]))
  goto invalid_attr;

 if (VAR_5[VAR_3] && (VAR_5[VAR_4] || VAR_5[VAR_2]))
  goto invalid_attr;

 if (VAR_5[VAR_2] && (VAR_5[VAR_4] || VAR_5[VAR_3]))
  goto invalid_attr;

 return 0;

invalid_attr:
 FUNC_0(VAR_6, "multiple netns identifying attributes specified");
 return -VAR_0;
}
