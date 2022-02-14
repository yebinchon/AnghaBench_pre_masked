
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int* Cmd; } ;
struct vx_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;

__attribute__((used)) static int FUNC_2(struct vx_core *VAR_1)
{
 struct vx_rmh VAR_2;

 FUNC_0(&VAR_2, VAR_0);
        VAR_2.Cmd[0] |= 1 << 0;
 return FUNC_1(VAR_1, &VAR_2);
}
