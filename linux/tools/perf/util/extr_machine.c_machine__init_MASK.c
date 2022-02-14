
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct machine {int pid; int kptr_restrict_warned; int comm_exec; int * mmap_name; int * root_dir; int * current_tid; int * vmlinux_map; scalar_t__ kernel_start; scalar_t__ id_hdr_size; int * env; int * vdso_info; int dsos; int rb_node; int kmaps; } ;
typedef int pid_t ;
typedef int comm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct thread* FUNC_2 (struct machine*,int,int) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 int FUNC_4 (struct machine*) ;
 int FUNC_5 (int *,struct machine*) ;
 int FUNC_6 (struct machine*,int ,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*,char*,int ) ;
 int FUNC_11 (int **) ;

int FUNC_12(struct machine *VAR_2, const char *VAR_3, pid_t VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_6(VAR_2, 0, sizeof(*VAR_2));
 FUNC_5(&VAR_2->kmaps, VAR_2);
 FUNC_0(&VAR_2->rb_node);
 FUNC_1(&VAR_2->dsos);

 FUNC_4(VAR_2);

 VAR_2->vdso_info = ((void*)0);
 VAR_2->env = ((void*)0);

 VAR_2->pid = VAR_4;

 VAR_2->id_hdr_size = 0;
 VAR_2->kptr_restrict_warned = 0;
 VAR_2->comm_exec = 0;
 VAR_2->kernel_start = 0;
 VAR_2->vmlinux_map = ((void*)0);

 VAR_2->root_dir = FUNC_8(VAR_3);
 if (VAR_2->root_dir == ((void*)0))
  return -VAR_0;

 if (FUNC_3(VAR_2))
  goto out;

 if (VAR_4 != VAR_1) {
  struct thread *VAR_6 = FUNC_2(VAR_2, -1,
        VAR_4);
  char VAR_7[64];

  if (VAR_6 == ((void*)0))
   goto out;

  FUNC_7(VAR_7, sizeof(VAR_7), "[guest/%d]", VAR_4);
  FUNC_10(VAR_6, VAR_7, 0);
  FUNC_9(VAR_6);
 }

 VAR_2->current_tid = ((void*)0);
 VAR_5 = 0;

out:
 if (VAR_5) {
  FUNC_11(&VAR_2->root_dir);
  FUNC_11(&VAR_2->mmap_name);
 }
 return 0;
}
