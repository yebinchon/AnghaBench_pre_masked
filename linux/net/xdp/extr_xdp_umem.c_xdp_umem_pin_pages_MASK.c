
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdp_umem {long npgs; int * pgs; int address; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int ,long,unsigned int,int *,int *) ;
 int * FUNC_2 (long,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xdp_umem*) ;

__attribute__((used)) static int FUNC_6(struct xdp_umem *VAR_6)
{
 unsigned int VAR_7 = VAR_2;
 long VAR_8;
 int VAR_9;

 VAR_6->pgs = FUNC_2(VAR_6->npgs, sizeof(*VAR_6->pgs),
       VAR_3 | VAR_4);
 if (!VAR_6->pgs)
  return -VAR_0;

 FUNC_0(&VAR_5->mm->mmap_sem);
 VAR_8 = FUNC_1(VAR_6->address, VAR_6->npgs,
         VAR_7 | VAR_1, &VAR_6->pgs[0], ((void*)0));
 FUNC_4(&VAR_5->mm->mmap_sem);

 if (VAR_8 != VAR_6->npgs) {
  if (VAR_8 >= 0) {
   VAR_6->npgs = VAR_8;
   VAR_9 = -VAR_0;
   goto out_pin;
  }
  VAR_9 = VAR_8;
  goto out_pgs;
 }
 return 0;

out_pin:
 FUNC_5(VAR_6);
out_pgs:
 FUNC_3(VAR_6->pgs);
 VAR_6->pgs = ((void*)0);
 return VAR_9;
}
