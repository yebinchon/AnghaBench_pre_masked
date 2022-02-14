
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap_area {unsigned long va_start; unsigned long va_end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (void*,unsigned long) ;
 struct vmap_area* FUNC_3 (unsigned long) ;
 int FUNC_4 (struct vmap_area*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (void const*,unsigned long) ;

void FUNC_8(const void *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6 = (unsigned long)VAR_5 << VAR_0;
 unsigned long VAR_7 = (unsigned long)VAR_4;
 struct vmap_area *VAR_8;

 FUNC_6();
 FUNC_0(!VAR_7);
 FUNC_0(VAR_7 < VAR_2);
 FUNC_0(VAR_7 > VAR_1);
 FUNC_0(!FUNC_1(VAR_7));

 if (FUNC_5(VAR_5 <= VAR_3)) {
  FUNC_2(VAR_4, VAR_6);
  FUNC_7(VAR_4, VAR_6);
  return;
 }

 VAR_8 = FUNC_3(VAR_7);
 FUNC_0(!VAR_8);
 FUNC_2((void *)VAR_8->va_start,
        (VAR_8->va_end - VAR_8->va_start));
 FUNC_4(VAR_8);
}
