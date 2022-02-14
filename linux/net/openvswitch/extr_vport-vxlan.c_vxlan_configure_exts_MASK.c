
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_config {int flags; } ;
struct vport {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct vport *VAR_5, struct nlattr *VAR_6,
    struct vxlan_config *VAR_7)
{
 struct nlattr *VAR_8[VAR_2 + 1];
 int VAR_9;

 if (FUNC_0(VAR_6) < sizeof(struct nlattr))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8, VAR_2, VAR_6,
       VAR_4, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8[VAR_1])
  VAR_7->flags |= VAR_3;

 return 0;
}
