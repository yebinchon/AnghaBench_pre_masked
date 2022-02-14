
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct isst_fact_info {int lp_clipping_ratio_license_sse; int lp_clipping_ratio_license_avx2; int lp_clipping_ratio_license_avx512; struct isst_fact_bucket_info* bucket_info; } ;
struct isst_fact_bucket_info {int high_priority_cores_count; int sse_trl; int avx_trl; int avx512_trl; } ;
typedef int header ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*,char*) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(int VAR_2, FILE *VAR_3, int VAR_4,
        int VAR_5, int VAR_6,
        struct isst_fact_info *VAR_7,
        int VAR_8)
{
 struct isst_fact_bucket_info *VAR_9 = VAR_7->bucket_info;
 char VAR_10[256];
 char VAR_11[256];
 int VAR_12;

 FUNC_1(VAR_10, sizeof(VAR_10), "speed-select-turbo-freq");
 FUNC_0(VAR_3, VAR_8, VAR_10, ((void*)0));
 for (VAR_12 = 0; VAR_12 < VAR_1; ++VAR_12) {
  if (VAR_5 != 0xff && VAR_5 != VAR_12)
   continue;

  if (!VAR_9[VAR_12].high_priority_cores_count)
   break;

  FUNC_1(VAR_10, sizeof(VAR_10), "bucket-%d", VAR_12);
  FUNC_0(VAR_3, VAR_8 + 1, VAR_10, ((void*)0));

  FUNC_1(VAR_10, sizeof(VAR_10), "high-priority-cores-count");
  FUNC_1(VAR_11, sizeof(VAR_11), "%d",
    VAR_9[VAR_12].high_priority_cores_count);
  FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);

  if (VAR_6 & 0x01) {
   FUNC_1(VAR_10, sizeof(VAR_10),
     "high-priority-max-frequency(MHz)");
   FUNC_1(VAR_11, sizeof(VAR_11), "%d",
     VAR_9[VAR_12].sse_trl * VAR_0);
   FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);
  }

  if (VAR_6 & 0x02) {
   FUNC_1(VAR_10, sizeof(VAR_10),
     "high-priority-max-avx2-frequency(MHz)");
   FUNC_1(VAR_11, sizeof(VAR_11), "%d",
     VAR_9[VAR_12].avx_trl * VAR_0);
   FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);
  }

  if (VAR_6 & 0x04) {
   FUNC_1(VAR_10, sizeof(VAR_10),
     "high-priority-max-avx512-frequency(MHz)");
   FUNC_1(VAR_11, sizeof(VAR_11), "%d",
     VAR_9[VAR_12].avx512_trl *
      VAR_0);
   FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);
  }
 }
 FUNC_1(VAR_10, sizeof(VAR_10),
   "speed-select-turbo-freq-clip-frequencies");
 FUNC_0(VAR_3, VAR_8 + 1, VAR_10, ((void*)0));
 FUNC_1(VAR_10, sizeof(VAR_10), "low-priority-max-frequency(MHz)");
 FUNC_1(VAR_11, sizeof(VAR_11), "%d",
   VAR_7->lp_clipping_ratio_license_sse *
    VAR_0);
 FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);
 FUNC_1(VAR_10, sizeof(VAR_10),
   "low-priority-max-avx2-frequency(MHz)");
 FUNC_1(VAR_11, sizeof(VAR_11), "%d",
   VAR_7->lp_clipping_ratio_license_avx2 *
    VAR_0);
 FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);
 FUNC_1(VAR_10, sizeof(VAR_10),
   "low-priority-max-avx512-frequency(MHz)");
 FUNC_1(VAR_11, sizeof(VAR_11), "%d",
   VAR_7->lp_clipping_ratio_license_avx512 *
    VAR_0);
 FUNC_0(VAR_3, VAR_8 + 2, VAR_10, VAR_11);
}
