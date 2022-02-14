
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vm_area_struct {int vm_flags; scalar_t__ vm_start; scalar_t__ vm_end; int vm_file; scalar_t__ anon_vma; TYPE_1__* vm_mm; } ;
struct cred {int dummy; } ;
struct TYPE_5__ {scalar_t__ checkreqprot; } ;
struct TYPE_4__ {scalar_t__ start_brk; scalar_t__ brk; scalar_t__ start_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (struct cred const*) ;
 struct cred* FUNC_2 () ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct cred const*,int ,int ) ;
 int FUNC_4 (int ,unsigned long,int) ;
 TYPE_2__ VAR_8 ;
 scalar_t__ FUNC_5 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_9,
     unsigned long VAR_10,
     unsigned long VAR_11)
{
 const struct cred *VAR_12 = FUNC_2();
 u32 VAR_13 = FUNC_1(VAR_12);

 if (VAR_8.checkreqprot)
  VAR_11 = VAR_10;

 if (VAR_7 &&
     (VAR_11 & VAR_3) && !(VAR_9->vm_flags & VAR_5)) {
  int VAR_14 = 0;
  if (VAR_9->vm_start >= VAR_9->vm_mm->start_brk &&
      VAR_9->vm_end <= VAR_9->vm_mm->brk) {
   VAR_14 = FUNC_0(&VAR_8,
       VAR_13, VAR_13, VAR_4,
       VAR_1, ((void*)0));
  } else if (!VAR_9->vm_file &&
      ((VAR_9->vm_start <= VAR_9->vm_mm->start_stack &&
        VAR_9->vm_end >= VAR_9->vm_mm->start_stack) ||
       FUNC_5(VAR_9))) {
   VAR_14 = FUNC_0(&VAR_8,
       VAR_13, VAR_13, VAR_4,
       VAR_2, ((void*)0));
  } else if (VAR_9->vm_file && VAR_9->anon_vma) {







   VAR_14 = FUNC_3(VAR_12, VAR_9->vm_file, VAR_0);
  }
  if (VAR_14)
   return VAR_14;
 }

 return FUNC_4(VAR_9->vm_file, VAR_11, VAR_9->vm_flags&VAR_6);
}
