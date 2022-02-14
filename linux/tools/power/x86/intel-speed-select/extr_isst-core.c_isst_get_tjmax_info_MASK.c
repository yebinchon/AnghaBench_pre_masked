
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp_level_info {unsigned int t_proc_hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int,unsigned int,unsigned int) ;
 int FUNC_2 (int,int ,int ,int ,int,unsigned int*) ;

int FUNC_3(int VAR_2, int VAR_3,
   struct isst_pkg_ctdp_level_info *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_1,
         0, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->t_proc_hot = VAR_5 & FUNC_0(7, 0);

 FUNC_1(
  "cpu:%d ctdp:%d CONFIG_TDP_GET_TJMAX_INFO resp:%x t_proc_hot:%d\n",
  VAR_2, VAR_3, VAR_5, VAR_4->t_proc_hot);

 return 0;
}
