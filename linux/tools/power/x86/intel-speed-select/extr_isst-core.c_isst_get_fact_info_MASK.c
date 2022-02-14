
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_fact_info {unsigned int lp_clipping_ratio_license_sse; unsigned int lp_clipping_ratio_license_avx2; unsigned int lp_clipping_ratio_license_avx512; int bucket_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int ,int ,int ,int,unsigned int*) ;

int FUNC_3(int VAR_2, int VAR_3, struct isst_fact_info *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_0,
         VAR_1, 0,
         VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_0("cpu:%d CONFIG_TDP_GET_FACT_LP_CLIPPING_RATIO resp:%x\n",
       VAR_2, VAR_5);

 VAR_4->lp_clipping_ratio_license_sse = VAR_5 & 0xff;
 VAR_4->lp_clipping_ratio_license_avx2 = (VAR_5 >> 8) & 0xff;
 VAR_4->lp_clipping_ratio_license_avx512 = (VAR_5 >> 16) & 0xff;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4->bucket_info);

 return VAR_6;
}
