
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mem_cgroup_event {int (* register_event ) (struct mem_cgroup*,struct cgroup_subsys_state*,char*) ;struct cgroup_subsys_state* eventfd; int list; int pt; int unregister_event; int remove; int wait; struct mem_cgroup* memcg; } ;
struct mem_cgroup {int event_list_lock; int event_list; } ;
struct kernfs_open_file {int dummy; } ;
struct fd {TYPE_4__* file; } ;
struct cgroup_subsys_state {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_9__ {TYPE_2__* dentry; } ;
struct TYPE_10__ {TYPE_3__ f_path; } ;
struct TYPE_7__ {char* name; } ;
struct TYPE_8__ {int d_parent; TYPE_1__ d_name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct cgroup_subsys_state*) ;
 int VAR_4 ;
 int FUNC_3 (struct cgroup_subsys_state*) ;
 int FUNC_4 (struct cgroup_subsys_state*) ;
 struct cgroup_subsys_state* FUNC_5 (int ,int *) ;
 struct cgroup_subsys_state* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct cgroup_subsys_state*) ;
 struct fd FUNC_8 (unsigned int) ;
 int FUNC_9 (struct fd) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct mem_cgroup_event*) ;
 struct mem_cgroup_event* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int *) ;
 struct mem_cgroup* FUNC_17 (struct cgroup_subsys_state*) ;
 int FUNC_18 (struct mem_cgroup*,struct cgroup_subsys_state*,char*) ;
 int VAR_5 ;
 int FUNC_19 (struct mem_cgroup*,struct cgroup_subsys_state*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (struct mem_cgroup*,struct cgroup_subsys_state*,char*) ;
 int VAR_11 ;
 struct cgroup_subsys_state* FUNC_21 (struct kernfs_open_file*) ;
 unsigned int FUNC_22 (char*,char**,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (char const*,char*) ;
 char* FUNC_26 (char*) ;
 int FUNC_27 (struct mem_cgroup*,struct cgroup_subsys_state*,char*) ;
 int FUNC_28 (TYPE_4__*,int *) ;
 int FUNC_29 (struct mem_cgroup*,struct cgroup_subsys_state*,char*) ;
 int VAR_12 ;

__attribute__((used)) static ssize_t FUNC_30(struct kernfs_open_file *VAR_13,
      char *VAR_14, size_t VAR_15, loff_t VAR_16)
{
 struct cgroup_subsys_state *VAR_17 = FUNC_21(VAR_13);
 struct mem_cgroup *VAR_18 = FUNC_17(VAR_17);
 struct mem_cgroup_event *VAR_19;
 struct cgroup_subsys_state *VAR_20;
 unsigned int VAR_21, VAR_22;
 struct fd VAR_23;
 struct fd VAR_24;
 const char *VAR_25;
 char *VAR_26;
 int VAR_27;

 VAR_14 = FUNC_26(VAR_14);

 VAR_21 = FUNC_22(VAR_14, &VAR_26, 10);
 if (*VAR_26 != ' ')
  return -VAR_1;
 VAR_14 = VAR_26 + 1;

 VAR_22 = FUNC_22(VAR_14, &VAR_26, 10);
 if ((*VAR_26 != ' ') && (*VAR_26 != '\0'))
  return -VAR_1;
 VAR_14 = VAR_26 + 1;

 VAR_19 = FUNC_15(sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 VAR_19->memcg = VAR_18;
 FUNC_0(&VAR_19->list);
 FUNC_11(&VAR_19->pt, VAR_7);
 FUNC_12(&VAR_19->wait, VAR_9);
 FUNC_1(&VAR_19->remove, VAR_8);

 VAR_23 = FUNC_8(VAR_21);
 if (!VAR_23.file) {
  VAR_27 = -VAR_0;
  goto out_kfree;
 }

 VAR_19->eventfd = FUNC_6(VAR_23.file);
 if (FUNC_2(VAR_19->eventfd)) {
  VAR_27 = FUNC_3(VAR_19->eventfd);
  goto out_put_efile;
 }

 VAR_24 = FUNC_8(VAR_22);
 if (!VAR_24.file) {
  VAR_27 = -VAR_0;
  goto out_put_eventfd;
 }



 VAR_27 = FUNC_13(FUNC_10(VAR_24.file), VAR_4);
 if (VAR_27 < 0)
  goto out_put_cfile;
 VAR_25 = VAR_24.file->f_path.dentry->d_name.name;

 if (!FUNC_25(VAR_25, "memory.usage_in_bytes")) {
  VAR_19->register_event = FUNC_19;
  VAR_19->unregister_event = VAR_6;
 } else if (!FUNC_25(VAR_25, "memory.oom_control")) {
  VAR_19->register_event = FUNC_18;
  VAR_19->unregister_event = VAR_5;
 } else if (!FUNC_25(VAR_25, "memory.pressure_level")) {
  VAR_19->register_event = FUNC_29;
  VAR_19->unregister_event = VAR_12;
 } else if (!FUNC_25(VAR_25, "memory.memsw.usage_in_bytes")) {
  VAR_19->register_event = FUNC_20;
  VAR_19->unregister_event = VAR_11;
 } else {
  VAR_27 = -VAR_1;
  goto out_put_cfile;
 }






 VAR_20 = FUNC_5(VAR_24.file->f_path.dentry->d_parent,
            &VAR_10);
 VAR_27 = -VAR_1;
 if (FUNC_2(VAR_20))
  goto out_put_cfile;
 if (VAR_20 != VAR_17) {
  FUNC_4(VAR_20);
  goto out_put_cfile;
 }

 VAR_27 = VAR_19->register_event(VAR_18, VAR_19->eventfd, VAR_14);
 if (VAR_27)
  goto out_put_css;

 FUNC_28(VAR_23.file, &VAR_19->pt);

 FUNC_23(&VAR_18->event_list_lock);
 FUNC_16(&VAR_19->list, &VAR_18->event_list);
 FUNC_24(&VAR_18->event_list_lock);

 FUNC_9(VAR_24);
 FUNC_9(VAR_23);

 return VAR_15;

out_put_css:
 FUNC_4(VAR_17);
out_put_cfile:
 FUNC_9(VAR_24);
out_put_eventfd:
 FUNC_7(VAR_19->eventfd);
out_put_efile:
 FUNC_9(VAR_23);
out_kfree:
 FUNC_14(VAR_19);

 return VAR_27;
}
