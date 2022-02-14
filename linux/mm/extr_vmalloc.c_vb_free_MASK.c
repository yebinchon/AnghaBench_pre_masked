
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_block {scalar_t__ dirty; int free; int lock; int dirty_max; int dirty_min; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct vmap_block*) ;
 unsigned int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (unsigned long) ;
 struct vmap_block* FUNC_10 (int *,unsigned long) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_5 ;
 int FUNC_15 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_16(const void *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;
 struct vmap_block *VAR_11;

 FUNC_0(FUNC_9(VAR_7));
 FUNC_0(VAR_7 > VAR_1*VAR_4);

 FUNC_3((unsigned long)VAR_6, (unsigned long)VAR_6 + VAR_7);

 VAR_10 = FUNC_6(VAR_7);

 VAR_8 = (unsigned long)VAR_6 & (VAR_3 - 1);
 VAR_8 >>= VAR_0;

 VAR_9 = FUNC_1((unsigned long)VAR_6);
 FUNC_11();
 VAR_11 = FUNC_10(&VAR_5, VAR_9);
 FUNC_12();
 FUNC_0(!VAR_11);

 FUNC_15((unsigned long)VAR_6, (unsigned long)VAR_6 + VAR_7);

 if (FUNC_2())
  FUNC_4((unsigned long)VAR_6,
     (unsigned long)VAR_6 + VAR_7);

 FUNC_13(&VAR_11->lock);


 VAR_11->dirty_min = FUNC_8(VAR_11->dirty_min, VAR_8);
 VAR_11->dirty_max = FUNC_7(VAR_11->dirty_max, VAR_8 + (1UL << VAR_10));

 VAR_11->dirty += 1UL << VAR_10;
 if (VAR_11->dirty == VAR_2) {
  FUNC_0(VAR_11->free);
  FUNC_14(&VAR_11->lock);
  FUNC_5(VAR_11);
 } else
  FUNC_14(&VAR_11->lock);
}
