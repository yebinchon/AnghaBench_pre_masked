
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp_level_info {unsigned int pkg_max_power; unsigned int pkg_min_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,unsigned int,unsigned int,unsigned int) ;
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

 VAR_4->pkg_max_power = VAR_5 & FUNC_0(14, 0);
 VAR_4->pkg_min_power = (VAR_5 & FUNC_0(30, 16)) >> 16;

 FUNC_1(
  "cpu:%d ctdp:%d CONFIG_TDP_GET_PWR_INFO resp:%x pkg_max_power:%d pkg_min_power:%d\n",
  VAR_2, VAR_3, VAR_5, VAR_4->pkg_max_power,
  VAR_4->pkg_min_power);

 return 0;
}
