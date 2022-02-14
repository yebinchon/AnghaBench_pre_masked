
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpressure_event {int level; int mode; int node; struct eventfd_ctx* efd; } ;
struct vmpressure {int events_lock; int events; } ;
struct mem_cgroup {int dummy; } ;
struct eventfd_ctx {int dummy; } ;
typedef enum vmpressure_modes { ____Placeholder_vmpressure_modes } vmpressure_modes ;
typedef enum vmpressure_levels { ____Placeholder_vmpressure_levels } vmpressure_levels ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ,int ) ;
 struct vmpressure_event* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,char*) ;
 struct vmpressure* FUNC_5 (struct mem_cgroup*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_9(struct mem_cgroup *VAR_8,
         struct eventfd_ctx *VAR_9, const char *VAR_10)
{
 struct vmpressure *VAR_11 = FUNC_5(VAR_8);
 struct vmpressure_event *VAR_12;
 enum vmpressure_modes VAR_13 = VAR_3;
 enum vmpressure_levels VAR_14;
 char *VAR_15, *VAR_16;
 char *VAR_17;
 int VAR_18 = 0;

 VAR_16 = VAR_15 = FUNC_1(VAR_10, VAR_2, VAR_1);
 if (!VAR_15) {
  VAR_18 = -VAR_0;
  goto out;
 }


 VAR_17 = FUNC_8(&VAR_15, ",");
 VAR_18 = FUNC_4(VAR_6, VAR_4, VAR_17);
 if (VAR_18 < 0)
  goto out;
 VAR_14 = VAR_18;


 VAR_17 = FUNC_8(&VAR_15, ",");
 if (VAR_17) {
  VAR_18 = FUNC_4(VAR_7, VAR_5, VAR_17);
  if (VAR_18 < 0)
   goto out;
  VAR_13 = VAR_18;
 }

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_12->efd = VAR_9;
 VAR_12->level = VAR_14;
 VAR_12->mode = VAR_13;

 FUNC_6(&VAR_11->events_lock);
 FUNC_3(&VAR_12->node, &VAR_11->events);
 FUNC_7(&VAR_11->events_lock);
 VAR_18 = 0;
out:
 FUNC_0(VAR_16);
 return VAR_18;
}
