
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct minstrel_ht_sta {size_t* max_tp_rate; int* supported; } ;
struct mcs_group {int* duration; int shift; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct minstrel_ht_sta*,struct mcs_group const*,int,struct mcs_group const*) ;
 struct mcs_group* VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct minstrel_ht_sta *VAR_3, u16 *VAR_4, int *VAR_5,
        bool VAR_6)
{
 const struct mcs_group *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = &VAR_2[VAR_3->max_tp_rate[0] / VAR_0];
 VAR_12 = VAR_3->max_tp_rate[0] % VAR_0;

 VAR_11 = FUNC_0(VAR_3->max_tp_rate[0]);
 if (VAR_6)
  VAR_11 -= VAR_11 / 16;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  u16 VAR_13 = VAR_3->supported[VAR_10];

  if (!VAR_13)
   continue;

  VAR_7 = &VAR_2[VAR_10];
  if (!FUNC_1(VAR_3, VAR_8, VAR_12, VAR_7))
   continue;

  for (VAR_9 = 0; VAR_13; VAR_13 >>= 1, VAR_9++) {
   int VAR_14;

   if (!(VAR_13 & 1))
    continue;

   if ((VAR_7->duration[VAR_9] << VAR_7->shift) > VAR_11)
    continue;

   VAR_14 = VAR_10 * VAR_0 + VAR_9;
   if (VAR_14 == VAR_3->max_tp_rate[0])
    continue;

   VAR_4[(*VAR_5)++] = VAR_14;
   break;
  }
 }
}
