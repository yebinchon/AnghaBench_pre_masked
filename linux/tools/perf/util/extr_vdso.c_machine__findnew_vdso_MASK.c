
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdso_info {int vdso; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct machine {TYPE_1__ dsos; struct vdso_info* vdso_info; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 struct dso* FUNC_0 (TYPE_1__*,int ,int) ;
 struct dso* FUNC_1 (struct machine*,int ,char*) ;
 scalar_t__ FUNC_2 (struct machine*,struct thread*,struct vdso_info*,struct dso**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dso*) ;
 char* FUNC_5 (int *) ;
 struct dso* FUNC_6 (struct machine*,struct thread*) ;
 int FUNC_7 (int *) ;
 struct vdso_info* FUNC_8 () ;

struct dso *FUNC_9(struct machine *VAR_1,
      struct thread *VAR_2)
{
 struct vdso_info *VAR_3;
 struct dso *VAR_4 = ((void*)0);

 FUNC_3(&VAR_1->dsos.lock);
 if (!VAR_1->vdso_info)
  VAR_1->vdso_info = FUNC_8();

 VAR_3 = VAR_1->vdso_info;
 if (!VAR_3)
  goto out_unlock;

 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (VAR_4)
  goto out_unlock;






 VAR_4 = FUNC_0(&VAR_1->dsos, VAR_0, 1);
 if (!VAR_4) {
  char *VAR_5;

  VAR_5 = FUNC_5(&VAR_3->vdso);
  if (VAR_5)
   VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_5);
 }

out_unlock:
 FUNC_4(VAR_4);
 FUNC_7(&VAR_1->dsos.lock);
 return VAR_4;
}
