
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct branch_type_stat {scalar_t__* counts; scalar_t__ cond_fwd; scalar_t__ cond_bwd; scalar_t__ cross_4k; scalar_t__ cross_2m; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;

int FUNC_2(struct branch_type_stat *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0;
 u64 VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_8 += VAR_2->counts[VAR_5];

 if (VAR_8 == 0)
  return 0;

 if (VAR_2->cond_fwd > 0)
  VAR_7 += FUNC_1(VAR_6++, "COND_FWD", VAR_3 + VAR_7, VAR_4 - VAR_7);

 if (VAR_2->cond_bwd > 0)
  VAR_7 += FUNC_1(VAR_6++, "COND_BWD", VAR_3 + VAR_7, VAR_4 - VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_5 == VAR_0)
   continue;

  if (VAR_2->counts[VAR_5] > 0)
   VAR_7 += FUNC_1(VAR_6++, FUNC_0(VAR_5), VAR_3 + VAR_7, VAR_4 - VAR_7);
 }

 if (VAR_2->cross_4k > 0)
  VAR_7 += FUNC_1(VAR_6++, "CROSS_4K", VAR_3 + VAR_7, VAR_4 - VAR_7);

 if (VAR_2->cross_2m > 0)
  VAR_7 += FUNC_1(VAR_6++, "CROSS_2M", VAR_3 + VAR_7, VAR_4 - VAR_7);

 return VAR_7;
}
