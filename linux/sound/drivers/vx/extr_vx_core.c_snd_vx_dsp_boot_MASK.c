
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int chip_status; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vx_core*,struct firmware const*) ;
 int FUNC_2 (struct vx_core*,int) ;
 int FUNC_3 (struct vx_core*,int ) ;

int FUNC_4(struct vx_core *VAR_1, const struct firmware *VAR_2)
{
 int VAR_3;
 int VAR_4 = !(VAR_1->chip_status & VAR_0);

 FUNC_2(VAR_1, VAR_4);
 FUNC_3(VAR_1, 0);

 if ((VAR_3 = FUNC_1(VAR_1, VAR_2)) < 0)
  return VAR_3;
 FUNC_0(10);

 return 0;
}
