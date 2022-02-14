
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;
struct genl_info {scalar_t__* attrs; } ;
typedef int name ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int *,int ) ;
 struct net_device* FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int) ;

__attribute__((used)) static struct net_device *FUNC_5(struct genl_info *VAR_5)
{
 struct net_device *VAR_6;

 if (VAR_5->attrs[VAR_2]) {
  char VAR_7[VAR_3 + 1];

  FUNC_4(VAR_7, VAR_5->attrs[VAR_2],
       sizeof(VAR_7));
  VAR_6 = FUNC_1(&VAR_4, VAR_7);
 } else if (VAR_5->attrs[VAR_1]) {
  VAR_6 = FUNC_0(&VAR_4,
   FUNC_3(VAR_5->attrs[VAR_1]));
 } else {
  return ((void*)0);
 }

 if (!VAR_6)
  return ((void*)0);

 if (VAR_6->type != VAR_0) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
