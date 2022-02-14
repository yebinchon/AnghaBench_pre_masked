
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_fact_bucket_info {unsigned int high_priority_cores_count; unsigned int sse_trl; unsigned int avx_trl; unsigned int avx512_trl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,int,...) ;
 int FUNC_1 (int,int ,int ,int ,int,unsigned int*) ;

int FUNC_2(int VAR_3, int VAR_4,
         struct isst_fact_bucket_info *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < 2; ++VAR_7) {
  int VAR_10;

  VAR_9 = FUNC_1(
   VAR_3, VAR_0,
   VAR_1, 0,
   (VAR_7 << 8) | VAR_4, &VAR_6);
  if (VAR_9)
   return VAR_9;

  FUNC_0(
   "cpu:%d CONFIG_TDP_GET_FACT_HP_TURBO_LIMIT_NUMCORES index:%d level:%d resp:%x\n",
   VAR_3, VAR_7, VAR_4, VAR_6);

  for (VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
   VAR_5[VAR_10 + (VAR_7 * 4)].high_priority_cores_count =
    (VAR_6 >> (VAR_10 * 8)) & 0xff;
  }
 }

 for (VAR_8 = 0; VAR_8 < 3; ++VAR_8) {
  for (VAR_7 = 0; VAR_7 < 2; ++VAR_7) {
   int VAR_11;

   VAR_9 = FUNC_1(
    VAR_3, VAR_0,
    VAR_2, 0,
    (VAR_8 << 16) | (VAR_7 << 8) | VAR_4, &VAR_6);
   if (VAR_9)
    return VAR_9;

   FUNC_0(
    "cpu:%d CONFIG_TDP_GET_FACT_HP_TURBO_LIMIT_RATIOS index:%d level:%d avx:%d resp:%x\n",
    VAR_3, VAR_7, VAR_4, VAR_8, VAR_6);

   for (VAR_11 = 0; VAR_11 < 4; ++VAR_11) {
    switch (VAR_8) {
    case 0:
     VAR_5[VAR_11 + (VAR_7 * 4)].sse_trl =
      (VAR_6 >> (VAR_11 * 8)) & 0xff;
     break;
    case 1:
     VAR_5[VAR_11 + (VAR_7 * 4)].avx_trl =
      (VAR_6 >> (VAR_11 * 8)) & 0xff;
     break;
    case 2:
     VAR_5[VAR_11 + (VAR_7 * 4)].avx512_trl =
      (VAR_6 >> (VAR_11 * 8)) & 0xff;
     break;
    default:
     break;
    }
   }
  }
 }

 return 0;
}
