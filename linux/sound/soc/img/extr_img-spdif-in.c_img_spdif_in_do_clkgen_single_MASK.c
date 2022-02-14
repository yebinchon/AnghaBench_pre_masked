
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct img_spdif_in {unsigned int single_freq; int lock; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct img_spdif_in*,unsigned int,unsigned long*) ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*,unsigned long) ;
 int FUNC_2 (struct img_spdif_in*,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct img_spdif_in *VAR_6,
  unsigned int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;
 int VAR_12 = 0;
 u32 VAR_13;

 VAR_12 = FUNC_0(VAR_6, VAR_7, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_7, &VAR_8, &VAR_9, VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_13 = (VAR_8 << VAR_5) &
  VAR_4;
 VAR_13 |= (VAR_9 << VAR_3) &
  VAR_2;

 FUNC_3(&VAR_6->lock, VAR_10);

 if (VAR_6->active) {
  FUNC_4(&VAR_6->lock, VAR_10);
  return -VAR_0;
 }

 FUNC_2(VAR_6, VAR_13, VAR_1);

 VAR_6->single_freq = VAR_7;

 FUNC_4(&VAR_6->lock, VAR_10);

 return 0;
}
