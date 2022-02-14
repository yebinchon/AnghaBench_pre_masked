
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vx_core*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct vx_core*,int ) ;

__attribute__((used)) static int FUNC_2(struct vx_core *VAR_3)
{

 if (FUNC_1(VAR_3, VAR_1) < 0)
  return -VAR_0;

 if (FUNC_0(VAR_3, VAR_2, 0, 200) < 0)
  return -VAR_0;
 return 0;
}
