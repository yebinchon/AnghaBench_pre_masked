
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp_level_info {unsigned int fact_support; int pbf_support; int fact_enabled; int pbf_enabled; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,unsigned int,unsigned int,int,int,int) ;
 int FUNC_2 (int,int ,int ,int ,int,unsigned int*) ;

int FUNC_3(int VAR_2, int VAR_3,
     struct isst_pkg_ctdp_level_info *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_0,
         VAR_1, 0,
         VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->fact_support = VAR_5 & FUNC_0(0);
 VAR_4->pbf_support = !!(VAR_5 & FUNC_0(1));
 VAR_4->fact_enabled = !!(VAR_5 & FUNC_0(16));
 VAR_4->pbf_enabled = !!(VAR_5 & FUNC_0(17));

 FUNC_1(
  "cpu:%d CONFIG_TDP_GET_TDP_CONTROL resp:%x fact_support:%d pbf_support: %d fact_enabled:%d pbf_enabled:%d\n",
  VAR_2, VAR_5, VAR_4->fact_support, VAR_4->pbf_support,
  VAR_4->fact_enabled, VAR_4->pbf_enabled);

 return 0;
}
