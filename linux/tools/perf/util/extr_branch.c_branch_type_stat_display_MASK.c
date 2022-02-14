
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct branch_type_stat {scalar_t__* counts; scalar_t__ cond_fwd; scalar_t__ cond_bwd; scalar_t__ cross_4k; scalar_t__ cross_2m; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;

void FUNC_2(FILE *VAR_1, struct branch_type_stat *VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += VAR_2->counts[VAR_4];

 if (VAR_3 == 0)
  return;

 FUNC_1(VAR_1, "\n#");
 FUNC_1(VAR_1, "\n# Branch Statistics:");
 FUNC_1(VAR_1, "\n#");

 if (VAR_2->cond_fwd > 0) {
  FUNC_1(VAR_1, "\n%8s: %5.1f%%",
   "COND_FWD",
   100.0 * (double)VAR_2->cond_fwd / (double)VAR_3);
 }

 if (VAR_2->cond_bwd > 0) {
  FUNC_1(VAR_1, "\n%8s: %5.1f%%",
   "COND_BWD",
   100.0 * (double)VAR_2->cond_bwd / (double)VAR_3);
 }

 if (VAR_2->cross_4k > 0) {
  FUNC_1(VAR_1, "\n%8s: %5.1f%%",
   "CROSS_4K",
   100.0 * (double)VAR_2->cross_4k / (double)VAR_3);
 }

 if (VAR_2->cross_2m > 0) {
  FUNC_1(VAR_1, "\n%8s: %5.1f%%",
   "CROSS_2M",
   100.0 * (double)VAR_2->cross_2m / (double)VAR_3);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->counts[VAR_4] > 0)
   FUNC_1(VAR_1, "\n%8s: %5.1f%%",
    FUNC_0(VAR_4),
    100.0 *
    (double)VAR_2->counts[VAR_4] / (double)VAR_3);
 }
}
