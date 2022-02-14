
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpressure {unsigned long tree_scanned; unsigned long tree_reclaimed; unsigned long scanned; unsigned long reclaimed; int sr_lock; int work; } ;
struct mem_cgroup {scalar_t__ socket_pressure; } ;
typedef int gfp_t ;
typedef enum vmpressure_levels { ____Placeholder_vmpressure_levels } vmpressure_levels ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct vmpressure* FUNC_0 (struct mem_cgroup*) ;
 struct mem_cgroup* VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 unsigned long VAR_8 ;

void FUNC_5(gfp_t VAR_9, struct mem_cgroup *VAR_10, bool VAR_11,
  unsigned long VAR_12, unsigned long VAR_13)
{
 struct vmpressure *VAR_14 = FUNC_0(VAR_10);
 if (!(VAR_9 & (VAR_3 | VAR_5 | VAR_4 | VAR_2)))
  return;
 if (!VAR_12)
  return;

 if (VAR_11) {
  FUNC_2(&VAR_14->sr_lock);
  VAR_12 = VAR_14->tree_scanned += VAR_12;
  VAR_14->tree_reclaimed += VAR_13;
  FUNC_3(&VAR_14->sr_lock);

  if (VAR_12 < VAR_8)
   return;
  FUNC_1(&VAR_14->work);
 } else {
  enum vmpressure_levels VAR_15;


  if (!VAR_10 || VAR_10 == VAR_7)
   return;

  FUNC_2(&VAR_14->sr_lock);
  VAR_12 = VAR_14->scanned += VAR_12;
  VAR_13 = VAR_14->reclaimed += VAR_13;
  if (VAR_12 < VAR_8) {
   FUNC_3(&VAR_14->sr_lock);
   return;
  }
  VAR_14->scanned = VAR_14->reclaimed = 0;
  FUNC_3(&VAR_14->sr_lock);

  VAR_15 = FUNC_4(VAR_12, VAR_13);

  if (VAR_15 > VAR_1) {
   VAR_10->socket_pressure = VAR_6 + VAR_0;
  }
 }
}
