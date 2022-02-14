
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct img_spdif_in {unsigned int trk; unsigned int* aclkgen_regs; int multi_freq; unsigned int* multi_freqs; int lock; scalar_t__ active; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct img_spdif_in*,int) ;
 int FUNC_1 (struct img_spdif_in*,unsigned int,unsigned long*) ;
 int FUNC_2 (unsigned int,unsigned int*,unsigned int*,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct img_spdif_in *VAR_7,
  unsigned int VAR_8[])
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 unsigned long VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0;
 u32 VAR_17, VAR_18, VAR_19[VAR_6];

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
  if (VAR_8[VAR_15] > VAR_12)
   VAR_12 = VAR_8[VAR_15];

 VAR_16 = FUNC_1(VAR_7, VAR_12, &VAR_14);
 if (VAR_16)
  return VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_11 = VAR_8[VAR_15];

  VAR_16 = FUNC_2(VAR_11, &VAR_9, &VAR_10, VAR_14);
  if (VAR_16)
   return VAR_16;

  VAR_17 = (VAR_9 << VAR_4) &
   VAR_3;
  VAR_17 |= (VAR_10 << VAR_2) &
   VAR_1;
  VAR_19[VAR_15] = VAR_17;
 }

 FUNC_3(&VAR_7->lock, VAR_13);

 if (VAR_7->active) {
  FUNC_4(&VAR_7->lock, VAR_13);
  return -VAR_0;
 }

 VAR_18 = VAR_7->trk << VAR_5;

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_7->aclkgen_regs[VAR_15] = VAR_19[VAR_15] | VAR_18;
  FUNC_0(VAR_7, VAR_15);
 }

 VAR_7->multi_freq = 1;
 VAR_7->multi_freqs[0] = VAR_8[0];
 VAR_7->multi_freqs[1] = VAR_8[1];
 VAR_7->multi_freqs[2] = VAR_8[2];
 VAR_7->multi_freqs[3] = VAR_8[3];

 FUNC_4(&VAR_7->lock, VAR_13);

 return 0;
}
