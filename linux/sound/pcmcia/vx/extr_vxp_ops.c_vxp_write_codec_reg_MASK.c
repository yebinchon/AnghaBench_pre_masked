
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vx_core*,int ) ;
 int FUNC_1 (struct vx_core*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vx_core *VAR_5, int VAR_6, unsigned int VAR_7)
{
 int VAR_8;


 if (! VAR_6)
  FUNC_0(VAR_5, VAR_3);
 else
  FUNC_0(VAR_5, VAR_0);


 for (VAR_8 = 0; VAR_8 < 24; VAR_8++, VAR_7 <<= 1)
  FUNC_1(VAR_5, VAR_1, ((VAR_7 & 0x800000) ? VAR_4 : 0));


 FUNC_0(VAR_5, VAR_2);
}
