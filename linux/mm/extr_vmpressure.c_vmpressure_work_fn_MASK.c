
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct vmpressure {unsigned long tree_scanned; unsigned long tree_reclaimed; int sr_lock; } ;
typedef enum vmpressure_levels { ____Placeholder_vmpressure_levels } vmpressure_levels ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (struct vmpressure*,int,int,int) ;
 struct vmpressure* FUNC_4 (struct vmpressure*) ;
 struct vmpressure* FUNC_5 (struct work_struct*) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_0)
{
 struct vmpressure *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2;
 unsigned long VAR_3;
 enum vmpressure_levels VAR_4;
 bool VAR_5 = 0;
 bool VAR_6 = 0;

 FUNC_0(&VAR_1->sr_lock);
 VAR_2 = VAR_1->tree_scanned;
 if (!VAR_2) {
  FUNC_1(&VAR_1->sr_lock);
  return;
 }

 VAR_3 = VAR_1->tree_reclaimed;
 VAR_1->tree_scanned = 0;
 VAR_1->tree_reclaimed = 0;
 FUNC_1(&VAR_1->sr_lock);

 VAR_4 = FUNC_2(VAR_2, VAR_3);

 do {
  if (FUNC_3(VAR_1, VAR_4, VAR_5, VAR_6))
   VAR_6 = 1;
  VAR_5 = 1;
 } while ((VAR_1 = FUNC_4(VAR_1)));
}
