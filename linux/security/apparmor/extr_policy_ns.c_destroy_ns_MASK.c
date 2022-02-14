
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {int profiles; } ;
struct aa_ns {int lock; TYPE_1__ labels; struct aa_ns* parent; int sub_ns; TYPE_2__ base; int level; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct aa_ns*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct aa_ns*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct aa_ns *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_4(&VAR_0->lock, VAR_0->level);

 FUNC_0(&VAR_0->base.profiles);


 FUNC_3(&VAR_0->sub_ns);

 if (VAR_0->parent) {
  unsigned long VAR_1;

  FUNC_7(&VAR_0->labels.lock, VAR_1);
  FUNC_1(FUNC_6(VAR_0),
        FUNC_6(VAR_0->parent));
  FUNC_8(&VAR_0->labels.lock, VAR_1);
 }
 FUNC_2(VAR_0);
 FUNC_5(&VAR_0->lock);
}
