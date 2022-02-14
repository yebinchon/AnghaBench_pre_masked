
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_synth_intel_cbr {int cbr; int max_nonturbo; int freq; } ;
struct perf_sample {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,unsigned int,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct perf_sample*,struct perf_synth_intel_cbr) ;
 int FUNC_3 (int,int *) ;
 struct perf_synth_intel_cbr* FUNC_4 (struct perf_sample*) ;

__attribute__((used)) static int FUNC_5(struct perf_sample *VAR_0, FILE *VAR_1)
{
 struct perf_synth_intel_cbr *VAR_2 = FUNC_4(VAR_0);
 unsigned int VAR_3, VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_0, *VAR_2))
  return 0;

 VAR_4 = (FUNC_1(VAR_2->freq) + 500) / 1000;
 VAR_5 = FUNC_0(VAR_1, " cbr: %2u freq: %4u MHz ", VAR_2->cbr, VAR_4);
 if (VAR_2->max_nonturbo) {
  VAR_3 = (5 + (1000 * VAR_2->cbr) / VAR_2->max_nonturbo) / 10;
  VAR_5 += FUNC_0(VAR_1, "(%3u%%) ", VAR_3);
 }
 return VAR_5 + FUNC_3(VAR_5, VAR_1);
}
