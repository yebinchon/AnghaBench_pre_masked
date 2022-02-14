
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 FUNC_0(VAR_2);
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2, 256, VAR_1);
 FUNC_1(&VAR_2, VAR_3 != -VAR_0);
 VAR_3 = FUNC_2(&VAR_2, 1UL << 30, VAR_1);
 FUNC_1(&VAR_2, VAR_3 != -VAR_0);
 FUNC_1(&VAR_2, !FUNC_3(&VAR_2));
}
