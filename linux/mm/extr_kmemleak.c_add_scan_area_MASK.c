
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmemleak_scan_area {unsigned long start; size_t size; int node; } ;
struct kmemleak_object {unsigned long pointer; unsigned long size; int lock; int area_list; int flags; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct kmemleak_object*) ;
 struct kmemleak_object* FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 struct kmemleak_scan_area* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,struct kmemleak_scan_area*) ;
 int FUNC_7 (char*,unsigned long) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct kmemleak_object*) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_3, size_t VAR_4, gfp_t VAR_5)
{
 unsigned long VAR_6;
 struct kmemleak_object *VAR_7;
 struct kmemleak_scan_area *VAR_8 = ((void*)0);

 VAR_7 = FUNC_2(VAR_3, 1);
 if (!VAR_7) {
  FUNC_7("Adding scan area to unknown object at 0x%08lx\n",
         VAR_3);
  return;
 }

 if (VAR_2)
  VAR_8 = FUNC_5(VAR_2, FUNC_3(VAR_5));

 FUNC_10(&VAR_7->lock, VAR_6);
 if (!VAR_8) {
  FUNC_8("Cannot allocate a scan area, scanning the full object\n");

  VAR_7->flags |= VAR_0;
  goto out_unlock;
 }
 if (VAR_4 == VAR_1) {
  VAR_4 = VAR_7->pointer + VAR_7->size - VAR_3;
 } else if (VAR_3 + VAR_4 > VAR_7->pointer + VAR_7->size) {
  FUNC_7("Scan area larger than object 0x%08lx\n", VAR_3);
  FUNC_1(VAR_7);
  FUNC_6(VAR_2, VAR_8);
  goto out_unlock;
 }

 FUNC_0(&VAR_8->node);
 VAR_8->start = VAR_3;
 VAR_8->size = VAR_4;

 FUNC_4(&VAR_8->node, &VAR_7->area_list);
out_unlock:
 FUNC_11(&VAR_7->lock, VAR_6);
 FUNC_9(VAR_7);
}
