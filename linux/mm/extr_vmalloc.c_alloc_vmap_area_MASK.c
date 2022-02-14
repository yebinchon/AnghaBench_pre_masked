
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {unsigned long va_start; unsigned long va_end; int * vm; int rb_node; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vmap_area* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_3 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *,struct vmap_area*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,unsigned long*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct vmap_area*,int *,int *) ;
 int FUNC_9 (unsigned long) ;
 struct vmap_area* FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,struct vmap_area*) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 () ;
 int VAR_6 ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (char*,unsigned long) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static struct vmap_area *FUNC_23(unsigned long VAR_13,
    unsigned long VAR_14,
    unsigned long VAR_15, unsigned long VAR_16,
    int VAR_17, gfp_t VAR_18)
{
 struct vmap_area *VAR_19, *VAR_20;
 unsigned long VAR_21;
 int VAR_22 = 0;

 FUNC_0(!VAR_13);
 FUNC_0(FUNC_14(VAR_13));
 FUNC_0(!FUNC_9(VAR_14));

 if (FUNC_22(!VAR_11))
  return FUNC_1(-VAR_0);

 FUNC_13();

 VAR_19 = FUNC_10(VAR_7,
   VAR_18 & VAR_3, VAR_17);
 if (FUNC_22(!VAR_19))
  return FUNC_1(-VAR_1);





 FUNC_12(&VAR_19->rb_node, VAR_4, VAR_18 & VAR_3);

retry:
 FUNC_16();
 if (!FUNC_5(VAR_6)) {
  FUNC_17();
  VAR_20 = FUNC_10(VAR_7, VAR_2, VAR_17);
  FUNC_16();

  if (FUNC_4(VAR_6, ((void*)0), VAR_20)) {
   if (VAR_20)
    FUNC_11(VAR_7, VAR_20);
  }
 }

 FUNC_20(&VAR_9);
 FUNC_17();





 VAR_21 = FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16);
 if (FUNC_22(VAR_21 == VAR_16))
  goto overflow;

 VAR_19->va_start = VAR_21;
 VAR_19->va_end = VAR_21 + VAR_13;
 VAR_19->vm = ((void*)0);
 FUNC_8(VAR_19, &VAR_10, &VAR_8);

 FUNC_21(&VAR_9);

 FUNC_0(!FUNC_2(VAR_19->va_start, VAR_14));
 FUNC_0(VAR_19->va_start < VAR_15);
 FUNC_0(VAR_19->va_end > VAR_16);

 return VAR_19;

overflow:
 FUNC_21(&VAR_9);
 if (!VAR_22) {
  FUNC_19();
  VAR_22 = 1;
  goto retry;
 }

 if (FUNC_7(VAR_18)) {
  unsigned long VAR_23 = 0;
  FUNC_6(&VAR_12, 0, &VAR_23);
  if (VAR_23 > 0) {
   VAR_22 = 0;
   goto retry;
  }
 }

 if (!(VAR_18 & VAR_5) && FUNC_18())
  FUNC_15("vmap allocation for size %lu failed: use vmalloc=<size> to increase size\n",
   VAR_13);

 FUNC_11(VAR_7, VAR_19);
 return FUNC_1(-VAR_0);
}
